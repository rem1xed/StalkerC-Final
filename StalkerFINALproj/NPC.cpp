#include <iostream>
#include <string>
#include "NPC.h"

using namespace std;

const string NPC::returnName() { return name;  };
int NPC::returnHealth() { return health; };
int NPC::returnArmor()  { return armor; };
bool NPC::returnAliveSt() { return isAlive; };
bool NPC::returnFriendStatus() { return friendStatus; };


void NPC::changeHealth(int val, bool way) {
	if (way) { health -= val; }
	else { health += val; }
};
void NPC::changeArmor(int val, bool way) {
	if (way) { armor -= val; }
	else { armor -= +val; }
};
void NPC::changeAliveSt(bool val) {
};
void NPC::changeFriendStatus(int val, bool way) {};