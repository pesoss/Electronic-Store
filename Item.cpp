#include "Item.h"
unsigned int Item::getId() const
{
	return this->id;
}

void Item::setId(const unsigned int& id)
{
	this->id = id;
}

std::string Item::getName() const
{
	return this->name;
}

void Item::setName(const std::string& name)
{
	this->name = name;
}

double Item::getPrice() const
{
	return this->price;
}

void Item::setPrice(const double& price)
{
	if (price > 0) {
		this->price = price;
	}
}

void Item::print()
{
	std::cout << "\n\tID: " << id << "\n\tName: " << name << "\n\tPrice: " << price;
}

Item::Item() : id(0), name(""), price(0)
{
}

Item::Item(const unsigned int id, const std::string name, const double price)
{
	/*
	this->id = id;
	this->name = name;
	this->price = price;
	*/
	setId(id);
	setName(name);
	setPrice(price);
}



std::ostream& operator<<(std::ostream& out, const Item& rhs)
{
	out << "\nID: " << rhs.id << "\nName: " << rhs.name << "\nPrice: " << rhs.price << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Item& to)
{
	std::cout << "\nEnter new Headphones\n";
	unsigned int id; std::cout << "Enter Headphones ID: "; std::cin >> id;
	to.setId(id);

	std::string name; std::cout << "Enter Headphones Name: "; std::getline(std::cin, name);
	to.setName(name);

	double price; std::cout << "Enter Headphones Price: "; std::cin >> price;
	to.setPrice(price);
	return in;
}