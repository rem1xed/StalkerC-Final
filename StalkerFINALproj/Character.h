#pragma once
#include "Item.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Character {
	string name;
	int health;
	int armor;
	int radiationlvl;
	int maxWeight; 
	int BusyWeight; //if BusyWeight >= maxWeight : can't move(add logic)
	bool canMove; //0 - can move, 1 - can't
	vector<Item> inventory;
public:
	Character() : name("NULL"), health(0), armor(0), radiationlvl(1), maxWeight(50),BusyWeight(0), canMove(0), inventory() {}

	string returnName();
	int returnHealth();
	int returnArmor();
	int returnRadLvl();
	int returnMaxWeight();
	int returnBusyWeight();
	bool returnIfCanMove();

	void changeHealth();
	void changeArmor();
	void changeRadLvl();
	void changeMaxWeight();
	void changeBusyWeight();
	void changeIfCanMove();
};