// 프로그램 목적: Fig. 6. 11에 대한 실습
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef unsigned int UINT;
enum Status { CONTINUE = 0, WON = 1, LOST = 2 }; // 초깃값: 0이 시작

UINT rollDice(); // function prototype(declaration)

int main()
{
	srand(static_cast<UINT>(time(NULL)));
	UINT myPoint = 0;
	Status gameStatus = CONTINUE;
	UINT sumOfDice = rollDice();
	switch (sumOfDice)
	{
		// 이기는 경우
	case 7:
	case 11:
		gameStatus = WON;
		break;
		// 지는 경우
	case 2:
	case 3:
		gameStatus = LOST;
		break;
	default:
		// 그 이외의 경우
		gameStatus = CONTINUE;
		myPoint = sumOfDice;
		cout << "Point is " << myPoint << endl;
	} 

	while (CONTINUE == gameStatus)
	{
		sumOfDice = rollDice();
		if (sumOfDice == myPoint)
			gameStatus = WON;
		else if (sumOfDice == 7)
			gameStatus = LOST;
	}

	if (WON == gameStatus)
		cout << "Player wins" << endl;
	else
		cout << "Player loses" << endl;

	system("pause");
}

UINT rollDice()
{
	UINT dice1 = rand() % 6 + 1;
	UINT dice2 = rand() % 6 + 1;
	UINT sum = dice1 + dice2;
	cout << "Player rolled " << dice1 << " + " << dice2 << " = " << sum << endl;
	return sum;
}