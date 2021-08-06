#include "Headphones.h"

std::string Headphones::getType() const
{
    return this->type;
}

void Headphones::setType(const std::string& type)
{
    this->type = type;
}

std::string Headphones::getConnectors() const
{
    return this->connectors;
}

void Headphones::setConnectors(const std::string& connectors)
{
    this->connectors = connectors;
}

uint16_t Headphones::getChargeTime() const
{
    return this->chargeTime;
}

void Headphones::setChargeTime(const uint16_t& chargeTime)
{
    if (chargeTime > 0) {
        this->chargeTime = chargeTime;
    }
}

uint16_t Headphones::getWorkTime() const
{
    return this->workTime;
}

void Headphones::setWorkTime(const uint16_t& workTime)
{
    if (workTime > 0) {
        this->workTime = workTime;
    }
}

uint16_t Headphones::getWeight() const
{
    return this->weight;
}

void Headphones::setWeight(const uint16_t& weight)
{
    if (weight > 0) {
        this->weight = weight;
    }
}

Headphones::Headphones() : Item(), type(""), connectors(""), chargeTime(0), workTime(0), weight(0)
{
}

Headphones::Headphones(const unsigned int& id, const std::string& name, const double& price,
    const std::string& type, const std::string& connectors, const uint16_t& chargeTime, const uint16_t& workTime, const uint16_t& weight) : Item(id, name, price)
{
    setType(type);
    setConnectors(connectors);
    setChargeTime(chargeTime);
    setWorkTime(workTime);
    setWeight(weight);
}

void Headphones::print()
{
    Item::print();
    std::cout << "\n\tType: " << type << "\n\tConnectors: " << connectors << "\n\tCharge Time: " << chargeTime << " h" 
        << "\n\tWork Time: " << workTime << " h" << "\n\tWeight: " << weight << " g" << std::endl;
}

Item* Headphones::clone() const
{
    return new Headphones(*this);
}

std::ostream& operator<<(std::ostream& out, const Headphones& rhs)
{
    out << "\n\tID: " << rhs.id << "\n\tName: " << rhs.name << "\n\tPrice: " << rhs.price
        << "\n\tType: " << rhs.type << "\n\tConnectors: " << rhs.connectors << "\n\tCharge Time: " << rhs.chargeTime << " h"
        << "\n\tWork Time: " << rhs.workTime << " h" << "\n\tWeight: " << rhs.weight << " g" << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, Headphones& to)
{
    std::cout << "\nEnter new Headphones\n";
    unsigned int id; std::cout << "Enter Headphones ID: "; std::cin >> id;
    to.setId(id);

    std::string name; std::cout << "Enter Headphones Name: "; std::getline(std::cin, name);
    to.setName(name);

    double price; std::cout << "Enter Headphones Price: "; std::cin >> price;
    to.setPrice(price);

    std::string type; std::cout << "Enter Headphones Type: "; std::getline(std::cin, type);
    to.setType(type);

    std::string connectors; std::cout << "Enter Headphones Connectors: "; std::getline(std::cin, connectors);
    to.setConnectors(connectors);

    uint16_t chargeTime; std::cout << "Enter Headphones Charge Time: "; std::cin >> chargeTime;
    to.setChargeTime(chargeTime);

    uint16_t workTime; std::cout << "Enter Work Time: "; std::cin >> workTime;
    to.setWorkTime(workTime);

    uint16_t weight; std::cout << "Enter Weight: "; std::cin >> weight;
    to.setWeight(weight);

    return in;
}