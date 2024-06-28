#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <string>
#include <windows.h>
#include "Character.h"

#include "Item.h"
#include "Location.h"
#include "MAP.h"
#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"


class SaveGame
{
	string saveName;
	//string currentLoc;
	//vector<Quest> CurrentLocationQuestList;

	//int Playerhealth;
	//int PlayerArmor;
	//int PlayerRadiationlvl;
	//int PlayermaxWeight;
	//int PlayerbusyWeight; //if BusyWeight >= maxWeight : can't move(add logic)
	//bool PlayercanMove;

public:
	SaveGame(const string& name) : saveName(name) {}
	//SaveGame() { currentLoc = "TEST"; Quest nullQ; CurrentLocationQuestList = { nullQ }; Location nullLoc; Playerhealth = 0; PlayerArmor = 0;
	//PlayerRadiationlvl; PlayermaxWeight = 0; PlayerbusyWeight = 0; PlayercanMove = 0;
	//}
	//SaveGame(const string& currLc, vector<Quest> CurrLocQLst, int plHeal, int plArmo, int plRadlvl, int PlMxWe, int PlBsWe, bool plCmov) :
	//	currentLoc(currLc), CurrentLocationQuestList(CurrLocQLst), Playerhealth(plHeal), PlayerArmor(plArmo), PlayerRadiationlvl{ plRadlvl },
	//	PlayermaxWeight(PlMxWe), PlayerbusyWeight(PlBsWe), PlayercanMove(plCmov) {}

	bool OverwriteProgress(const string& fileName, const string& currLoc, vector<Quest> CurrLocQuestList, int plHeal, int plArmo, int plRadlvl, int PlMxWe, int PlBsWe, bool plCmov);
};