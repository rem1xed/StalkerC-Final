#pragma once
#include <iostream>
#include <string>
#include "NPC.h"
#include "Mutant.h"
#include "Quest.h"
using namespace std;

class Location
{
	string name;
	int progress; //+1 with each quest
	vector<NPC> NPClist;
	vector<Mutant> MutantList;
	vector<Quest> QuestList;
public:
	Location() { 
		name = "NULL"; progress = 0; 
		NPC nullNPC; NPClist = { nullNPC }; 
		Mutant nullMut;  MutantList = { nullMut }; 
		Quest nullQ; QuestList = { nullQ };
	
	}
	Location(const string& nam, int progr, vector<NPC> npcL, vector<Mutant> mutantL, vector<Quest> questL) :
		name(nam), progress(progr), NPClist(npcL), MutantList(mutantL), QuestList(questL) {
		progress = QuestList.size();
	}
	const string returnName();
	int returnProgress();

	void ShowNPCList();
	void ShowMutantList();
	void ShowQuestList();

	void removeQuest(const string& QuestName);
};