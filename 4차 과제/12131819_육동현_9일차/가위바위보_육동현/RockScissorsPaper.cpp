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

// 1) 게임의 기본 프레임을 출력하는 함수
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

	/* Player Name을 입력받는 처리 */
	string userName;
	getline(cin, userName);
	cout << userName << " starts Rock-Scissors-Paper Games!\n" << endl;
}

// 2) 컴퓨터의 가위바위보를 생성하는 함수
void RockScissorsPaper::generateComputerChoice()
{
	srand(static_cast<UINT>(time(NULL))); // time으로 seed 값 생성
	computerChoice = rand() % 3; // 컴퓨터의 선택저장
}

// 3) 사용자의 입력값을 받는 함수
void RockScissorsPaper::inputUserChoice()
{
LABEL:
	try
	{
		/* 입력처리 */
		cout << "Enter Your Choice : ";
		UINT tempUserChoice;
		cin >> tempUserChoice; // >>에 대한 operator overloading 대신 temp를 사용하여
		uintUserChoice = tempUserChoice;
		enumUserChoice = static_cast<Status>(tempUserChoice); // 여기서 명시적 형변환 수행
		string str; // 사용자 입력결과에 대한 string 출력 지원
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
			throw exception("\n[warning] Wrong input!\n\a"); // 잘못된 입력에 대한 예외처리
		} cout << "Your Choice is " << str << endl;
	}
	catch (exception ex) // exception handling
	{
		cerr << ex.what() << endl;
		goto LABEL;
	}
}

// 4) 게임을 실행시키는 함수
void RockScissorsPaper::runGame()
{
	while (true) // 무한루프 생성
	{
		/* 나와 컴퓨터가 가위바위보 */
		generateComputerChoice();
		inputUserChoice();

		/* 가위바위보 낸 것을 비교하여 결과출력 */
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