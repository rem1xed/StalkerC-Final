#include <iostream>
#include <string>
#include "Character.h"

#include "Item.h"
#include "Location.h"
#include "MAP.h"
#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"
using namespace std;

const string Character::returnName() { return name; };
int Character::returnHealth() { return health; };
int Character::returnArmor() { return armor; };
int Character::returnRadLvl() { return radiationlvl;};
int Character::returnMaxWeight() { return maxWeight; };
int Character::returnBusyWeight() { return busyWeight; };
bool Character::returnIfCanMove() { return canMove; };

void Character::changeHealth(int val, bool way) {
	if (way) { health -= val; }
	else {	health += val;}
};
void Character::changeArmor(int val, bool way) {
	if (way) { armor -= val; }
	else {	armor += val;}
};
void Character::changeRadLvl(int val, bool way) {
	if (way) { radiationlvl -= val; }
	else {	radiationlvl += val;}
};
void Character::changeMaxWeight(int val, bool way) {
	if (way) { maxWeight -= val;}
	else {	maxWeight += val;}
};
void Character::changeBusyWeight(int val, bool way) {
	if (way) { busyWeight -= val; }
	else { busyWeight += val; }
};
void Character::changeIfCanMove(bool val) { canMove = val; };

void Character::addItem(const Item& item) { inventory.push_back(item); }

void Character::displayCharacterInfo()
{

    cout << "Character Information:" << endl;
    cout << "----------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Armor: " << armor << endl;
    cout << "Radiation Level: " << radiationlvl << endl;
    cout << "Max Weight: " << maxWeight << endl;
    cout << "Busy Weight: " << busyWeight << endl;
    cout << "Can Move: " << (canMove ? "Yes" : "No") << endl;
    cout << endl;

    cout << "Inventory:" << endl;
    cout << "----------" << endl;

    for (Item item : inventory) {
        cout << "Item Name: " << item.returnName() << endl;
        cout << "Weight: " << item.returnWeight() << endl;
        cout << "Price: " << item.returnPrice() << endl;
        cout << "Positive Points: " << item.returnPositivePoints() << endl;
        cout << "Type of Item: " << item.returntypeOfItem() << endl;
        cout << "---------------------" << endl;
    }
}