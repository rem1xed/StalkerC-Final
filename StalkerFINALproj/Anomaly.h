#pragma once

#include "Character.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayField(const vector<vector<char>>& field) {
    for (const auto& row : field) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

void artifactHunt(Character& player) 
{
    srand(time(0));
    vector<vector<char>> field(4, vector<char>(4, '0'));
    int artifactX = rand() % 4;
    int artifactY = rand() % 4;

    int anomalies = 0;
    while (anomalies < 4) {
        int x = rand() % 4;
        int y = rand() % 4;
        if ((x != artifactX || y != artifactY) && field[x][y] == '0') {
            field[x][y] = '*';
            anomalies++;
        }
    }

    bool foundArtifact = false;
    while (!foundArtifact) {
        displayField(field);
        int x, y;
        cout << "Enter the coordinates (x y) to search (0-3 for both): ";
        cin >> x >> y;

        if (x == artifactX && y == artifactY) {
            cout << "You found the artifact!" << endl;
            Item artifact("Artifact", 1, 100, 0, 2);
            player.addItem(artifact);
            foundArtifact = true;
        }
        else if (field[x][y] == '*') {
            cout << "You hit an anomaly! Health -10" << endl;
            player.changeHealth(10, false);
        }
        else {
            cout << "Nothing found here." << endl;
        }

        cout << "Player health: " << player.returnHealth() << endl;

        if (player.returnHealth() <= 0) {
            cout << "You died!" << endl;
            break;
        }
    }
}


