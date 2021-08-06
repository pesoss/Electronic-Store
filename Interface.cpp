#include "Interface.h"

void Interface::EnterGameConsole(Shop& shop) {
	unsigned int id; std::cout << "Enter Game Console ID: "; std::cin >> id;
	std::string name; std::cout << "Enter Game Console Name: "; std::cin.ignore(); std::getline(std::cin, name);
	double price; std::cout << "Enter Game Console Price: "; std::cin >> price;
	std::string platform; std::cout << "Enter Game Console Platform: "; std::cin.ignore(); std::getline(std::cin, platform);
	std::string color; std::cout << "Enter Game Console Color: "; std::cin.ignore(); std::getline(std::cin, color);
	uint16_t RAM; std::cout << "Enter Game Console RAM: "; std::cin >> RAM;
	double weight; std::cout << "Enter Game Console Weight: "; std::cin >> weight;
	uint16_t capacity; std::cout << "Enter Game Console Capacity: "; std::cin >> capacity;
	shop.Add(new GameConsole(id, name, price, platform, color, RAM, weight, capacity));
}

void Interface::EnterHeadphones(Shop& shop) {
	unsigned int id; std::cout << "Enter Headphones ID: "; std::cin >> id;
	std::string name; std::cout << "Enter Headphones Name: "; std::cin.ignore(); std::getline(std::cin, name);
	double price; std::cout << "Enter Headphones Price: "; std::cin >> price;
	std::string type; std::cout << "Enter Headphones Type: "; std::cin.ignore(); std::getline(std::cin, type);
	std::string connectors; std::cout << "Enter Headphones Connectors: "; std::cin.ignore(); std::getline(std::cin, connectors);
	uint16_t chargeTime; std::cout << "Enter Headphones Charge Time: "; std::cin >> chargeTime;
	uint16_t workTime; std::cout << "Enter Headphones Work Time: "; std::cin >> workTime;
	uint16_t weight; std::cout << "Enter Headphones Weight: "; std::cin >> weight;
	shop.Add(new Headphones(id, name, price, type, connectors, chargeTime, workTime, weight));
}

void Interface::EnterLaptop(Shop& shop) {
	unsigned int id; std::cout << "Enter Laptop ID: "; std::cin >> id;
	std::string name; std::cout << "Enter Laptop Name: "; std::cin.ignore(); std::getline(std::cin, name);
	double price; std::cout << "Enter Laptop Price: "; std::cin >> price;
	std::string model; std::cout << "Enter Laptop Model: "; std::cin.ignore(); std::getline(std::cin, model);
	std::string procesor; std::cout << "Enter Laptop Procesor: "; std::cin.ignore(); std::getline(std::cin, procesor);
	std::string resolution; std::cout << "Enter Laptop Resolution: "; std::cin.ignore(); std::getline(std::cin, resolution);
	uint16_t SSD_capacity; std::cout << "Enter Laptop SSD capacity: "; std::cin >> SSD_capacity;
	shop.Add(new Laptop(id, name, price, model, procesor, resolution, SSD_capacity));
}

void Interface::EnterPhone(Shop& shop) {
	unsigned int id; std::cout << "Enter Phone ID: "; std::cin >> id;
	std::string name; std::cout << "Enter Phone Name: "; std::cin.ignore(); std::getline(std::cin, name);
	double price; std::cout << "Enter Phone Price: "; std::cin >> price;
	uint16_t cores; std::cout << "Enter Phone Cores: "; std::cin >> cores;
	std::string OS; std::cout << "Enter Phone OS: "; std::cin.ignore(); std::getline(std::cin, OS);
	double display; std::cout << "Enter Phone Display: "; std::cin >> display;
	uint16_t RAM; std::cout << "Enter Phone RAM: "; std::cin >> RAM;
	uint16_t space; std::cout << "Enter Phone Space: "; std::cin >> space;
	shop.Add(new Phone(id, name, price, cores, OS, display, RAM, space));
}

void Interface::EnterSmartWatch(Shop& shop) {
	unsigned int id; std::cout << "Enter Smart Watch ID: "; std::cin >> id;
	std::string name; std::cout << "Enter Smart Watch Name: "; std::cin.ignore(); std::getline(std::cin, name);
	double price; std::cout << "Enter Smart Watch Price: "; std::cin >> price;
	std::string OS; std::cout << "Enter Smart Watch OS: "; std::cin.ignore(); std::getline(std::cin, OS);
	std::string color; std::cout << "Enter Smart Watch Color: "; std::cin.ignore(); std::getline(std::cin, color);
	double display; std::cout << "Enter Smart Watch Display: "; std::cin >> display;
	shop.Add(new SmartWatch(id, name, price, OS, color, display));
}

