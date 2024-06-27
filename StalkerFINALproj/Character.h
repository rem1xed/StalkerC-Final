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
	int busyWeight; //if BusyWeight >= maxWeight : can't move(add logic)
	bool canMove; //0 - can move, 1 - can't
	vector<Item> inventory;
public:
	Character() { name = "NULL", health = 0; armor = 0; radiationlvl = 0; maxWeight = 0; busyWeight = 0; canMove = 0; Item null; inventory = { null }; }

	Character(const string& na, int he, int ar, int rad, int maxW, int busyW, bool canMo, vector<Item> invent) : name(na), health(he), armor(ar), radiationlvl(rad), maxWeight(maxW), busyWeight(busyW), canMove(canMo), inventory(invent) {}
	const string returnName();
	int returnHealth();
	int returnArmor();
	int returnRadLvl();
	int returnMaxWeight();
	int returnBusyWeight();
	bool returnIfCanMove();

	void displayCharacterInfo();

	void changeHealth(int val, bool way); // 0 - "-", 1 - "+";
	void changeArmor(int val, bool way);	// 0 - "-", 1 - "+";
	void changeRadLvl(int val, bool way);	// 0 - "-", 1 - "+";
	void changeMaxWeight(int val, bool way);	// 0 - "-", 1 - "+";		
	void changeBusyWeight(int val, bool way);	// 0 - "-", 1 - "+";
	void changeIfCanMove(bool val);



	void addItem(const Item& item);

	~Character() {};
};