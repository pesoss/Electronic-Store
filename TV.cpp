#include "TV.h"

double TV::getDisplay() const
{
    return this->display;
}

void TV::setDisplay(const double& display)
{
    if(display > 0){
        this->display = display;
    }
}

std::string TV::getResolution() const
{
    return this->resolution;
}

void TV::setResolution(const std::string& resolution)
{
    this->resolution = resolution;
}

uint16_t TV::getImageQuality() const
{
    return this->imageQuality;
}

void TV::setImageQuality(const uint16_t& imageQuality)
{
    if(imageQuality > 0){
        this->imageQuality = imageQuality;
    }
}

std::string TV::getOS() const
{
    return this->OS;
}

void TV::setOS(const std::string& OS)
{
    this->OS = OS;
}

uint16_t TV::getYear() const
{
    return this->year;
}

void TV::setYear(const uint16_t& year)
{
    if(year > 0){
        this->year = year;
    }
}

std::string TV::getColor() const
{
    return this->color;
}

void TV::setColor(const std::string& color)
{
    this->color = color;
}

TV::TV() : Item(), display(0), resolution(""), imageQuality(0), OS(""), year(0), color("")
{
}

TV::TV(const unsigned int& id, const std::string& name, const double& price,
    const double& display, const std::string& resolution, const uint16_t& imageQuality, const std::string& OS, const uint16_t& year, const std::string& color) : Item(id, name, price)
{
    setDisplay(display);
    setResolution(resolution);
    setImageQuality(imageQuality);
    setOS(OS);
    setYear(year);
    setColor(color);
}

void TV::print()
{
    Item::print();
    std::cout << "\n\tDisplay: " << display << " inch" << "\n\tResolution: " << resolution << "\n\tImage Quality: " << imageQuality << " K"
        << "\n\tOS: " << OS << "\n\tYear: " << year << "\n\tColor: " << color << std::endl;
}

Item* TV::clone() const
{
    return new TV(*this);
}

std::ostream& operator<<(std::ostream& out, const TV& rhs)
{
    out << "\n\tID: " << rhs.id << "\n\tName: " << rhs.name << "\n\tPrice: " << rhs.price
        << "\n\tDisplay: " << rhs.display << " inch" << "\n\tResolution: " << rhs.resolution << "\n\tImage Quality: " << rhs.imageQuality << " K"
        << "\n\tOS: " << rhs.OS << "\n\tYear: " << rhs.year << "\n\tColor: " << rhs.color << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, TV& to)
{
    std::cout << "\nEnter new TV\n";
    unsigned int id; std::cout << "Enter TV ID: "; std::cin >> id;
    to.setId(id);

    std::string name; std::cout << "Enter TV Name: "; std::getline(std::cin, name);
    to.setName(name);

    double price; std::cout << "Enter TV Price: "; std::cin >> price;
    to.setPrice(price);

    double display; std::cout << "Enter TV Display: "; std::cin >> display;
    to.setDisplay(display);

    std::string resolution; std::cout << "Enter TV Resolution: "; std::getline(std::cin, resolution);
    to.setResolution(resolution);

    uint16_t imageQuality; std::cout << "Enter TV Image Quality: "; std::cin >> imageQuality;
    to.setImageQuality(imageQuality);

    std::string OS; std::cout << "Enter TV OS: "; std::getline(std::cin, OS);
    to.setOS(OS);

    uint16_t year; std::cout << "Enter TV Year: "; std::cin >> year;
    to.setYear(year);

    std::string color; std::cout << "Enter TV Color: "; std::getline(std::cin, color);
    to.setColor(color);

    return in;
}