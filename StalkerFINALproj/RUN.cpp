#include <iostream>
#include <cstdlib>
#include <ctime>

#include <Windows.h>
#include "games.h"
using namespace std;




void main()
{
	SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
	SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення



	int SuccessInTheQuest=1;

	//SuccessInTheQuest = guesTsheWord();

	//playRockPaperScissors();

	playStalkeroulette();


	cout << "1";
}