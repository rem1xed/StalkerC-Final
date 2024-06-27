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

	string returnName();
	int returnProgress();

	int changeProgress();
};