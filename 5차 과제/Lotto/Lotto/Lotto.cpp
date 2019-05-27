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
	/* ���������� ���� ��ü���� */
	default_random_engine engine(static_cast<size_t>(time(NULL)));
	uniform_int_distribution<size_t> range(1, 45);

	/* �ζǹ�ȣ ��������� ������ �����Ͽ� ���� */
	for (size_t i = 0; i < lottoNum.size(); i++)
	{
		while (true) // ���ѷ��� ����
		{
			lottoNum[i] = range(engine); // ���������Ͽ� ����
			if (checkRepeat(i)) // �ߺ����� �������α׷�
				break;
		} // end while
	} // end for
}

bool Lotto::checkRepeat(size_t arg) const
{
	bool flag;

	if (arg == 0) // ó���� ���� (��ĥ�� ����)
		flag = true;

	for (size_t i = 0; i < arg; i++)
	{
		// ������ �߰ߵǸ� ������ false ����
		if (lottoNum[i] == lottoNum[arg])
		{
			flag = false;
			break;
		}
		else // �ƴ� ��� true ����
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
	for (size_t i = 0; i < lottoNum.size(); i++) // �񱳱���
	{
		for (size_t j = i; j < lottoNum.size(); j++) // �񱳴��
		{
			if (i == j) // ���� ������ ��� �� skip
				continue;
			if (lottoNum[i] > lottoNum[j]) // �񱳱����� �� ū ��� ���������� ����
				swapOrder(lottoNum[i], lottoNum[j]);
		} // inner for
	} // outer for
	displayData();
}