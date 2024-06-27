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
	Map() { difficulty = 0; progress = 1; Location nullLoc; locations = { nullLoc }; }
	Map(int diffic, int progr, vector<Location> loc) : difficulty(diffic), progress(progr), locations(loc) {}
	int returnDifficulty();
	int returnProgress();
	void showLocations();
	void removeLocation(const string& locToRemName);
	~Map() {}
};