/*
Date: 5/09/2022
Names: Tal Zigelnik , Jonathan Cwengel
*/

/*
		This project implements a supermarket data structure that contains 3 type classes where each one of them have unique sub-classes.
		You can add products to the store from each sub class and build your own market with different details.
*/

#include "Headers/classes.h"
int main()
{
	int option, type, sub_type;
	int ser, area, prov, season, vit, sugar, colors, topping, num_prod;
	double amo, fat;
	char name[50] = "", loc[50] = "";

	Market m;
	m.setMarketName("SuperStore");

	// menu
	cout << "Welcome to SuperShop market!!" << endl;
	while (true)
	{
			cout << endl;
			cout << "Please choose your next action:" << endl;
			cout << "1. Add a product" << endl;
			cout << "2. Print all the products" << endl;
			cout << "3. Exit." << endl;

		cin >> option;
		switch (option)
		{
		case 1:
			//
			cout << endl;
			cout << "What type of product would you like to add?" << endl;
			cout << "1. Farm" << endl;
			cout << "2. Dairy" << endl;
			cout << "3. Pack." << endl;
			cout << "press 0 to return back." << endl;

			cin >> type;
			switch (type)
			{

			case 1:
				cout << endl;
				cout << "What type of Farm product would you like to add?" << endl;
				cout << "1. Vegatable" << endl;
				cout << "2. Fruit" << endl << endl;
				cout << "press 0 to return back." << endl;

				cin >> sub_type;
				switch (sub_type)
				{

				case 1:
					cout << endl;
					cout << "Please enter the following details:" << endl;
					cout << "Serial number: ";
					cin >> ser;
					if (m.serialExist(ser))
					{
						cout << "Error! This serial number already exists!" << endl;
						break;
					}
					cout << "Product name: ";
					cin >> name;
					cout << "Location: (first character A-Z, second charater 1-5) ";
					cin >> loc;
					cout << "Amount: ";
					cin >> amo;
					cout << "Area: ";
					cin >> area;
					cout << "Number of seasons: ";
					cin >> season;
					cout << "Number of providers: ";
					cin >> prov;
					cout << "Amount of vitamins: ";
					cin >> vit;
				
					m.addProduct(new F_Vegetable(ser,loc,amo,area,VEGETABLE,prov,season,name,vit));
					cout << endl;
					break;

					//
				case 2:
					cout << endl;
					cout << "Please enter the following details:" << endl;
					cout << "Serial number: ";
					cin >> ser;
					if (m.serialExist(ser))
					{
						cout << "Error! This serial number already exists!" << endl;
						break;
					}
					cout << "Product name: ";
					cin >> name;
					cout << "Location: (first character A-Z, second charater 1-5) ";
					cin >> loc;
					cout << "Amount: ";
					cin >> amo;
					cout << "Area: ";
					cin >> area;
					cout << "Number of seasons: ";
					cin >> season;
					cout << "Number of providers: ";
					cin >> prov;
					cout << "Amount of sugar: ";
					cin >> sugar;
					m.addProduct(new F_Fruit(ser, loc, amo, area, FRUIT, prov, season, name, sugar));
					cout << endl;
					break;
					
					//
				case 0:
					break;
				}
				break;

				//
			case 2:
				cout << endl;
				cout << "What type of Dairy product would you like to add?" << endl;
				cout << "1. Drink" << endl;
				cout << "2. Yogurt" << endl;
				cout << "3. Cheese" << endl;
				cout << "4. Other" << endl;
				cout << "press 0 to return back." << endl;

				cin >> sub_type;
				switch (sub_type)
				{
				case 1:
					cout << endl;
					cout << "Please enter the following details:" << endl;
					cout << "Serial number: ";
					cin >> ser;
					if (m.serialExist(ser))
					{
						cout << "Error! This serial number already exists!" << endl;
						break;
					}
					cout << "Product name: ";
					cin >> name;
					cout << "Location: (first character A-Z, second charater 1-5) ";
					cin >> loc;
					cout << "Amount: ";
					cin >> amo;
					cout << "Area: ";
					cin >> area;
					cout << "Number of colors: ";
					cin >> colors;
					cout << "Amount of fat: ";
					cin >> fat;
					m.addProduct(new D_Drink(ser, loc, amo, area, DRINK, colors, fat, name));
					cout << endl;
					break;
					
					//
				case 2:
					cout << endl;
					cout << "Please enter the following details:" << endl;
					cout << "Serial number: ";
					cin >> ser;
					if (m.serialExist(ser))
					{
						cout << "Error! This serial number already exists!" << endl;
						break;
					}
					cout << "Product name: ";
					cin >> name;
					cout << "Location: (first character A-Z, second charater 1-5) ";
					cin >> loc;
					cout << "Amount: ";
					cin >> amo;
					cout << "Area: ";
					cin >> area;
					cout << "Number of colors: ";
					cin >> colors;
					cout << "Amount of fat: ";
					cin >> fat;
				m.addProduct(new D_Yogurt(ser, loc, amo, area, YOGURT, colors, fat, name));
					cout << endl;
					break;

					//
				case 3:
					cout << endl;
					cout << "Please enter the following details:" << endl;
					cout << "Serial number: ";
					cin >> ser;
					if (m.serialExist(ser))
					{
						cout << "Error! This serial number already exists!" << endl;
						break;
					}
					cout << "Product name: ";
					cin >> name;
					cout << "Location: (first character A-Z, second charater 1-5) ";
					cin >> loc;
					cout << "Amount: ";
					cin >> amo;
					cout << "Area: ";
					cin >> area;
					cout << "Number of colors: ";
					cin >> colors;
					cout << "Amount of fat: ";
					cin >> fat;
					cout << "Number of toppings: ";
					cin >> topping;
				m.addProduct(new D_Cheese(ser, loc, amo, area, CHEESE, colors, fat, name,topping));
					cout << endl;
					break;
				case 4:
					cout << endl;
					cout << "Please enter the following details:" << endl;
					cout << "Serial number: ";
					cin >> ser;
					if (m.serialExist(ser))
					{
						cout << "Error! This serial number already exists!" << endl;
						break;
					}
					cout << "Product name: ";
					cin >> name;
					cout << "Location: (first character A-Z, second charater 1-5) ";
					cin >> loc;
					cout << "Amount: ";
					cin >> amo;
					cout << "Area: ";
					cin >> area;
					cout << "Number of colors: ";
					cin >> colors;
					cout << "Amount of fat: ";
					cin >> fat;
					cout << "How many products would you like to add?";
					cin >> num_prod;
					m.addProduct(new D_Other(ser, loc, amo, area, OTHER, colors, fat, name,num_prod)); // need to add more options for add function
					cout << endl;
					break;

					//
				case 0:
					break;
				}
				break;

				//
			case 3:
			{
				cout << endl;
				cout << "Please enter the following details:" << endl;
				cout << "Serial number: ";
				cin >> ser;
				if (m.serialExist(ser))
				{
					cout << "Error! This serial number already exists!" << endl;
					break;
				}
				cout << "Location: (first character A-Z, second charater 1-5) ";
				cin >> loc;
				cout << "Amount: ";
				cin >> amo;
				cout << "Area: ";
				cin >> area;
				cout << "Number of colors: ";
				cin >> colors;
				cout << "How many products would you like to add to the package? ";
				cin >> num_prod;
			m.addProduct(new Pack(ser, loc, amo, area, PACK,colors,num_prod));
				cout << endl;
				break;
			}
			}
			break;

			//
		case 2:
			m.print();
			break;

			//
		case 3:
			cout << "Closing the program... Bye bye!";
			exit(1);
		}
	
	}


	return 0;
}