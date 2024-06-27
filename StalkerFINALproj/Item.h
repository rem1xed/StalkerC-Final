#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item
{
	string name;
	int weight;
	int price;
	int positivePoints;
	int typeOfItem; //0 - medkits, 1 - vodka, antirad, 2 - artifact(debuff or plus health/minus radiation)
public:
	Item() { name = "NULL"; weight = 0; price = 0; positivePoints = 0; typeOfItem = 0; }
	Item(const string& nam, int wei, int pr, int posP, int typeOfIt) : name(nam), weight(wei), price(pr), positivePoints(posP), typeOfItem(typeOfIt) {}
	const string returnName();
	int returnWeight();
	int returnPrice();
	int returnPositivePoints();
	int returntypeOfItem();



	~Item() {};
};