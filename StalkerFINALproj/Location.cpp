#include "Item.h"
#include "Location.h"
#include "Character.h"
#include "MAP.h"
#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"


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

void Location::removeQuest(const string& QuestName) {
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