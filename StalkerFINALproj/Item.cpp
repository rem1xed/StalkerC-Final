#include <iostream>
#include "Character.h"

#include "Item.h"
#include "Location.h"
#include "MAP.h"
#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"
using namespace std;

const string Item::returnName() { return name; };
int Item::returnWeight() { return weight; };
int Item::returnPrice() { return price; };
int Item::returnPositivePoints() { return positivePoints; };
int Item::returntypeOfItem() { return typeOfItem; };


