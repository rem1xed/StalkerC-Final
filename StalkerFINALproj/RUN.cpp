﻿#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <string>
#include <fstream>
#include "Character.h"

#include "Item.h"
#include "Location.h"

#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"
#include "Save.h"
using namespace std;

Location locTest, locTest2;




<<<<<<< HEAD


<<<<<<< HEAD
=======

>>>>>>> main
=======
>>>>>>> a4de48a5ce1cbcc790a3e48ba5f13d9bae9ddfed
void showMenu()
{
	cout << "1 - information about the stalker" << endl;
	cout << "2 - see the available quests" << endl;
	cout << "3 - artifactHunt " << endl;
	cout << "4 - guessTheWord" << endl;
	cout << "5 - playStalkeroulette" << endl;
	cout << "6 - Artefact Knife Coin" << endl;

}



<<<<<<< HEAD
<<<<<<< HEAD
=======
Quest artifactHunt("artefact", 0);
Quest guessTheWord("number", 3);
Quest playStalkeroulette("roulette", 1);
Quest playRockPaperScissors("RockPaperScissors", 2);

Item medkit("Medkit", 1, 50, 20, 0);
Item vodka("Vodka", 1, 10, 5, 1);

vector<Item> inventory = { medkit, vodka };

Mutant snorc("snorc", 75, 20);
NPC nps1("bandit", 100, 50, false, false, inventory);

vector<NPC> NPClist = { nps1 };
vector<Quest> QuestList = { artifactHunt, guessTheWord,  playStalkeroulette , playRockPaperScissors };
vector<Mutant> MutantList = { snorc };






//const string& fileName,const string& currLoc, vector<Quest> CurrLocQuestList,
// int plHeal, int plArmo, int plRadlvl, int PlMxWe, int PlBsWe, bool plCmov
SaveGame save1("save1.txt");


//load game
//Character(const string& na, int he, int ar, int rad, int maxW, int busyW, bool canMo,

// vector<Item> invent) : name(na), health(he), armor(ar), radiationlvl(rad), maxWeight(maxW), busyWeight(busyW), canMove(canMo), inventory(invent) {}

//save1.OverwriteProgress(fileName, location.returnName(), QuestList, 
// player.returnHealth(), player.returnArmor(), player.returnRadLvl(), player.returnMaxWeight(),
// player.returnBusyWeight(), player.returnIfCanMove());

//player from file

int FileHealth;
int FileArmor;
int FileRadLvl;
int FileMaxweight;
int FileBsWeight;
bool canMove;
vector<Item> inventoryFILE;
//location
string FileNameLoc;
vector<Quest> fileQuestList;

>>>>>>> main


=======
>>>>>>> a4de48a5ce1cbcc790a3e48ba5f13d9bae9ddfed
void main()
{


	SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення



<<<<<<< HEAD
	int SuccessInTheQuest=1;

<<<<<<< HEAD
	cout << "Map Progress: " << currentMap.returnProgress() << endl;
	currentMap.showLocations();
=======

>>>>>>> a4de48a5ce1cbcc790a3e48ba5f13d9bae9ddfed


	Item medkit("Medkit", 1, 50, 20, 0);
	Item vodka("Vodka", 1, 10, 5, 1);
	vector<Item> inventory = { medkit, vodka };

<<<<<<< HEAD
	Character player("Stalker", 100, 50, 0, 100, 10, true, inventory);

	

	
=======

	


	string fileName = "save1.txt";


	//0 - artifactHunt, 1 = playStalkerroulete, 2 - playRockPaperScissors 3 - guessTheWord



=======

	
	

	NPC nps1("bandit", 100, 50, false, false, inventory);


	

	Quest artifactHunt("artifactHunt", 0);
	Quest guessTheWord("guessTheWord", 3);
	Quest playStalkeroulette("playStalkeroulette", 1);
	Quest playRockPaperScissors("RockPaperScissors", 2);

	//0 - artifactHunt, 1 = playStalkerroulete, 2 - playRockPaperScissors 3 - guessTheWord

	//NPC nps1("bandit", 100, 50, false, false, inventory);
>>>>>>> a4de48a5ce1cbcc790a3e48ba5f13d9bae9ddfed
	//NPC(const string & nam, int hlth, int arm, bool isAl, bool frStat)





	ofstream file(fileName);

	//const string& fileName, string& currLoc, vector<Quest>& CurrLocQuestList, int& plHeal, int& plArmo, 
	// int& plRadlvl, int& PlMxWe, int& PlBsWe, bool& plCmov, vector<Item>& FileInventory

	//int FileHealth;
	//int FileArmor;
	//int FileRadLvl;
	//int FileMaxweight;
	//int FileBsWeight;
	//bool canMove;
	//vector<Item> inventoryFILE;
	////location
	//string FileNameLoc;
	//vector<Quest> fileQuestList;

	//save1.WriteInto(fileName, FileNameLoc, fileQuestList, FileHealth, FileArmor, FileRadLvl, FileMaxweight, FileBsWeight,canMove, inventoryFILE );

	Character player("Stalker", FileHealth, FileArmor, FileRadLvl, FileMaxweight, FileBsWeight, canMove, inventoryFILE);
	Location location(FileNameLoc, 1, NPClist, MutantList, fileQuestList);

>>>>>>> main
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
<<<<<<< HEAD
<<<<<<< HEAD
		case 2: 


			break;
		case 3:


=======
		case 2:
			
			break;
		case 3:
			break;
		case 7:

			save1.OverwriteProgress(fileName, location.returnName(), QuestList, player.returnHealth(), player.returnArmor(), player.returnRadLvl(), player.returnMaxWeight(), player.returnBusyWeight(), player.returnIfCanMove(), inventory);
>>>>>>> main
			break;
		}
=======
		case 2:
			location.ShowQuestList();
			
			break;
		case 3:
			location.playQuest(player, "artifactHunt");

			break;
		case 4:
			location.playQuest(player, "guessTheWord");
			break;
		case 5:
			location.playQuest(player, "playStalkeroulette");
			break;
		case 6:
			location.playQuest(player, "RockPaperScissors");
			break;

		case 7:
			break;

		}
		

>>>>>>> a4de48a5ce1cbcc790a3e48ba5f13d9bae9ddfed




	}





<<<<<<< HEAD


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



=======
>>>>>>> a4de48a5ce1cbcc790a3e48ba5f13d9bae9ddfed
}



