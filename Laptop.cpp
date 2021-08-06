#include "Laptop.h"

std::string Laptop::getModel() const
{
	return this->model;
}

void Laptop::setModel(const std::string& model)
{
	this->model = model;
}

std::string Laptop::getProcesor() const
{
	return this->procesor;
}

void Laptop::setProcesor(const std::string& procesor)
{
	this->procesor = procesor;
}

std::string Laptop::getResolution() const
{
	return this->resolution;
}

void Laptop::setResolution(const std::string& resolution)
{
	this->resolution = resolution;
}

uint16_t Laptop::getSSD_capacity() const
{
	return this->SSD_capacity;
}

void Laptop::setSSD_capacity(const uint16_t& SSD_capacity)
{
	if (SSD_capacity > 0) {
		this->SSD_capacity = SSD_capacity;
	}
}

Laptop::Laptop() : Item(), model(""), procesor(""), resolution(""), SSD_capacity(0)
{
	/*second way
	this->model = "";
	this->procesor = "";
	this->resolution = "";
	this->SSD_capacity = 0;
	*/
	/*third way
	setModel("");
	setProcesor("");
	setResolution("");
	setSSD_capacity(0);
	*/
}

Laptop::Laptop(const unsigned int& id, const std::string& name, const double& price,
	const std::string& model, const std::string& procesor, const std::string& resolution, const uint16_t& SSD_capacity) : Item(id, name, price)
{
	/*
	this->model = model;
	this->procesor = procesor;
	this->resolution = resolution;
	this->SSD_capacity = SSD_capacity;
	*/
	setModel(model);
	setProcesor(procesor);
	setResolution(resolution);
	setSSD_capacity(SSD_capacity);
}

void Laptop::print()
{
	Item::print();
	std::cout << "\n\tModel: " << model << "\n\tProcesor: " << procesor << "\n\tResolution: " << resolution << "\n\tSSD Capacity: " << SSD_capacity << " GB" << std::endl;
}

Item* Laptop::clone() const
{
	return new Laptop(*this);
}

std::ostream& operator<<(std::ostream& out, const Laptop& rhs)
{
	out << "\n\tID: " << rhs.id << "\n\tName: " << rhs.name << "\n\tPrice: " << rhs.price << "\n\tModel: " << rhs.model << "\n\tProcesor: "
		<< rhs.procesor << "\n\tResolution: " << rhs.resolution << "\n\tSSD Capacity: " << rhs.SSD_capacity << " GB" << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Laptop& to)
{
	std::cout << "\nEnter new Laptop\n";
	unsigned int id; std::cout << "Enter Laptop ID: "; std::cin >> id;
	to.setId(id);

	std::string name; std::cout << "Enter Laptop Name: "; std::getline(std::cin, name);
	to.setName(name);

	double price; std::cout << "Enter Laptop Price: "; std::cin >> price;
	to.setPrice(price);

	std::string model; std::cout << "Enter Laptop Model: "; std::getline(std::cin, model);
	to.setModel(model);

	std::string procesor; std::cout << "Enter Laptop Procesor: "; std::getline(std::cin, procesor);
	to.setProcesor(procesor);

	std::string resolution; std::cout << "Enter Laptop Resolution: "; std::getline(std::cin, resolution);
	to.setResolution(resolution);

	uint16_t SSD_capacity; std::cout << "Enter Laptop SSD capacity: "; std::cin >> SSD_capacity;
	to.setSSD_capacity(SSD_capacity);

	return in;
}