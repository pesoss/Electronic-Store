#include "SmartWatch.h"

std::string SmartWatch::getOS() const
{
    return this->OS;
}

void SmartWatch::setOS(const std::string OS)
{
    this->OS = OS;
}

std::string SmartWatch::getColor() const
{
    return this->color;
}

void SmartWatch::setColor(const std::string color)
{
    this->color = color;
}

double SmartWatch::getDisplay() const
{
    return this->display;
}

void SmartWatch::setDisplay(const double display)
{
    if(display > 0) {
        this->display = display;
    }
}

SmartWatch::SmartWatch() : Item(), OS(""), color(""), display(0.0)
{
}

SmartWatch::SmartWatch(const unsigned int& id, const std::string& name, const double& price,
    const std::string& OS, const std::string& color, const double& display) : Item(id, name, price)
{
    setOS(OS);
    setColor(color);
    setDisplay(display);
}

void SmartWatch::print()
{
    Item::print();
    std::cout << "\n\tOS: " << OS << "\n\tColor: " << color << "\n\tDisplay: " << display << std::endl;
}

Item* SmartWatch::clone() const
{
    return new SmartWatch(*this);
}

std::ostream& operator<<(std::ostream& out, SmartWatch& rhs)
{
    out << "\n\tID: " << rhs.id << "\n\tName: " << rhs.name << "\n\tPrice: " << rhs.price
        << "\n\tOS: " << rhs.OS << "\n\tColor: " << rhs.color << "\n\tDisplay: " << rhs.display << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, SmartWatch& to)
{
    std::cout << "\nEnter new Smart Watch\n";
    unsigned int id; std::cout << "Enter Smart Watch ID: "; std::cin >> id;
    to.setId(id);

    std::string name; std::cout << "Enter Smart Watch Name: "; std::getline(std::cin, name);
    to.setName(name);

    double price; std::cout << "Enter Smart Watch Price: "; std::cin >> price;
    to.setPrice(price);

    std::string OS; std::cout << "Enter Smart Watch OS: "; std::getline(std::cin, OS);
    to.setOS(OS);

    std::string color; std::cout << "Enter Smart Watch Color: "; std::getline(std::cin, color);
    to.setColor(color);

    double display; std::cout << "Enter Smart Watch Display: "; std::cin >> display;
    to.setDisplay(display);

    return in;
}