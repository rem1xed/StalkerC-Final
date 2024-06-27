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
	string currentLoc;
	vector<Quest> CurrentLocationQuestList;


	vector<Location> locationRemain;
	int Playerhealth;
	int PlayerArmor;
	int PlayerRadiationlvl;
	int PlayermaxWeight;
	int PlayerbusyWeight; //if BusyWeight >= maxWeight : can't move(add logic)
	bool PlayercanMove;

public:
	SaveGame() { currentLoc = "TEST"; Quest nullQ; CurrentLocationQuestList = { nullQ }; Location nullLoc; locationRemain = { nullLoc }; }
	SaveGame(const string& currLc, vector<Quest> CurrLocQLst, vector<Location> locRem, int plHeal, int plArmo, int plRadlvl, int PlMxWe, int PlBsWe, bool plCmov) :
		currentLoc(currLc), CurrentLocationQuestList(CurrLocQLst), locationRemain(locRem), Playerhealth(plHeal), PlayerArmor(plArmo), PlayerRadiationlvl{ plRadlvl },
		PlayermaxWeight(PlMxWe), PlayerbusyWeight(PlBsWe), PlayercanMove(plCmov) {}
};