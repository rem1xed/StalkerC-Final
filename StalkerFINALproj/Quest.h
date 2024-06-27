#pragma once
#include <iostream>
#include <string>
#include "Character.h"
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

using namespace std;

class Quest {
	string name;
public:
	Quest() { name = "NULL"; }
	Quest(const string nam) : name(nam) {}


	int guesTsheWord();

	void displayField(const vector<vector<char>>& field);
	void artifactHunt(Character& player);
};

