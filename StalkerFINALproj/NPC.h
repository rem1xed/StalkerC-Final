#pragma once


#pragma once
#include "Item.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class NPC {
	string name;
	int health;
	int armor;

	bool isAlive; // 0 alive, 1 - dead;

	bool status; // 0 - neutral, 1 - enemy;
	vector<Item> inventory;
public:
	NPC() : name("NULL"), health(0), armor(0), isAlive(0), inventory(0) {}

	string returnName();
	int returnHealth();
	int returnArmor();
	bool returnAliveSt();


	void changeHealth();
	void changeArmor();
	void changeAliveSt();

	~NPC();
};