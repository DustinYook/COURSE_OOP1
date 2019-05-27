// ���α׷� ����: Fig. 6. 11�� ���� �ǽ�
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef unsigned int UINT;
enum Status { CONTINUE = 0, WON = 1, LOST = 2 }; // �ʱ갪: 0�� ����

UINT rollDice(); // function prototype(declaration)

int main()
{
	srand(static_cast<UINT>(time(NULL)));
	UINT myPoint = 0;
	Status gameStatus = CONTINUE;
	UINT sumOfDice = rollDice();
	switch (sumOfDice)
	{
		// �̱�� ���
	case 7:
	case 11:
		gameStatus = WON;
		break;
		// ���� ���
	case 2:
	case 3:
		gameStatus = LOST;
		break;
	default:
		// �� �̿��� ���
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