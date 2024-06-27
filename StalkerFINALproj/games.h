
#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int guesTsheWord()
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
            cout << "Congratulations! You guessed the number!" << endl;
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

    return 0;
}




void playRockPaperScissors() 
{
    

    srand(static_cast<unsigned int>(time(0)));


    int playerChoice, computerChoice;
    string choices[3] = { "Артефакт", "Ніж", "Карбованець" };

 

    cout << "Гра 'Артефакт, Ніж, Карбованець'\n";
    cout << "Виберіть:\n";
    cout << "0: Артефакт\n";
    cout << "1: Ніж\n";
    cout << "2: Карбованець\n";
    cout << "Ваш вибір: ";
    cin >> playerChoice;


    if (playerChoice < 0 || playerChoice > 2) {
        cout << "Ну ти пацан. Сказали нормально, від одного до три загадати. Козел" << endl;
        return;
    }


    computerChoice = rand() % 3;

  
    cout << "Ви обрали: " << choices[playerChoice] << endl;
    cout << "Бандит вибрав: " << choices[computerChoice] << endl;

    if (playerChoice == computerChoice) {
        cout << "На цей раз нічия!" << endl;
    }
    else if ((playerChoice == 0 && computerChoice == 1) ||
        (playerChoice == 1 && computerChoice == 2) ||
        (playerChoice == 2 && computerChoice == 0)) {
        cout << "Ну пацанчик, на цей раз виграв!" << endl;
    }
    else {
        cout << "Ну шо браток, програв?!" << endl;
    }

}












void playStalkeroulette(int numberOfChambers = 6) 
{
   
    srand(static_cast<unsigned int>(time(0)));

   
    int bulletPosition = rand() % numberOfChambers;

    
    int playerChoice;
    cout << "Єй фраєр! Стій! Давай одну гру пограєм'\n";
    cout << "В барабані " << numberOfChambers << " камер.\n";
    cout << "Вибирай від 1 до " << numberOfChambers ;
    cin >> playerChoice;

    
    if (playerChoice < 1 || playerChoice > numberOfChambers) {
        cout << "Ну ти пацан. Сказали нормально, від одного до " << numberOfChambers << "." << endl;
        return;
    }

    cout << "*звук вистрілу*" << endl;;
    Sleep(2000);
    if (playerChoice - 1 == bulletPosition) {
        cout << "Був сталкер, нема сталкера" << endl;
    }
    else {

        cout << "Тиранули мене пацани,тиранули. Ви вижили." << endl;
    }
}




