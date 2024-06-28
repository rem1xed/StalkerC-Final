#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <string>

#include "Character.h"

#include "Item.h"
#include "Location.h"

#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"

using namespace std;

Location locTest, locTest2;

<<<<<<< HEAD
Map currentMap(3, 1, { locTest, locTest2, locTest });
=======

>>>>>>> d84e8907caef4eb2ad85779f38a9bb226b9de6b6





void showMenu()
{
	cout << "1 - information about the stalker" << endl;
	cout << "2 - see the available quests" << endl;
	cout << "3 - ... " << endl;

}





void main()
{


	SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення



	int SuccessInTheQuest = 1;


<<<<<<< HEAD
	cout << "Map Progress: " << currentMap.returnProgress() << endl;
	currentMap.showLocations();
=======
>>>>>>> d84e8907caef4eb2ad85779f38a9bb226b9de6b6


	Item medkit("Medkit", 1, 50, 20, 0);
	Item vodka("Vodka", 1, 10, 5, 1);
	vector<Item> inventory = { medkit, vodka };

<<<<<<< HEAD
	Quest artifactHunt("artefact");
	Quest guessTheWord("number");
	Quest playStalkeroulette("roulette");
	Quest playRockPaperScissors("RockPaperScissors");

	

	NPC nps1("bandit", 100, 50, false, false, inventory);


	Mutant snorc("snorc", 75, 20);

	vector<NPC> NPClist = { nps1 };
	vector<Quest> QuestList = { artifactHunt, guessTheWord,  playStalkeroulette , playRockPaperScissors };
	vector<Mutant> MutantList = { snorc };



	Character player("Stalker", 100, 50, 0, 100, 10, true, inventory);
	Location location( "fff", 1, NPClist, MutantList, QuestList);
	


	
	int choice = 0;
	while (true)
	{
		showMenu();
		cin >> choice;

		switch (choice)
		{
		case 1:
			player.displayCharacterInfo();

			break;
		case 2: 


			break;
		case 3:


			break;
		}




	}







=======
	Quest artifactHunt("artefact", 0);
	Quest guessTheWord("number", 3);
	Quest playStalkeroulette("roulette", 1);
	Quest playRockPaperScissors("RockPaperScissors", 2);

	//0 - artifactHunt, 1 = playStalkerroulete, 2 - playRockPaperScissors 3 - guessTheWord

	NPC nps1("bandit", 100, 50, false, false, inventory);
	//NPC(const string & nam, int hlth, int arm, bool isAl, bool frStat)

	Mutant snorc("snorc", 75, 20);

	vector<NPC> NPClist = { nps1 };
	vector<Quest> QuestList = { artifactHunt, guessTheWord,  playStalkeroulette , playRockPaperScissors };
	vector<Mutant> MutantList = { snorc };



	Character player("Stalker", 100, 50, 0, 100, 10, true, inventory);
	Location location("fff", 1, NPClist, MutantList, QuestList);




	int choice = 0;
	while (true)
	{
		showMenu();
		cin >> choice;

		switch (choice)
		{
		case 1:
			player.displayCharacterInfo();

			break;
		case 2:


			break;
		case 3:


			break;
		}




	}







>>>>>>> d84e8907caef4eb2ad85779f38a9bb226b9de6b6
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
