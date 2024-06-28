#include <iostream>
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







void showMenu()
{
	cout << "1 - information about the stalker" << endl;
	cout << "2 - see the available quests" << endl;
	cout << "3 - ... " << endl;

}



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



void main()
{


	SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення




	


	string fileName = "save1.txt";


	//0 - artifactHunt, 1 = playStalkerroulete, 2 - playRockPaperScissors 3 - guessTheWord



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

	save1.WriteInto(fileName, FileNameLoc, fileQuestList, FileHealth, FileArmor, FileRadLvl, FileMaxweight, FileBsWeight,canMove, inventoryFILE );

	Character player("Stalker", FileHealth, FileArmor, FileRadLvl, FileMaxweight, FileBsWeight, canMove, inventoryFILE);
	Location location(FileNameLoc, 1, NPClist, MutantList, fileQuestList);

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
		case 7:

			save1.OverwriteProgress(fileName, location.returnName(), QuestList, player.returnHealth(), player.returnArmor(), player.returnRadLvl(), player.returnMaxWeight(), player.returnBusyWeight(), player.returnIfCanMove(), inventory);
			break;
		}




	}







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
