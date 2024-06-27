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

	bool friendStatus; // 0 - neutral, 1 - enemy;
	vector<Item> inventory;
public:
	NPC() { name = "NULL", health = 0, armor = 0, isAlive = 0, friendStatus = 0; Item nullIt; inventory = { nullIt }; }
	NPC(const string& nam, int hlth, int arm, bool isAl) : name(nam), health(hlth), armor(arm), isAlive(isAl) {}

	const string returnName();
	int returnHealth();
	int returnArmor();
	bool returnAliveSt();
	bool returnFriendStatus();


	void changeHealth(int val, bool way);
	void changeArmor(int val, bool way);
	void changeAliveSt(bool val);
	void changeFriendStatus(int val, bool way);

	~NPC();
};