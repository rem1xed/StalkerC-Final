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

Location locTest;




void main()
{
	

	SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення



	int SuccessInTheQuest=1;



	Item medkit("Medkit", 1, 50, 20, 0);
	Item vodka("Vodka", 1, 10, 5, 1);
	vector<Item> inventory = { medkit, vodka };

	Character player("Stalker", 100, 50, 0, 100, 10, true, inventory);

	player.displayCharacterInfo();

	
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







