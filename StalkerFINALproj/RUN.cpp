#include <iostream>
#include <cstdlib>
#include <ctime>

#include <Windows.h>
#include "games.h"
using namespace std;




void main()
{
	SetConsoleCP(1251); // ������������ ��������� Windows-1251 �  ���� ��������
	SetConsoleOutputCP(1251); // ������������ ��������� Windows-1251 �  ���� ���������



	int SuccessInTheQuest=1;

	//SuccessInTheQuest = guesTsheWord();

	//playRockPaperScissors();

	playStalkeroulette();


	cout << "1";
}