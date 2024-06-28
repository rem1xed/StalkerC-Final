#include <iostream>

#include <ctime>
#include <windows.h>
#include "Item.h"
#include "Location.h"
#include "Character.h"
#include "MAP.h"
#include "Mutant.h"
#include "NPC.h"
#include "Quest.h"
using namespace std;

const string Quest::returnName(){ return name;}

int Quest::returnType() { return type; }

bool Quest::guessTheWord()
{

    srand(static_cast<unsigned int>(time(0)));


    int secretNumber = rand() % 5 + 1;
    int playerGuess = 0;

    cout << "I have guessed a number from 1 to 5. Try to guess it!" << endl;


    while (true) {
        cout << "Enter your number: ";
        cin >> playerGuess;

        if (playerGuess < 1 || playerGuess > 5) {
            cout << "Please enter a number between 1 and 5." << endl;
            continue;
        }

        if (playerGuess == secretNumber) {
            cout << "You guessed the number!" << endl;
            return true;
            break;
        }
        else {
            int difference = abs(playerGuess - secretNumber);
            if (difference >= 3) {
                cout << "It's cold" << endl;
            }
            else if (difference == 1) {
                cout << "Hot" << endl;
            }
            else {
                cout << "Try again" << endl;
            }
        }
    }

}


//anomaly's


void Quest::displayField(const vector<vector<char>>& field) {
    for (const auto& row : field) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

bool Quest::artifactHunt(Character& player)
{
    srand(time(0));
    vector<vector<char>> field(3, vector<char>(3, '0'));
    int artifactX = rand() % 3;
    int artifactY = rand() % 3;

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
        Quest::displayField(field);
        int x, y;
        cout << "Enter the coordinates (x y) to search (0-3 for both): ";
        cin >> x >> y;

        if (x == artifactX && y == artifactY) {
            cout << "You found the artifact!" << endl;
            Item artifact("Artifact", 1, 100, 0, 2);
            player.addItem(artifact);
            foundArtifact = true;
            return true;
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
            return false;
        }
    }
}


bool Quest::playStalkeroulette()
{
    int numberOfChambers = 6;
    srand(static_cast<unsigned int>(time(0)));


    int bulletPosition = rand() % numberOfChambers;


    int playerChoice;
    cout << "Hey a fryer! Stop! Let's play a game'\n";
    cout << "In the drum " << numberOfChambers << " bullet.\n";
    cout << "Choose from 1 to " << numberOfChambers;
    cin >> playerChoice;


    if (playerChoice < 1 || playerChoice > numberOfChambers) {
        cout << "You're a boy. They said it was okay, from one to " << numberOfChambers << "." << endl;
        return false;
    }

    cout << "*sound of a shot*" << endl;;
    Sleep(2000);
    if (playerChoice - 1 == bulletPosition) {
        cout << "There was a stalker, there is no stalker" << endl;
        return false;
    }
    else {

        cout << "The boys were bullying me, bullying me. You survived." << endl;
        return true;
    }

}


bool Quest::playRockPaperScissors() {
    srand(static_cast<unsigned int>(time(0)));

    int playerChoice, computerChoice;
    string choices[3] = { "Artifact", "Knife", "Coin" };

    cout << "Game 'Artifact, Knife, Coin'\n";
    cout << "Choose:\n";
    cout << "0: Artifact\n";
    cout << "1: Knife\n";
    cout << "2: Coin\n";
    cout << "Your choice: ";
    cin >> playerChoice;

    if (playerChoice < 0 || playerChoice > 2) {
        cout << "Hey, follow the instructions! Choose a number between 0 and 2." << endl;
        return false; 
    }

    computerChoice = rand() % 3;

    cout << "You chose: " << choices[playerChoice] << endl;
    cout << "Bandit chose: " << choices[computerChoice] << endl;

    if (playerChoice == computerChoice) {
        cout << "It's a draw this time!" << endl;
        return false; 
    }
    else if ((playerChoice == 0 && computerChoice == 1) ||
        (playerChoice == 1 && computerChoice == 2) ||
        (playerChoice == 2 && computerChoice == 0)) {
        cout << "You win this time!" << endl;
        return true;
    }
    else {
        cout << "You lost this time!" << endl;
        return false;
    }
}

//0 - artifactHunt, 1 = playStalkerroulete, 2 - playRockPaperScissors 3 - guessTheWord

