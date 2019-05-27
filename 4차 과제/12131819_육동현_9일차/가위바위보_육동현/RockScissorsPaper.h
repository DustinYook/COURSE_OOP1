/*=========================================================================
* File Name: RockScissorsPaper.h
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

#ifndef ROCK_SCISSORS_PAPER_H
#define ROCK_SCISSORS_PAPER_H
#include <iostream>
#include <iomanip>
#include <cstdlib> // srand(), rand()
#include <ctime> // time()
#include <string> // getline()
#include <stdexcept> // exception(), try-catch
using namespace std;
typedef unsigned int UINT; // 타입 재정의
enum Status { SCISSORS = 0, ROCK = 1, PAPER = 2 }; // 열거체 정의

class RockScissorsPaper
{
private:
	Status enumUserChoice; // enum형식의 user input
	UINT uintUserChoice; // UINT 형식의 user input
	UINT computerChoice; // UINT 형식의 computer input
public:
	void displayMessage() const; // 게임의 기본 프레임을 출력하는 함수
	void generateComputerChoice(); // 컴퓨터의 가위바위보를 생성하는 함수
	void inputUserChoice(); // 사용자의 입력값을 받는 함수
	void runGame(); // 게임을 실행시키는 함수
};
#endif