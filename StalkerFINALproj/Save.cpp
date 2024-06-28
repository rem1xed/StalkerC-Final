#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <string>
#include <windows.h>
#include "Character.h"
#include <fstream>
#include "Item.h"
#include "Location.h"
#include "MAP.h"
#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"
#include "Save.h"

bool SaveGame::OverwriteProgress(const string& fileName,const string& currLoc, vector<Quest> CurrLocQuestList, int plHeal, int plArmo, int plRadlvl, int PlMxWe, int PlBsWe, bool plCmov) {

    ofstream outFile(fileName); // Відкриття файлу для запису

    if (!outFile.is_open()) { // Перевірка, чи вдалося відкрити файл
        cerr << "Unable to open file: " << fileName << endl;
        return false;
    }

    outFile << currLoc << endl;

    outFile << plHeal << endl;
    outFile << plArmo << endl;
    outFile << plRadlvl << endl;
    outFile << PlMxWe << endl;
    outFile << PlBsWe << endl;
    outFile << plCmov << endl;
    outFile << endl;
    for (int i = 0; i < CurrLocQuestList.size(); i++)
    {
        outFile << CurrLocQuestList[i].returnName() << endl;
        outFile << CurrLocQuestList[i].returnType() << endl;
        
    }

    outFile.close(); 

    return true;

}

//ifstream file(fileName);
//if (!file)
//{
//	ofstream file(fileName);
//	ifstream file(fileName);
//}

//file.open(fileName, ios::trunc);
//file.close();
//file.open(fileName, ios::in);
//if (file.is_open())
//{
//	file << currLoc << endl;
//}