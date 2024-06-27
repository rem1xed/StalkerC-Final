#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <string>

#include "Character.h"

#include "Item.h"
#include "Location.h"
#include "MAP.h"
#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"


using namespace std;

Location locTest, locTest2;

Map currentMap(3, 1, {locTest, locTest});




void main()
{
	SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення



	int SuccessInTheQuest=1;

	cout << "Map Progress: " << currentMap.returnProgress();
	currentMap.showLocations();


	//SuccessInTheQuest = guesTsheWord();

	//playRockPaperScissors();

	//playStalkeroulette();
	// 
	// 
	//Item item("Bread", 2, 100, 5, 0);
	//vector<Item> inventory = { item };
	//Character player("NAME", 100, 0, 50, 0, 0, 0, inventory);
	//Quest quest;
	//
	//quest.artifactHunt(player);


	
}







