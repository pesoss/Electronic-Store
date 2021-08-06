#pragma once
#include"Item.h"
class Headphones : public Item
{
	friend std::ostream& operator<<(std::ostream& out, const Headphones& rhs);
	friend std::istream& operator>>(std::istream& in, Headphones& to);
private:
	std::string type;
	std::string connectors;
	uint16_t chargeTime;
	uint16_t workTime;
	uint16_t weight;
public:
	std::string getType() const;
	void setType(const std::string& type);

	std::string getConnectors() const;
	void setConnectors(const std::string& connectors);

	uint16_t getChargeTime() const;
	void setChargeTime(const uint16_t& chargeTime);

	uint16_t getWorkTime() const;
	void setWorkTime(const uint16_t& workTime);

	uint16_t getWeight() const;
	void setWeight(const uint16_t& weight);

	Headphones();
	Headphones(const unsigned int& id, const std::string& name, const double& price,
		const std::string& type, const std::string& connectors, const uint16_t& chargeTime, const uint16_t& workTime, const uint16_t& weight);
	
	void print();

	Item* clone() const;
};