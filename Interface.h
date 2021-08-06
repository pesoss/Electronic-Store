#pragma once
#include"Shop.h"
#include <conio.h>
class Interface
{
private:
	void AddNewItem(Shop& shop);

	void EnterGameConsole(Shop& shop);
	void EnterHeadphones(Shop& shop);
	void EnterLaptop(Shop& shop);
	void EnterPhone(Shop& shop);
	void EnterSmartWatch(Shop& shop);
	void EnterTablet(Shop& shop);
	void EnterTV(Shop& shop);

	void SelectGameConsole(Shop& shop, const unsigned int selected);
	void SelectHeadphone(Shop& shop, const unsigned int selected);
	void SelectLaptop(Shop& shop, const unsigned int selected);
	void SelectPhone(Shop& shop, const unsigned int selected);
	void SelectSmartWatche(Shop& shop, const unsigned int selected);
	void SelectTablet(Shop& shop, const unsigned int selected);
	void SelectTV(Shop& shop, const unsigned int selected);
	void SelectAllItems(Shop& shop, const unsigned int selected);

	void UserMenu(Shop& shop);
	void AdminMenu(Shop& shop);
public:
	void StartMenu(Shop& shop);
};