// 프로그램 목적: static array와 automatic array에 대한 실습 
#include <iostream>
#include <iomanip> // setw() 
#include <cstddef> // size_t
#include <array> // 빼먹지 않도록 주의!
using namespace std;

/* Static Array */
void staticArray() // 함수 소멸되어도 변수값 유지 (history-sensitive)
{
	cout << "Static Array is generated!" << endl;
	static array<size_t, 3> arr; 
	// <주의> static은 초기화 안하면 '0'으로 자동초기화
	for (const size_t constBuff : arr)
		cout << setw(2) << left <<  constBuff << "  ";
	cout << endl;
	for (size_t& refBuff : arr)
		cout << setw(2) << left << (refBuff += 5) << "  "; // 우선순위 때문에 괄호사용!
	cout << endl << endl;
}

/* Automatic Array */
void autoArray() // 함수 종료시 함수지역변수 소멸
{
	cout << "Automatic Array is generated!" << endl;
	array<size_t, 3> arr = { 1, 2, 3 }; 
	// <주의> automatic local variable은 초기화 안하면 garbage value 저장	
	for(size_t i = 0; i < arr.size(); i++)
		cout << setw(2) << left << arr.at(i) << "  ";
	cout << endl;
	for (size_t i = 0; i < arr.size(); i++)
		cout << setw(2) << left << (arr.at(i) += 5) << "  "; // 우선순위 때문에 괄호사용!
	cout << endl << endl;
}

size_t main()
{
	/* First Function Call */
	cout << "[First Function Call]" << endl;
	staticArray();
	autoArray();	
	/* Second Function Call */
	cout << "\n[Second Function Call]" << endl;
	staticArray();
	autoArray();
	system("pause");
}