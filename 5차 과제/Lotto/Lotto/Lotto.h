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
#include <array> // array class template 정의
#include <cstddef> // size_t 정의
#include <random> // default_random_engine, uniform_int_distribution<T> 정의
#include <ctime> // time() 정의
using namespace std;
class Lotto
{
private:
	array<size_t, 6> lottoNum; // 로또번호 저장
public:
	void makeRand(); // 로또번호생성 함수
	bool checkRepeat(size_t) const; // 중복체크 함수
	void displayData() const; // 결과출력 함수
	void runLotto(); // 실행 함수
	void swapOrder(size_t&, size_t&); // 순서 바꾸는 함수
	void sortData(); // 정렬 함수
};
#endif