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
typedef unsigned int UINT; // Ÿ�� ������
enum Status { SCISSORS = 0, ROCK = 1, PAPER = 2 }; // ����ü ����

class RockScissorsPaper
{
private:
	Status enumUserChoice; // enum������ user input
	UINT uintUserChoice; // UINT ������ user input
	UINT computerChoice; // UINT ������ computer input
public:
	void displayMessage() const; // ������ �⺻ �������� ����ϴ� �Լ�
	void generateComputerChoice(); // ��ǻ���� ������������ �����ϴ� �Լ�
	void inputUserChoice(); // ������� �Է°��� �޴� �Լ�
	void runGame(); // ������ �����Ű�� �Լ�
};
#endif