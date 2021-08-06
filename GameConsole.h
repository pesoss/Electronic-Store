#pragma once
#include"Item.h"
class GameConsole : public Item
{
	friend std::ostream& operator<<(std::ostream& out, const GameConsole& rhs);
	friend std::istream& operator>>(std::istream& in, GameConsole& to);
private:
	std::string platform;
	std::string color;
	uint16_t RAM;
	double weight;
	uint16_t capacity;
public:
	std::string getPlatform() const;
	void setPlatform(const std::string& platform);

	std::string getColor() const;
	void setColor(const std::string& color);

	uint16_t getRAM() const;
	void setRAM(const uint16_t& RAM);

	double getWeight() const;
	void setWeight(const double& weight);

	uint16_t getCapacity() const;
	void setCapacity(const uint16_t& capacity);

	GameConsole();
	GameConsole(const unsigned int& id, const std::string& name, const double& price,
		const std::string& platform, const std::string& color, const uint16_t& RAM, const double& weight, const uint16_t& cpacity);
	
	void print();

	Item* clone() const;
};