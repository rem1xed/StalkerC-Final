#pragma once
#include <iostream>
#include <string>

using namespace std;

class Quest {
	string name;
public:
	Quest() { name = "NULL"; }
	Quest(const string nam) : name(nam) {}
};

