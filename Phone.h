#pragma once
#include"Item.h"
class Phone : public Item
{
	friend std::ostream& operator<<(std::ostream& out, Phone& rhs);
	friend std::istream& operator>>(std::istream& in, Phone& to);
private:
	uint16_t cores;
	std::string OS;
	double display;
	uint16_t RAM;
	uint16_t space;
public:
	uint16_t getCores() const;
	void setCores(const uint16_t& cores);

	std::string getOS() const;
	void setOS(const std::string& OS);

	double getDisplay() const;
	void setDisplay(const double& display);

	uint16_t getRAM() const;
	void setRAM(const uint16_t& RAM);

	uint16_t getSpace() const;
	void setSpace(const uint16_t& space);

	Phone();
	Phone(const unsigned int& id, const std::string& name, const double& price,
		const uint16_t cores, const std::string OS, const double display, const uint16_t RAM, const uint16_t space);

	void print();

	Item* clone() const;
};