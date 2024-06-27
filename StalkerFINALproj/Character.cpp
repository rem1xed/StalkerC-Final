#include <iostream>
#include <string>
#include "Character.h"
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