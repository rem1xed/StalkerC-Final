#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Mutant {
	string name;
	int health;
	int damage;
public:
	Mutant() { name = "NULL", health = 0, damage = 0; }
	Mutant(const string& nam, int h, int damg) : name(nam), health(h), damage(damg) {}
	const string returnName();
	int returnHealth();
	int returnDamage();

	int changeHealth();

	~Mutant() {}
};