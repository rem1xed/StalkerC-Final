#include "Character.h"
#include "Item.h"
#include <iostream>
#include <iomanip>

using namespace std;




    

    void displayCharacterInfo( Character& player)
    {


        string name1 = player.returnName();
        int health1 = player.returnHealth();
        int armor1 = player.returnArmor();
        int radiationlvl1 = player.returnRadLvl();
        int maxWeight1 = player.returnMaxWeight();
        int busyWeight1 = player.returnBusyWeight(); //if BusyWeight >= maxWeight : can't move(add logic)
        bool canMove1 = player.returnIfCanMove(); //0 - can move, 1 - can't




        cout << "Character Information:" << endl;
        cout << "----------------------" << endl;
        cout << "Name: " << name1 << endl;
        cout << "Health: " << health1 << endl;
        cout << "Armor: " << armor1 << endl;
        cout << "Radiation Level: " << radiationlvl1 << endl;
        cout << "Max Weight: " << maxWeight1 << endl;
        cout << "Busy Weight: " << busyWeight1 << endl;
        cout << "Can Move: " << (canMove1 ? "Yes" : "No") << endl;
        cout << endl;

        /*cout << "Inventory:" << endl;
        cout << "----------" << endl;
        const vector<Item>& inventory = player.returnInventory();
        for (const auto& item : inventory) {
            cout << "Item Name: " << item.returnName() << endl;
            cout << "Weight: " << item.returnWeight() << endl;
            cout << "Price: " << item.returnPrice() << endl;
            cout << "Positive Points: " << item.returnPositivePoints() << endl;
            cout << "Type of Item: " << item.returntypeOfItem() << endl;
            cout << "---------------------" << endl;
        }*/
    }
