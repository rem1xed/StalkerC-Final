#pragma once
#include <iostream>
#include <vector>
#include "Location.h"
using namespace std;

class Map {
	int difficulty; //0 - novice, 1 - stalker, 2 - veteran, 3 - master
	int progress; // 0-9
	vector<Location> locations;
public:
	Map() : difficulty(0), progress(0) {}

	int returnDifficulty();
	int returnProgress();

	~Map();
};