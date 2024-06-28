#include <iostream>
#include <vector>
#include <string>

#include "Item.h"
#include "Location.h"
#include "Character.h"
#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"

using namespace std;

const string Location::returnName() { return name; };
int Location::returnProgress() { return progress; };

void Location::ShowNPCList() {
	for (int i = 0; i < NPClist.size(); i++)
	{
		cout << "\n " << i << "NPC: " << NPClist[i].returnName();
	}
};
void Location::ShowMutantList() {
	for (int i = 0; i < MutantList.size(); i++)
	{
		cout << "\n " << i << "NPC: " << MutantList[i].returnName();
	}
};
void Location::ShowQuestList() {
	for (int i = 0; i < QuestList.size(); i++)
	{
		cout << "\n " << i << "NPC: " << QuestList[i].returnName();
	}
};

bool Location::checkIfQuestExists(const string& QuestName) {
	{
		for (int i = 0; i < QuestList.size(); i++)
		{
			if (QuestList[i].returnName() == QuestName)
			{
				return true;
			}
		}
		cerr << "there is no " << QuestName << "In locations list";
		return false;
	}
}

void Location::removeQuest(const string& QuestName) 
{
	for (int i = 0; i < QuestList.size(); i++)
	{
		if (QuestList[i].returnName() == QuestName)
		{
			vector<Quest>::iterator it;
			it = QuestList.begin() + i;
			QuestList.erase(it);
			progress -= 1;
		}
	}
};

bool Location::playQuest(int type, Character& player, const string& QuestName) {

	for (int i = 0; i < QuestList.size(); i++)
	{
		if (QuestList[i].returnName() == QuestName)
		{
			switch (type)
			{
			case 0:
			{

				QuestList[i].artifactHunt(player);
				if (QuestList[i].artifactHunt(player) == true)
				{
					return true;
					break;
				}
				else
				{
					return false;
					break;
				}
				break;
			}
			case 1:
			{
				QuestList[i].playStalkeroulette();
				break;
			}
			case 2:
			{
				QuestList[i].playRockPaperScissors();
				break;
			}
			case 3:
			{
				QuestList[i].guessTheWord();
				break;
			}
			default:
			{
				cerr << "\nWrong value";
				break;
			}
			}
		}

	}

}