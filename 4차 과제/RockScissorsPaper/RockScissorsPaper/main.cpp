/*=========================================================================
* File Name: main.cpp
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

int main()
{
	RockScissorsPaper r;
	r.displayMessage();
	r.runGame();
	system("pause");
}