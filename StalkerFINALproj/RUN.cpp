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



void main()
{
	SetConsoleCP(1251); // ������������ ��������� Windows-1251 �  ���� ��������
	SetConsoleOutputCP(1251); // ������������ ��������� Windows-1251 �  ���� ���������



	int SuccessInTheQuest=1;

	//SuccessInTheQuest = guesTsheWord();

	//playRockPaperScissors();

	//playStalkeroulette();
	Item item("Bread", 2, 100, 5, 0);
	vector<Item> inventory = { item };
	Character player("NAME", 100, 0, 50, 0, 0, 0, inventory);
	Quest quest;
	
	quest.artifactHunt(player);


	
}







