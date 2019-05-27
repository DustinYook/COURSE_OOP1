/*=========================================================================
* File Name: main.cpp
* Description:
* - This program is to generate six lotto numbers without repeatition
*   and also it sort data in ascending order
* Programmed by YOOK DONGHYUN (12131819)
* Last updated: January, 04, 2018 (by YOOK DONGHYUN / Dustin)
* =========================================================================
* Version Control (Explain updates in detail)
* =========================================================================
* Updated By Date (YYYY/MM/DD) Version Remarks
* Dustin 2018/01/04, version 1.0 created
* =======================================================================*/

#include "Lotto.h"

int main()
{
	Lotto l;
	l.runLotto();
	l.sortData();
	system("pause");
}