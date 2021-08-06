#include "Phone.h"

uint16_t Phone::getCores() const
{
	return this->cores;
}

void Phone::setCores(const uint16_t& cores)
{
	if (cores > 0) {
		this->cores = cores;
	}	
}

std::string Phone::getOS() const
{
	return this->OS;
}

void Phone::setOS(const std::string& OS)
{
	this->OS = OS;
}

double Phone::getDisplay() const
{
	return this->display;
}

void Phone::setDisplay(const double& display)
{
	if (display > 0) {
		this->display = display;
	}
}

uint16_t Phone::getRAM() const
{
	return this->RAM;
}

void Phone::setRAM(const uint16_t& RAM)
{
	if (RAM > 0) {
		this->RAM = RAM;
	}
}

uint16_t Phone::getSpace() const
{
	return this->space;
}

void Phone::setSpace(const uint16_t& space)
{
	if (space > 0) {
		this->space = space;
	}
}


Phone::Phone() : Item(), cores(0), OS(""), display(0.0), RAM(0), space(0)
{
}

Phone::Phone(const unsigned int& id, const std::string& name, const double& price,
	const uint16_t cores, const std::string OS, const double display, const uint16_t RAM, const uint16_t space) : Item(id, name, price)
{
	setCores(cores);
	setOS(OS);
	setDisplay(display);
	setRAM(RAM);
	setSpace(space);
	/*
	this->cores = cores;
	this->OS = OS;
	this->display = display;
	this->RAM = RAM;
	this->space = space;
	*/
}

void Phone::print()
{
	Item::print();
	std::cout << "\n\tCores: " << cores << "\n\tOS: " << OS << "\n\tDisplay: " << display << " inch" 
		<< "\n\tRAM: " << RAM << " GB" << "\n\tSpace: " << space << " GB" << std::endl;
}

Item* Phone::clone() const
{
	return new Phone(*this);
}

std::ostream& operator<<(std::ostream& out, Phone& rhs)
{
	out << "\n\tID: " << rhs.id << "\n\tName: " << rhs.name << "\n\tPrice: " << rhs.price 
		<< "\n\tCores: " << rhs.cores << "\n\tOS: " << rhs.OS << "\n\tDisplay: " << rhs.display << " inch"
		<< "\n\tRAM: " << rhs.RAM << " GB" << "\n\tSpace: " << rhs.space << " GB" << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Phone& to)
{
	std::cout << "\nEnter new Phone\n";
	unsigned int id; std::cout << "Enter Phone ID: "; std::cin >> id;
	to.setId(id);

	std::string name; std::cout << "Enter Phone Name: "; std::getline(std::cin, name);
	to.setName(name);

	double price; std::cout << "Enter Phone Price: "; std::cin >> price;
	to.setPrice(price);

	uint16_t cores; std::cout << "Enter Phone Cores: "; std::cin >> cores;
	to.setCores(cores);

	std::string OS; std::cout << "Enter Phone OS: "; std::getline(std::cin, OS);
	to.setOS(OS);

	double display; std::cout << "Enter Phone Display: "; std::cin >> display;
	to.setDisplay(display);

	uint16_t RAM; std::cout << "Enter Phone RAM: "; std::cin >> RAM;
	to.setRAM(RAM);

	uint16_t space; std::cout << "Enter Phone Space: "; std::cin >> space;
	to.setSpace(space);

	return in;
}