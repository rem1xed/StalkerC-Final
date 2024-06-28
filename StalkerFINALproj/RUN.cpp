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




void showMenu()
{
	cout << "1 - information about the stalker" << endl;
	cout << "2 - see the available quests" << endl;
	cout << "3 - artifactHunt " << endl;
	cout << "4 - guessTheWord" << endl;
	cout << "5 - playStalkeroulette" << endl;
	cout << "6 - Artefact Knife Coin" << endl;

}



void main()
{


	SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення



	int SuccessInTheQuest = 1;




	Item medkit("Medkit", 1, 50, 20, 0);
	Item vodka("Vodka", 1, 10, 5, 1);
	vector<Item> inventory = { medkit, vodka };


	
	

	NPC nps1("bandit", 100, 50, false, false, inventory);


	

	Quest artifactHunt("artifactHunt", 0);
	Quest guessTheWord("guessTheWord", 3);
	Quest playStalkeroulette("playStalkeroulette", 1);
	Quest playRockPaperScissors("RockPaperScissors", 2);

	//0 - artifactHunt, 1 = playStalkerroulete, 2 - playRockPaperScissors 3 - guessTheWord

	//NPC nps1("bandit", 100, 50, false, false, inventory);
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
		





	}





}



