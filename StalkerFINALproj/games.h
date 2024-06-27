
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
    string choices[3] = { "��������", "ͳ�", "�����������" };

 

    cout << "��� '��������, ͳ�, �����������'\n";
    cout << "�������:\n";
    cout << "0: ��������\n";
    cout << "1: ͳ�\n";
    cout << "2: �����������\n";
    cout << "��� ����: ";
    cin >> playerChoice;


    if (playerChoice < 0 || playerChoice > 2) {
        cout << "�� �� �����. ������� ���������, �� ������ �� ��� ��������. �����" << endl;
        return;
    }


    computerChoice = rand() % 3;

  
    cout << "�� ������: " << choices[playerChoice] << endl;
    cout << "������ ������: " << choices[computerChoice] << endl;

    if (playerChoice == computerChoice) {
        cout << "�� ��� ��� ����!" << endl;
    }
    else if ((playerChoice == 0 && computerChoice == 1) ||
        (playerChoice == 1 && computerChoice == 2) ||
        (playerChoice == 2 && computerChoice == 0)) {
        cout << "�� ��������, �� ��� ��� ������!" << endl;
    }
    else {
        cout << "�� �� ������, �������?!" << endl;
    }

}












void playStalkeroulette(int numberOfChambers = 6) 
{
   
    srand(static_cast<unsigned int>(time(0)));

   
    int bulletPosition = rand() % numberOfChambers;

    
    int playerChoice;
    cout << "�� ����! ���! ����� ���� ��� ������'\n";
    cout << "� ������� " << numberOfChambers << " �����.\n";
    cout << "������� �� 1 �� " << numberOfChambers ;
    cin >> playerChoice;

    
    if (playerChoice < 1 || playerChoice > numberOfChambers) {
        cout << "�� �� �����. ������� ���������, �� ������ �� " << numberOfChambers << "." << endl;
        return;
    }

    cout << "*���� �������*" << endl;;
    Sleep(2000);
    if (playerChoice - 1 == bulletPosition) {
        cout << "��� �������, ���� ��������" << endl;
    }
    else {

        cout << "�������� ���� ������,��������. �� ������." << endl;
    }
}




