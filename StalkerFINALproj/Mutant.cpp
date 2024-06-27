#include <iostream>
#include <string>
#include "Character.h"

#include "Item.h"
#include "Location.h"
#include "MAP.h"
#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"

using namespace std;

const string Mutant::returnName() { return name; };
int Mutant::returnHealth() { return health; };
int Mutant::returnDamage() { return damage; };
int Mutant::changeHealth() { return health; };



