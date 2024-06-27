#include <iostream>
#include <string>
#include "Character.h"
using namespace std;



const string Character::returnName() { return name; };
const int Character::returnHealth() { return health; };
const int Character::returnArmor() { return armor; };
const int Character::returnRadLvl() { return radiationlvl;};
const int Character::returnMaxWeight() { return maxWeight; };
const int Character::returnBusyWeight() { return BusyWeight; };
const bool Character::returnIfCanMove() { return canMove; };

void Character::changeHealth(int val, bool way) {
	if (way) { health =- val; }
	else {	health =+ val;}
};
void Character::changeArmor(int val, bool way) {
	if (way) { armor =- val; }
	else {	armor =+ val;}
};
void Character::changeRadLvl(int val, bool way) {
	if (way) { radiationlvl =- val; }
	else {	radiationlvl =+ val;}
};
void Character::changeMaxWeight(int val, bool way) {
	if (way) { maxWeight =- val;}
	else {	maxWeight =+ val;}
};
void Character::changeBusyWeight(int val, bool way) {
	if (way) { BusyWeight =- val; }
	else { BusyWeight =+ val; }
};
void Character::changeIfCanMove(bool val) { canMove = val; };