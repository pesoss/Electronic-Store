#pragma once
#include"Item.h"
class TV : public Item
{
	friend std::ostream& operator<<(std::ostream& out, const TV& rhs);
	friend std::istream& operator>>(std::istream& in, TV& to);
private:
	double display;
	std::string resolution;
	uint16_t imageQuality;
	std::string OS;
	uint16_t year;
	std::string color;
public:
	double getDisplay() const;
	void setDisplay(const double& display);

	std::string getResolution() const;
	void setResolution(const std::string& resolution);

	uint16_t getImageQuality() const;
	void setImageQuality(const uint16_t& imageQuality);

	std::string getOS() const;
	void setOS(const std::string& OS);

	uint16_t getYear() const;
	void setYear(const uint16_t& year);

	std::string getColor() const;
	void setColor(const std::string& color);
	TV();
	TV(const unsigned int& id, const std::string& name, const double& price,
		const double& display, const std::string& resolution, const uint16_t& imageQuality,
		const std::string& OS, const uint16_t& year, const std::string& color);

	void print();

	Item* clone() const;
};