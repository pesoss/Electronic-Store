#include"Interface.h"

int main() {

	Shop shop;
	//Game Consoles
	shop.Add(new GameConsole(214565848, "Sony", 499.99, "PlayStation 4", "White", 8, 2.4, 512));
	shop.Add(new GameConsole(463211879, "Microsoft", 699.99, "Xbox Series 5", "White", 8, 2.0, 512));
	shop.Add(new GameConsole(326465458, "Microsoft", 299.99, "Xbox Series 3", "Black", 4, 2.8, 256));
	shop.Add(new GameConsole(987564641, "Sony", 899.99, "PlayStation 5", "White", 16, 2.5, 1024));
	shop.Add(new GameConsole(321316548, "Microsoft", 499.99, "Xbox Series 4", "White", 4, 3.0, 256));
	shop.Add(new GameConsole(621547933, "Microsoft", 499.99, "Xbox Series 4", "Black", 4, 3.0, 256));
	shop.Add(new GameConsole(552148214, "Sony", 699.99, "PlayStation 5", "Black", 8, 2.4, 512));
	shop.Add(new GameConsole(852147933, "Sony", 399.99, "PlayStation 3", "White", 8, 3.0, 512));
	shop.Add(new GameConsole(423156878, "Sony", 399.99, "PlayStation 3", "Black", 8, 3.0, 512));
	shop.Add(new GameConsole(321322154, "Microsoft", 699.99, "Xbox Series 5", "Black", 8, 2.0, 512));
	//Headphones
	shop.Add(new Headphones(313227878, "Beats", 119.99, "Wireless", "Bluetooth", 2, 18, 250));
	shop.Add(new Headphones(135468887, "Sony", 54.22, "Wireless", "Bluetooth", 1, 17, 130));
	shop.Add(new Headphones(464211221, "JBL", 65.49, "Wireless", "Bluetooth", 1, 11, 150));
	shop.Add(new Headphones(847458475, "AirPods", 499.99, "Wireless", "Bluetooth", 2, 9, 200));
	shop.Add(new Headphones(895689665, "Sony", 199.99, "Wireless", "Bluetooth", 2, 24, 200));
	shop.Add(new Headphones(256322561, "Beats", 139.99, "Wireless", "Bluetooth", 1, 10, 150));
	shop.Add(new Headphones(011212121, "JBL", 159.99, "Wireless", "Bluetooth", 2, 11, 100));
	shop.Add(new Headphones(301460215, "Bose", 229.99, "Wireless", "Bluetooth", 1, 15, 350));
	shop.Add(new Headphones(512358845, "Bose", 219.99, "Wireless", "Bluetooth", 1, 17, 300));
	shop.Add(new Headphones(478786332, "JBL", 99.99, "Wireless", "Bluetooth", 2, 19, 100));
	//Laptops
	shop.Add(new Laptop(193456756, "Macbook", 2500, "Air", "M1", "2560 x 1600", 256));
	shop.Add(new Laptop(143456712, "Lenovo", 1600, "Legion", "intel", "2560 x 1600", 1024));
	shop.Add(new Laptop(133456734, "Acer", 1200, "Nitro 5", "intel", "2560 x 1600", 512));
	shop.Add(new Laptop(113456799, "HP", 900, "Pavilion", "intel", "2560 x 1600", 256));
	shop.Add(new Laptop(123456763, "ASUS", 1400, "ProArt", "intel", "2560 x 1600", 512));
	shop.Add(new Laptop(143456747, "Macbook", 1200, "Pro", "M1", "2560 x 1600", 1024));
	shop.Add(new Laptop(153456774, "Dell", 1300, "Inspiron", "intel", "2560 x 1600", 256));
	shop.Add(new Laptop(163456722, "Lenovo", 1500, "Ideapad", "intel", "2560 x 1600", 512));
	shop.Add(new Laptop(313456733, "Acer", 1600, "Aspire", "intel", "2560 x 1600", 1024));
	shop.Add(new Laptop(153456787, "HP", 800, "Pavilion", "intel", "2560 x 1600", 512));
	//Phones
	shop.Add(new Phone(488789366, "iPhone 12", 1599.99, 4, "iOS", 5.8, 4, 64));
	shop.Add(new Phone(499789355, "Xiaomi", 188.98, 8, "Android", 6.0, 8, 32));
	shop.Add(new Phone(444789313, "iPhone 8", 729.00, 4, "iOS", 5.4, 4, 64));
	shop.Add(new Phone(666789331, "Samsung", 294.99, 4, "Android", 6.3, 4, 32));
	shop.Add(new Phone(455789455, "Huawei", 363.99, 4, "Android", 5.5, 4, 64));
	shop.Add(new Phone(444789389, "iPhone 12", 1200, 4, "iOS", 5.8, 4, 128));
	shop.Add(new Phone(433789399, "iPhone 11", 1545.00, 4, "iOS", 5.8, 4, 64));
	shop.Add(new Phone(401789378, "iPhone SE", 790.00, 4, "iOS", 5.4, 4, 64));
	shop.Add(new Phone(400789387, "Xiaomi", 208.98, 4, "Android", 5.8, 4, 64));
	shop.Add(new Phone(410789322, "Samsung", 1448.00, 4, "Android", 6.6, 4, 128));
	//Smart Watches
	shop.Add(new SmartWatch(700799822, "Huawei", 599.90, "Android", "Black", 1.4));
	shop.Add(new SmartWatch(711799832, "iWatch", 659.90, "iOS", "White", 1.5));
	shop.Add(new SmartWatch(755799879, "Huawei", 199.90, "Android", "Black", 1.4));
	shop.Add(new SmartWatch(799799845, "Huawei", 229.90, "Android", "White", 1.4));
	shop.Add(new SmartWatch(788799887, "iWatch", 339.90, "iOS", "Black", 1.4));
	shop.Add(new SmartWatch(777799898, "Huawei", 699.90, "Android", "White", 1.6));
	shop.Add(new SmartWatch(733799863, "Samsung", 429.90, "Android", "White", 1.6));
	shop.Add(new SmartWatch(722799814, "Samsung", 419.90, "Android", "Black", 1.5));
	shop.Add(new SmartWatch(744799817, "Samsung", 239.90, "Android", "Black", 1.5));
	shop.Add(new SmartWatch(755799827, "Xiaomi", 109.90, "Android", "White", 1.4));
	//Tablets
	shop.Add(new Tablet(911654344, "iPad", 1279.99, 4, "iOS", 10.9, 4, 64));
	shop.Add(new Tablet(999654323, "iPad", 1279.99, 4, "iOS", 9.5, 4, 128));
	shop.Add(new Tablet(988654321, "Samsung", 989.99, 4, "Android", 8.7, 4, 128));
	shop.Add(new Tablet(966654365, "Samsung", 699.99, 4, "Android", 9.2, 4, 64));
	shop.Add(new Tablet(900654303, "Huawei", 1199.99, 4, "Android", 9.1, 4, 64));
	shop.Add(new Tablet(977654330, "Samsung", 1159.99, 4, "Android", 8.2, 4, 32));
	shop.Add(new Tablet(966654398, "Huawei", 1339.99, 4, "Android", 9.3, 4, 32));
	shop.Add(new Tablet(955654389, "Huawei", 859.99, 4, "Android", 10.7, 4, 64));
	shop.Add(new Tablet(935654387, "iPad", 1279.99, 4, "iOS", 8.9, 4, 128));
	shop.Add(new Tablet(922654378, "Samsung", 1079.99, 4, "Android", 9.0, 4, 32));
	//TVs
	shop.Add(new TV(986579856, "Samsung", 1099.99, 55, "2560 x 1600", 4, "Android", 2020, "Black"));
	shop.Add(new TV(985579898, "AppleTV", 1079.99, 65, "2560 x 1600", 4, "iOS", 2021, "White"));
	shop.Add(new TV(984479874, "Samsung", 1139.99, 29, "2560 x 1600", 4, "Android", 2021, "White"));
	shop.Add(new TV(981179844, "Samsung", 999.99, 39, "2560 x 1600", 4, "Android", 2020, "Black"));
	shop.Add(new TV(981179852, "Samsung", 1209.99, 61, "2560 x 1600", 4, "Android", 2021, "White"));
	shop.Add(new TV(980079830, "LG", 1009.99, 45, "2560 x 1600", 4, "Android", 2021, "Black"));
	shop.Add(new TV(987179810, "LG", 1019.99, 44, "2560 x 1600", 4, "Android", 2020, "Black"));
	shop.Add(new TV(983679854, "LG", 969.99, 49, "2560 x 1600", 4, "Android", 2020, "White"));
	shop.Add(new TV(986679854, "Philips", 659.99, 59, "2560 x 1600", 4, "Android", 2021, "White"));
	shop.Add(new TV(989979864, "LG", 329.99, 58, "2560 x 1600", 4, "Android", 2020, "Black"));

	Interface interFace;
	interFace.StartMenu(shop);

	return 0;
}