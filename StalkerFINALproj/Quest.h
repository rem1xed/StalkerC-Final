#pragma once
#include <iostream>
#include <string>
#include "Character.h"
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

using namespace std;

class Quest {
	string name;
	int type; //0 - artifactHunt, 1 = playStalkerroulete, 2 - playRockPaperScissors 3 - guessTheWord
public:
	Quest() { name = "NULL"; }
	Quest(const string nam) : name(nam) {}



	void displayField(const vector<vector<char>>& field);
	bool artifactHunt(Character& player);
	bool playStalkeroulette();
	bool playRockPaperScissors();
	void playQuest(int type, Character& player);
	bool guessTheWord();

	const string returnName();
};

