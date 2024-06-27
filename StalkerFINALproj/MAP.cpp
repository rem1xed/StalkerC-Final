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

int Map::returnDifficulty() { return difficulty; };

int Map::returnProgress() { return progress; };



void Map::showLocations() {
	cout << "\nLocations list: ";
	for (int i = 0; i < locations.size(); i++)
	{
		cout << i << ". Location: " << locations[i].returnName() << "Progress: " << locations[i].returnProgress();
	}
};



void Map::removeLocation(const string& locToRemName) {
	for (int i = 0; i < locations.size(); i++)
	{
		if (locations[i].returnName() == locToRemName)
		{
			vector<Location>::iterator it;
			it = locations.begin() + i;
			locations.erase(it);
			progress -= 1;
		}
	}
}