void Interface::EnterTablet(Shop& shop) {
	unsigned int id; std::cout << "Enter Tablet ID: "; std::cin >> id;
	std::string name; std::cout << "Enter Tablet Name: "; std::cin.ignore(); std::getline(std::cin, name);
	double price; std::cout << "Enter Tablet Price: "; std::cin >> price;
	uint16_t cores; std::cout << "Enter Tablet Cores: "; std::cin >> cores;
	std::string OS; std::cout << "Enter Tablet OS: "; std::cin.ignore(); std::getline(std::cin, OS);
	double display; std::cout << "Enter Tablet Display: "; std::cin >> display;
	uint16_t RAM; std::cout << "Enter Tablet RAM: "; std::cin >> RAM;
	uint16_t space; std::cout << "Enter Tablet Space: "; std::cin >> space;
	shop.Add(new Tablet(id, name, price, cores, OS, display, RAM, space));
}

void Interface::EnterTV(Shop& shop) {
	unsigned int id; std::cout << "Enter TV ID: "; std::cin >> id;
	std::string name; std::cout << "Enter TV Name: "; std::cin.ignore(); std::getline(std::cin, name);
	double price; std::cout << "Enter TV Price: "; std::cin >> price;
	double display; std::cout << "Enter TV Display: "; std::cin >> display;
	std::string resolution; std::cout << "Enter TV Resolution: "; std::cin.ignore(); std::getline(std::cin, resolution);
	uint16_t imageQuality; std::cout << "Enter TV Image Quality: "; std::cin >> imageQuality;
	std::string OS; std::cout << "Enter TV OS: "; std::cin.ignore(); std::getline(std::cin, OS);
	uint16_t year; std::cout << "Enter TV Year: "; std::cin >> year;
	std::string color; std::cout << "Enter TV Color: "; std::cin.ignore(); std::getline(std::cin, color);
	shop.Add(new TV(id, name, price, display, resolution, imageQuality, OS, year, color));
}

void Interface::AddNewItem(Shop& shop) {
	
	std::cout << "\nPlease select a kind of item to add : \n(1) For Game Consol.\n(2) For Headphones.\n(3) For Laptop.\n(4) For Phone.\n(5) For Smart Watch.\n(6) For Tablet .\n(7) For TV.\n--> ";
	unsigned int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		printf("\nYou choise is Game Consol.\nPlease enter:\n");
		EnterGameConsole(shop);
		break;
	case 2:
		printf("\nYou choise is Headphones.\nPlease enter:\n");
		EnterHeadphones(shop);
		break;
	case 3:
		printf("\nYou choise is Laptop.\nPlease enter:\n");
		EnterLaptop(shop);
		break;
	case 4:
		printf("\nYou choise is Phone.\nPlease enter:\n");
		EnterPhone(shop);
		break;
	case 5:
		printf("\nYou choise is Smart Watch.\nPlease enter:\n");
		EnterSmartWatch(shop);
		break;
	case 6:
		printf("\nYou choise is Tablets.\nPlease enter:\n");
		EnterTablet(shop);
		break;
	case 7:
		printf("\nYou choise is TV.\nPlease enter:\n");
		EnterTV(shop);
		break;
	default:
		printf("\nPlease enter number between [1, 7]!\n");
		AddNewItem(shop);
		break;
	}
}

