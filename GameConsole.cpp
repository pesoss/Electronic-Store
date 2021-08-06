#include "GameConsole.h"

std::string GameConsole::getPlatform() const
{
    return this->platform;
}

void GameConsole::setPlatform(const std::string& platform)
{
    this->platform = platform;
}

std::string GameConsole::getColor() const
{
    return this->color;
}

void GameConsole::setColor(const std::string& color)
{
    this->color = color;
}

uint16_t GameConsole::getRAM() const
{
    return this->RAM;
}

void GameConsole::setRAM(const uint16_t& RAM)
{
    if (RAM > 0) {
        this->RAM = RAM;
    }
}

double GameConsole::getWeight() const
{
    return this->weight;
}

void GameConsole::setWeight(const double& weight)
{
    if (weight > 0) {
        this->weight = weight;
    }
}

uint16_t GameConsole::getCapacity() const
{
    return this->capacity;
}

void GameConsole::setCapacity(const uint16_t& capacity)
{
    if (capacity > 0) {
        this->capacity = capacity;
    }
}

GameConsole::GameConsole() : Item(), platform(""), color(""), RAM(0), weight(0), capacity(0)
{
}

GameConsole::GameConsole(const unsigned int& id, const std::string& name, const double& price,
    const std::string& platform, const std::string& color, const uint16_t& RAM, const double& weight, const uint16_t& capacity) : Item(id, name, price)
{
    setPlatform(platform);
    setColor(color);
    setRAM(RAM);
    setWeight(weight);
    setCapacity(capacity);
}

void GameConsole::print()
{
    Item::print();
    std::cout << "\n\tPlatform: " << platform << "\n\tColor: " << color << "\n\tRAM: " << RAM << " GB" << "\n\tWeight: " << weight << " Kg" << "\n\tCapacity: " << capacity << " GB" << "\n";
}

Item* GameConsole::clone() const
{
    return new GameConsole(*this);
}

std::ostream& operator<<(std::ostream& out, const GameConsole& rhs)
{
    out << "\n\tID: " << rhs.id << "\n\tName: " << rhs.name << "\n\tPrice: " << rhs.price
        << "\n\tPlatform: " << rhs.platform << "\n\tColor: " << rhs.color << "\n\tRAM: " << rhs.RAM << " GB"
        << "\n\tWeight: " << rhs.weight << " Kg" << "\n\tCapacity: " << rhs.capacity << " GB" << std::endl;
    printf("\n");
    return out;
}

std::istream& operator>>(std::istream& in, GameConsole& to)
{
    std::cout << "\nEnter new GameConsole\n";
    unsigned int id; std::cout << "Enter GameConsole ID: "; std::cin >> id;
    to.setId(id);

    std::string name; std::cout << "Enter GameConsole Name: "; std::getline(std::cin, name);
    to.setName(name);

    double price; std::cout << "Enter GameConsole Price: "; std::cin >> price;
    to.setPrice(price);

    std::string platform; std::cout << "Enter GameConsole Platform: "; std::getline(std::cin, platform);
    to.setPlatform(platform);

    std::string color; std::cout << "Enter GameConsole Color: "; std::getline(std::cin, color);
    to.setColor(color);

    uint16_t RAM; std::cout << "Enter GameConsole RAM: "; std::cin >> RAM;
    to.setRAM(RAM);

    double weight; std::cout << "Enter GameConsole Weight: "; std::cin >> weight;
    to.setWeight(weight);
    
    uint16_t capacity; std::cout << "Enter GameConsole Capacity: "; std::cin >> capacity;
    to.setCapacity(capacity);
    
    return in;
}