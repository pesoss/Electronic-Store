#pragma once
#include"Item.h"
class SmartWatch : public Item
{
	friend std::ostream& operator<<(std::ostream& out, SmartWatch& rhs);
	friend std::istream& operator>>(std::istream& in, SmartWatch& to);
private:
	std::string OS;
	std::string color;
	double display;
public:
	std::string getOS() const;
	void setOS(const std::string OS);

	std::string getColor() const;
	void setColor(const std::string color);

	double getDisplay() const;
	void setDisplay(const double display);

	SmartWatch();
	SmartWatch(const unsigned int& id, const std::string& name, const double& price,
		const std::string& OS, const std::string& color, const double& display);
	
	void print();

	Item* clone() const;
};