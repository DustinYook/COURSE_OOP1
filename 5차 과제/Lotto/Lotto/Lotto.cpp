/*=========================================================================
* File Name: Lotto.cpp
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

void Lotto::makeRand()
{
	/* 난수생성을 위한 객체생성 */
	default_random_engine engine(static_cast<size_t>(time(NULL)));
	uniform_int_distribution<size_t> range(1, 45);

	/* 로또번호 저장공간에 난수를 생성하여 저장 */
	for (size_t i = 0; i < lottoNum.size(); i++)
	{
		while (true) // 무한루프 생성
		{
			lottoNum[i] = range(engine); // 난수생성하여 저장
			if (checkRepeat(i)) // 중복방지 서브프로그램
				break;
		} // end while
	} // end for
}

bool Lotto::checkRepeat(size_t arg) const
{
	bool flag;

	if (arg == 0) // 처음은 제외 (겹칠게 없음)
		flag = true;

	for (size_t i = 0; i < arg; i++)
	{
		// 같은게 발견되면 무조건 false 리턴
		if (lottoNum[i] == lottoNum[arg])
		{
			flag = false;
			break;
		}
		else // 아닌 경우 true 리턴
			flag = true;
	}
	return flag;
}

void Lotto::displayData() const
{
	cout << "This is the number for this week : ";
	for (size_t i = 0; i < lottoNum.size(); i++)
		cout << lottoNum[i] << " ";
	cout << endl << endl;
}

void Lotto::runLotto()
{
	cout << "Computer will generate Lotto number for this week!" << endl;
	makeRand();
	displayData();
}

void Lotto::swapOrder(size_t& arg1, size_t& arg2)
{
	size_t temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

void Lotto::sortData()
{
	cout << "[Notice] The system will sort data in ascending order." << endl;
	for (size_t i = 0; i < lottoNum.size(); i++) // 비교기준
	{
		for (size_t j = i; j < lottoNum.size(); j++) // 비교대상
		{
			if (i == j) // 동일 원소의 경우 비교 skip
				continue;
			if (lottoNum[i] > lottoNum[j]) // 비교기준이 더 큰 경우 오른쪽으로 보냄
				swapOrder(lottoNum[i], lottoNum[j]);
		} // inner for
	} // outer for
	displayData();
}