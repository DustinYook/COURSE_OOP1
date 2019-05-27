/*=========================================================================
* File Name: RockScissorsPaper.cpp
* Description:
* - This program is to run Rock-Scissors-Paper games
* Programmed by YOOK DONGHYUN (12131819)
* Last updated: January 02, 2018 (by YOOK DONGHYUN / Dustin)
* =========================================================================
* Version Control (Explain updates in detail)
* =========================================================================
* Updated By Date (YYYY/MM/DD) Version Remarks
* Dustin 2018/01/02, ver 1.0, the first version is created.
* =======================================================================*/

#include "RockScissorsPaper.h"

// 1) ������ �⺻ �������� ����ϴ� �Լ�
void RockScissorsPaper::displayMessage() const
{
	/* Rule of Games Explanation */
	cout << "Welcome to Rock-Scissors-Paper Games!\n" << endl;
	cout << "==========================================================" << endl;
	cout << setw(35) << "Rule of Games" << endl;
	cout << "This game will be continued until you win computer over." << endl;
	cout << "You need to type your choice though keyboard." << endl;
	cout << "Available Choices: Scissors(0), Rock(1), Paper(2)" << endl;
	cout << "==========================================================" << endl;
	cout << "\nEnter Player Name: ";

	/* Player Name�� �Է¹޴� ó�� */
	string userName;
	getline(cin, userName);
	cout << userName << " starts Rock-Scissors-Paper Games!\n" << endl;
}

// 2) ��ǻ���� ������������ �����ϴ� �Լ�
void RockScissorsPaper::generateComputerChoice()
{
	srand(static_cast<UINT>(time(NULL))); // time���� seed �� ����
	computerChoice = rand() % 3; // ��ǻ���� ��������
}

// 3) ������� �Է°��� �޴� �Լ�
void RockScissorsPaper::inputUserChoice()
{
LABEL:
	try
	{
		/* �Է�ó�� */
		cout << "Enter Your Choice : ";
		UINT tempUserChoice;
		cin >> tempUserChoice; // >>�� ���� operator overloading ��� temp�� ����Ͽ�
		uintUserChoice = tempUserChoice;
		enumUserChoice = static_cast<Status>(tempUserChoice); // ���⼭ ����� ����ȯ ����
		string str; // ����� �Է°���� ���� string ��� ����
		switch (enumUserChoice)
		{
		case SCISSORS:
			str = "\"Scissors\"";
			break;
		case ROCK:
			str = "\"Rock\"";
			break;
		case PAPER:
			str = "\"Paper\"";
			break;
		default:
			throw exception("\n[warning] Wrong input!\n\a"); // �߸��� �Է¿� ���� ����ó��
		} cout << "Your Choice is " << str << endl;
	}
	catch (exception ex) // exception handling
	{
		cerr << ex.what() << endl;
		goto LABEL;
	}
}

// 4) ������ �����Ű�� �Լ�
void RockScissorsPaper::runGame()
{
	while (true) // ���ѷ��� ����
	{
		/* ���� ��ǻ�Ͱ� ���������� */
		generateComputerChoice();
		inputUserChoice();

		/* ���������� �� ���� ���Ͽ� ������ */
		string str;
		switch (computerChoice)
		{
		case SCISSORS:
			str = "\"Scissors\"";
			break;
		case ROCK:
			str = "\"Rock\"";
			break;
		case PAPER:
			str = "\"Paper\"";
		} cout << "Computer's choice is " << str << endl;
		if (enumUserChoice == computerChoice)
			cout << "[result] You draw the game\n" << endl;
		else
		{
			if (enumUserChoice == SCISSORS)
			{
				switch (computerChoice)
				{
				case ROCK: cout << "[result] You lose the game\n" << endl; 
					break; 
				case PAPER: goto LABEL;
				}
			}
			else if (enumUserChoice == ROCK)
			{
				switch (computerChoice)
				{
				case SCISSORS: goto LABEL;
				case PAPER: cout << "[result] You lose the game\n" << endl; 
				}
			} // end_1st_elseif
			else if (enumUserChoice == PAPER)
			{
				switch (computerChoice)
				{
				case SCISSORS: cout << "[result] You lose the game\n" << endl; 
					break; 
				case ROCK: goto LABEL;
				}
			} // end_2nd_elseif
		} // end_else
	} // end_while
LABEL:
	cout << "Congratulations! You win the game!\n" << endl;
	cout << "[System] The system will end the game" << endl;
}