void Interface::SelectGameConsole(Shop& shop, const unsigned int selected)
{
	if (selected == 1) {
		shop.PrintByGameConsole();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else if (selected == 2) {
		shop.SortByGameConsole();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else {
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		unsigned int newNumber; std::cin >> newNumber;
		SelectGameConsole(shop, newNumber);
	}
}

void Interface::SelectHeadphone(Shop& shop, const unsigned int selected)
{
	if (selected == 1) {
		shop.PrintByHeadphones();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else if (selected == 2) {
		shop.SortByHeadphones();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else {
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		unsigned int newNumber; std::cin >> newNumber;
		SelectHeadphone(shop, newNumber);
	}
}

void Interface::SelectLaptop(Shop& shop, const unsigned int selected)
{
	if (selected == 1) {
		shop.PrintByLaptop();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else if (selected == 2) {
		shop.SortByLaptop();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else {
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		unsigned int newNumber; std::cin >> newNumber;
		SelectLaptop(shop, newNumber);
	}
}

void Interface::SelectPhone(Shop& shop, const unsigned int selected)
{
	if (selected == 1) {
		shop.PrintByPhone();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else if (selected == 2) {
		shop.SortByPhone();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else {
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		unsigned int newNumber; std::cin >> newNumber;
		SelectPhone(shop, newNumber);
	}
}

void Interface::SelectSmartWatche(Shop& shop, const unsigned int selected)
{
	if (selected == 1) {
		shop.PrintBySmartWatch();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else if (selected == 2) {
		shop.SortBySmartWatch();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else {
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		unsigned int newNumber; std::cin >> newNumber;
		SelectSmartWatche(shop, newNumber);
	}
}

void Interface::SelectTablet(Shop& shop, const unsigned int selected)
{
	if (selected == 1) {
		shop.PrintByTablet();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else if (selected == 2) {
		shop.SortByTablet();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else {
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		unsigned int newNumber; std::cin >> newNumber;
		SelectTablet(shop, newNumber);
	}
}

void Interface::SelectTV(Shop& shop, const unsigned int selected)
{
	if (selected == 1) {
		shop.PrintByTV();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else if (selected == 2) {
		shop.SortByTV();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else {
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		unsigned int newNumber; std::cin >> newNumber;
		SelectTV(shop, newNumber);
	}
}

void Interface::SelectAllItems(Shop& shop, const unsigned int selected)
{
	if (selected == 1) {
		shop.Print();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else if (selected == 2) {
		shop.SortAllItems();
		std::cout << "\nIf you want to buy some item, please enter (1).\nIf you want to continue, please enter (2).\n\t--> ";
		shop.AddToBasket();
		UserMenu(shop);
	}
	else {
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		unsigned int newNumber; std::cin >> newNumber;
		SelectAllItems(shop, newNumber);
	}
}

void Interface::UserMenu(Shop& shop)
{
	printf("\tChoose what you want to see.\n\n\t(1) Game Consoles.\n\t(2) Headphones.\n\t(3) Laptops.\n\t(4) Phones.\n\t(5) Smart Watches.\n\t(6) Tablets.\n\t(7) TV's.\n\t(8) All Items.\n\t(0) If you want to exit.\n\t--> ");
	unsigned int choice; std::cin >> choice;
	unsigned int selected;
	if (choice == 1) {
		printf("\nYou choise is Game Consol.\n");
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		std::cin >> selected;
		SelectGameConsole(shop, selected);
	}
	else if (choice == 2) {
		printf("\nYou choise is Headphones.\n");
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		std::cin >> selected;
		SelectHeadphone(shop, selected);
	}
	else if (choice == 3) {
		printf("\nYou choise is Laptops.\n");
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		std::cin >> selected;
		SelectLaptop(shop, selected);
	}
	else if (choice == 4) {
		printf("\nYou choise is Phones.\n");
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		std::cin >> selected;
		SelectPhone(shop, selected);
	}
	else if (choice == 5) {
		printf("\nYou choise is Smatr Watches.\n");
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		std::cin >> selected;
		SelectSmartWatche(shop, selected);
	}
	else if (choice == 6) {
		printf("\nYou choise is Tablets.\n");
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		std::cin >> selected;
		SelectTablet(shop, selected);
	}
	else if (choice == 7) {
		printf("\nYou choise is TV's.\n");
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		std::cin >> selected;
		SelectTV(shop, selected);
	}
	else if (choice == 8) {
		printf("\nYou choise is All Items.\n");
		printf("\n\tPress (1) to see the items unsorted.\n");
		printf("\tPress (2) to see the items sorted in descending order.\n\n\t--> ");
		std::cin >> selected;
		SelectAllItems(shop, selected);
	}
	else if (choice == 0) {
		printf("\nExited successful!\n");
		return;
	}
	else {
		printf("___________________________________________________\n");
		printf("\nPlease enter number between [0, 8]!\n\n");
		UserMenu(shop);
	}
}

void Interface::AdminMenu(Shop& shop)
{
	std::cout << "\nPassword is: Mokanina\n";
	std::cout << "Please enter password : ";
	std::string pass = "";
	char ch;
	ch = _getch();
	while (ch != 13) {//character 13 is enter
		pass.push_back(ch);
		std::cout << '*';
		ch = _getch();
	}
	if (pass == "Mokanina") {
		std::cout << "\n\nYou are logged in as an admin!\n";
		unsigned int newChoice;
		do {
			std::cout << "If you want to exit, please enter (0).\nIf you want to add new item, please enter (1).\n--> ";
			std::cin >> newChoice;
			if (newChoice == 1) {
				AddNewItem(shop);
				StartMenu(shop);
			}
			else if (newChoice == 0) {
				printf("\nSuccessful exited!\n");
				return;
			}
		} while (newChoice < 0 || newChoice > 1);
	}
	else {
		std::cout << "\n\nAccess aborted...\n";
		AdminMenu(shop);
	}
}

void Interface::StartMenu(Shop& shop)
{
	unsigned int choice;
	printf("\nIf you want to exit.\nEnter (0).\n\nChoose how to log in.\nIf you want to login as a user.\nEnter (1).\nIf you want to login as a admin.\nEnter(2).\n--> ");
	std::cin >> choice;
	
	if (choice == 0) {
		printf("\nExited successful!\n");
		return;
	}
	else if (choice == 1) {
		UserMenu(shop);
	}
	else if (choice == 2) {
		AdminMenu(shop);
	}
	else {
		printf("\n_____________________________________________________\n");
		printf("\nPlease enter (1), (2) or (0)!\n");
		StartMenu(shop);
	}
}