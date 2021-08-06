#pragma once
#include"Item.h"
class Laptop : public Item
{
	friend std::ostream& operator<<(std::ostream& out,const Laptop& rhs);
	friend std::istream& operator>>(std::istream& in,const Laptop& to);
private:
	std::string model;
	std::string procesor;
	std::string resolution;
	uint16_t SSD_capacity;
public:

	std::string getModel() const;
	void setModel(const std::string& model);

	std::string getProcesor() const;
	void setProcesor(const std::string& procesor);

	std::string getResolution() const;
	void setResolution(const std::string& resolution);

	uint16_t getSSD_capacity() const;
	void setSSD_capacity(const uint16_t& SSD_capacity);

	Laptop();
	Laptop(const unsigned int& id, const std::string& name, const double& price,
		const std::string& model, const std::string& procesor, const std::string& resolution, const uint16_t& SSD_capacity);
	
	void print();

	Item* clone() const;
};