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
	Quest() { name = "NULL"; type = 0; }
	Quest(const string nam, int ty) : name(nam), type(ty) {}
	int returnType();


	void displayField(const vector<vector<char>>& field);
	bool artifactHunt(Character& player);
	bool playStalkeroulette(Character& player);
	bool playRockPaperScissors(Character& player);
	bool guessTheWord(Character& player);

	const string returnName();
};

