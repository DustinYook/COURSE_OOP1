/*=========================================================================
* File Name: Lotto.h
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

#ifndef LOTTO_H
#define LOTTO_H
#include <iostream>
#include <array> // array class template ����
#include <cstddef> // size_t ����
#include <random> // default_random_engine, uniform_int_distribution<T> ����
#include <ctime> // time() ����
using namespace std;
class Lotto
{
private:
	array<size_t, 6> lottoNum; // �ζǹ�ȣ ����
public:
	void makeRand(); // �ζǹ�ȣ���� �Լ�
	bool checkRepeat(size_t) const; // �ߺ�üũ �Լ�
	void displayData() const; // ������ �Լ�
	void runLotto(); // ���� �Լ�
	void swapOrder(size_t&, size_t&); // ���� �ٲٴ� �Լ�
	void sortData(); // ���� �Լ�
};
#endif