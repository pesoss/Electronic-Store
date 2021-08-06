#include "Shop.h"

int Shop::Partition(std::vector<Item*>& vec, int start, int end)
{
	double pivot = vec[end]->getPrice();
	int pIndex = start;
	for (int i = start; i < end; i++) {
		if (vec[i]->getPrice() <= pivot) {
			std::swap(vec[i], vec[pIndex]);
			pIndex++;
		}
	}
	std::swap(vec[pIndex], vec[end]);
	return pIndex;
}

void Shop::ItemsQuickSort(std::vector<Item*>& vec, int start, int end)
{
	if (start < end) {
		int pIndex = Partition(vec, start, end);
		ItemsQuickSort(vec, start, pIndex - 1);
		ItemsQuickSort(vec, pIndex + 1, end);
	}
}

bool Shop::CheckId(const unsigned int& newId)
{
	for (auto &item : items) {
		if (newId == item->getId()) return false;
	}
	return true;
}

Shop::Shop(const Shop& rhs)
{
	for(auto& item : rhs.items){
		items.push_back(item->clone());
	}
}

Shop& Shop::operator=(const Shop& rhs)
{
	if (this != &rhs) {
		for (auto item : items) {
			delete item;
		}
		items.clear();
		for (auto item : items) {
			items.push_back(item->clone());
		}
	}
	return *this;
}

Shop::~Shop()
{
	for (auto &item : items) {
		delete item;
	}
}

void Shop::Add(Item* newItem)
{
	unsigned int id = newItem->getId();
	if (CheckId(id)) {
		this->items.push_back(newItem);
	}
	else {
		std::cout << "\nError: Item with this ID already exist!\n";
	}
}

void Shop::Remove(const size_t index)
{
	delete items[index];
	items.erase(items.begin() + index);
}

void Shop::ChangePrice(const size_t index, const  double newPrice)
{
	this->items[index]->setPrice(newPrice);
}

void Shop::PrintByGameConsole()
{
	for (auto &item : items) {
		GameConsole* gameConsolePtr = dynamic_cast<GameConsole*>(item);
		if (gameConsolePtr) gameConsolePtr->print();
	}
}

void Shop::PrintByHeadphones()
{
	for (auto &item : items) {
		Headphones* headphonesPtr = dynamic_cast<Headphones*>(item);
		if (headphonesPtr) headphonesPtr->print();
	}
}

void Shop::PrintByLaptop()
{
	for (auto &item : items) {
		Laptop* laptopPtr = dynamic_cast<Laptop*>(item);
		if (laptopPtr) laptopPtr->print();
	}
}

void Shop::PrintByPhone()
{
	for (auto &item : items) {
		Phone* phonePtr = dynamic_cast<Phone*>(item);
		if (phonePtr) phonePtr->print();
	}
}

void Shop::PrintBySmartWatch()
{
	for (auto &item : items) {
		SmartWatch* smartWatchPtr = dynamic_cast<SmartWatch*>(item);
		if (smartWatchPtr) smartWatchPtr->print();
	}
}

void Shop::PrintByTablet()
{
	for (auto &item : items) {
		Tablet* tabletPtr = dynamic_cast<Tablet*>(item);
		if (tabletPtr) tabletPtr->print();
	}
}

void Shop::PrintByTV()
{
	for (auto &item : items) {
		TV* tvPtr = dynamic_cast<TV*>(item);
		if (tvPtr) tvPtr->print();
	}
}

void Shop::Print() const
{
	for (auto &item : items) {
		item->print();
	}
}

void Shop::SortAllItems()
{
	ItemsQuickSort(items, 0, items.size() - 1);
	this->Print();
}

void Shop::SortByGameConsole()
{
	ItemsQuickSort(items, 0, items.size() - 1);
	this->PrintByGameConsole();
}

void Shop::SortByHeadphones()
{
	ItemsQuickSort(items, 0, items.size() - 1);
	this->PrintByHeadphones();
}

void Shop::SortByLaptop()
{
	ItemsQuickSort(items, 0, items.size() - 1);
	this->PrintByLaptop();
}

void Shop::SortByPhone()
{
	ItemsQuickSort(items, 0, items.size() - 1);
	this->PrintByPhone();
}

void Shop::SortBySmartWatch()
{
	ItemsQuickSort(items, 0, items.size() - 1);
	this->PrintBySmartWatch();
}

void Shop::SortByTablet()
{
	ItemsQuickSort(items, 0, items.size() - 1);
	this->PrintByTablet();
}

void Shop::SortByTV()
{
	ItemsQuickSort(items, 0, items.size() - 1);
	this->PrintByTV();
}

void Shop::AddToBasket()
{
	unsigned int answer; std::cin >> answer;
	unsigned int counter = 0;

	if (answer == 1) {
		unsigned int addId;
		std::cout << "\nEnter item's ID to add: ";
		std::cin >> addId;
		for (auto &item : items) {
			if (item->getId() == addId) {
				brasket.push_back(item);
				counter++;
				printf("\nItem successfully added!\n\nIf you want to see what is in you basket, please enter (1).\nIf you want to continue, plase enter (2).\n--> ");
				unsigned int open; std::cin >> open;
				if (open == 1) {
					this->PrintBasket();
					printf("\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ");
					AddToBasket();
				}
				else {
					return;
				}
			}
		}
		if (counter == 0) {
			printf("No item with ID '%d'!\n\n", addId);
		}
	}
	else if (answer == 2) {
		return;
	}
	else {
		printf("\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ");
		AddToBasket();
	}
}

void Shop::PrintBasket()
{
	double totalSum = 0;
	for (auto &item : brasket) {
		item->print();
		totalSum += item->getPrice();
	}
	std::cout << "\n\tFinal Prise: " << totalSum << std::endl;
}