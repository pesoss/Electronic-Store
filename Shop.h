#pragma once
#include<vector>
#include<algorithm>
#include"GameConsole.h"
#include"Headphones.h"
#include"Laptop.h"
#include"Phone.h"
#include"SmartWatch.h"
#include"Tablet.h"
#include"TV.h"

class Shop
{
private:
	std::vector<Item*> items;
	std::vector<Item*> brasket;
	int Partition(std::vector<Item*>& vec, int start, int end);
	void ItemsQuickSort(std::vector<Item*>& vec, int start, int end);
	bool CheckId(const unsigned int& newId);
public:
	//We have big four because of dynamic memmory in vector
	Shop() = default;
	Shop(const Shop& rhs);
	Shop& operator=(const Shop& rhs);
	~Shop();
	void Add(Item* newItem);
	void Remove(const size_t index);
	void ChangePrice(const size_t index, const  double price);

	void PrintByGameConsole();
	void PrintByHeadphones();
	void PrintByLaptop();
	void PrintByPhone();
	void PrintBySmartWatch();
	void PrintByTablet();
	void PrintByTV();
	void Print() const;
	  
	void SortAllItems();
	void SortByGameConsole();
	void SortByHeadphones();
	void SortByLaptop();
	void SortByPhone();
	void SortBySmartWatch();
	void SortByTablet();
	void SortByTV();

	void AddToBasket();
	void PrintBasket();
};