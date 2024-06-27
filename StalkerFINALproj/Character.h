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
	Character() : name("NULL"), health(0), armor(0), radiationlvl(1), maxWeight(50), BusyWeight(0), canMove(0), inventory() {}

	const string returnName();
	const int returnHealth();
	const int returnArmor();
	const int returnRadLvl();
	const int returnMaxWeight();
	const int returnBusyWeight();
	const bool returnIfCanMove();

	void changeHealth(int val, bool way); // 0 - "-", 1 - "+";
	void changeArmor(int val, bool way);	// 0 - "-", 1 - "+";
	void changeRadLvl(int val, bool way);	// 0 - "-", 1 - "+";
	void changeMaxWeight(int val, bool way);	// 0 - "-", 1 - "+";		
	void changeBusyWeight(int val, bool way);	// 0 - "-", 1 - "+";
	void changeIfCanMove(bool val);
};