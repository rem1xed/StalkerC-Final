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
#include <limits>
bool SaveGame::WriteInto(const string& fileName, string& currLoc, vector<Quest>& CurrLocQuestList, int& plHeal, int& plArmo, int& plRadlvl, int& PlMxWe, int& PlBsWe, bool& plCmov, vector<Item>& FileInventory)
{
    fstream outFile(fileName); 

    if (!outFile.is_open()) { // Перевірка, чи вдалося відкрити файл
        cerr << "Unable to open file: " << fileName << endl;
        return false;
    }

    getline(outFile, currLoc);
    outFile << endl;

    outFile >> plHeal;
    outFile << endl;
    outFile >> plArmo;
    outFile << endl;
    outFile >> plRadlvl;
    outFile << endl;
    outFile >> PlMxWe;
    outFile << endl;
    outFile >> PlBsWe;
    outFile << endl;
    outFile >> plCmov;
    outFile << endl;
    bool go = true;
    while (true) {
        string NnameQuest;
        outFile >> NnameQuest;
        outFile.ignore('\n'); // Ignore newline
        if (NnameQuest != "END1") {
            cout << "\n."; 
            int Ntype;
            // Read the quest type
            outFile >> Ntype;
            outFile.ignore('\n'); // Ignore newline
            Quest NewQuest(NnameQuest, Ntype);
            CurrLocQuestList.push_back(NewQuest);
        }
        else {
            break; // Exit loop when "END1" is encountered
        }
    }

    //while(true)
    //{
    //    string NnameQuest;
    //    if (NnameQuest != "END1")
    //    {
    //    cout << "\n.";
    //    int Ntype;
    //    getline(outFile, NnameQuest);
    //    outFile << "\r\n";
    //    outFile >> Ntype;
    //    outFile << "\r\n";
    //    Quest NewQuest(NnameQuest, Ntype);
    //    CurrLocQuestList.push_back(NewQuest);
    //    }
    //    else
    //    {
    //        break;
    //    }
    //}
    go = true;
    while (true) {
        string NnameItem;
        // Read the item name
        getline(outFile, NnameItem);
        if (NnameItem != "END") {
            cout << "\n--"; // Debug output (?)

            int NPosPoint;
            int Nprice;
            int NtypeOf;
            int Nweight;

            // Read item details
            outFile >> NPosPoint;
            outFile.ignore('\n'); // Ignore newline after integer
            outFile >> Nprice;
            outFile.ignore('\n'); // Ignore newline after integer
            outFile >> NtypeOf;
            outFile.ignore('\n'); // Ignore newline after integer
            outFile >> Nweight;
            outFile.ignore('\n'); // Ignore newline after integer

            Item Nitem(NnameItem, Nweight, Nprice, NPosPoint, NtypeOf);
            FileInventory.push_back(Nitem);
        }
        else {
            break; // Exit loop when "END" is encountered
        }
    }

    //while (true)
    //{
    //    string NnameItem;
    //    if (NnameItem != "END")
    //    {
    //    cout << "\n--";
    //    
    //    int NPosPoint;
    //    int Nprice;
    //    int NtypeOf;
    //    int Nweight;
    //    outFile >> NnameItem;
    //    outFile << endl;
    //    
    //        
    //    
    //    
    //    outFile >> NPosPoint;
    //    outFile << endl;
    //    outFile >> Nprice;
    //    outFile << endl;
    //    outFile >> NtypeOf;
    //    outFile << endl;
    //    outFile >> Nweight;
    //    outFile << endl;

    //    Item Nitem(NnameItem, Nweight, Nprice, NPosPoint, NtypeOf);
    //    FileInventory.push_back(Nitem);
    //    }
    //    else
    //    {
    //        break;
    //    }
    //}

    outFile.close();

    return true;
}

bool SaveGame::OverwriteProgress(const string& fileName,const string& currLoc, vector<Quest> CurrLocQuestList, int plHeal, int plArmo, int plRadlvl, int PlMxWe, int PlBsWe, bool plCmov, vector<Item> FileInventory) {

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
    outFile << "END1" << endl;
    for (int i = 0; i < FileInventory.size(); i++)
    {
        outFile << FileInventory[i].returnName() << endl;
        outFile << FileInventory[i].returnPositivePoints() << endl;
        outFile << FileInventory[i].returnPrice() << endl;
        outFile << FileInventory[i].returntypeOfItem() << endl;
        outFile << FileInventory[i].returnWeight() << endl;
    }
    outFile << "END";
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