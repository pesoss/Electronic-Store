#pragma once
#include<iostream>
#include<string>

class Item
{
	friend std::ostream& operator<<(std::ostream& out, const Item& rhs);
	friend std::istream& operator>>(std::istream& in, Item& to);
protected:
	unsigned int id;
	std::string name;
	double price;
public:
	unsigned int getId() const;
	void setId(const unsigned int& id);

	std::string getName() const;
	void setName(const std::string& name);

	double getPrice() const;
	void setPrice(const double& price);

	virtual void print() = 0;
	Item();
	Item(const unsigned int id, const std::string name, const double price);
	virtual Item* clone() const = 0;
};