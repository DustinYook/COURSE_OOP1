// 프로그램 목적: 다차원배열에 대한 기초실습
#include <iostream>
#include <iomanip> // setw()
#include <array> // array template class
#include <cstddef> // size_t
using namespace std;

int main()
{
	/* built-in array */
	{
		/* 배열 초기화방법 */
		int arr[2][3]; // auto array 초기화 안하면 쓰레기값 저장
		// int arr[2][3] = { 1,2,3,4,5,6 }; // 01_구분없이 나열
		// int arr[2][3] = { { 1, 2, 3 },{ 4, 5, 6 } }; // 02_brace로 구분
		arr[0][0] = 1; // 03_일일이 초기화
		arr[0][1] = 2;
		arr[0][2] = 3;
		arr[1][0] = 4;
		arr[1][1] = 5;
		arr[1][2] = 6;

		/* 배열 출력방법 */
		for (size_t i = 0; i < 2; i++) // 행 제어
		{
			for (size_t j = 0; j < 3; j++) // 열 제어
				cout << "arr[" << i << "][" << j << "]:" << setw(2) << arr[i][j] << "\t";
			cout << endl;
		} cout << endl;
	}

	/* Array Template Class */
	{
		/* 배열 초기화방법 */
		array<array<int, 3>, 2> arr = { 1, 2, 3, 4, 5, 6 }; // 구분 단위: int -> int[3]
		// array<array<int, 3>, 2> arr = { {1,2,3}, {4,5,6} }; // <주의> 컴파일에러!
		// 일일이 초기화도 되나 여기서는 생략함
		
		/* 행과 열의 개수 구하는 방법 */
		cout << "The number of rows : " << arr.size() << endl; // 결과값: 2
		cout << "The number of columns : " << arr[0].size() << endl; // 결과값: 3
		// <주의> column 구할 때 arr.at(0)을 하면 배열이 나와서 안됨! 

		/* 배열 출력방법 */
		for (size_t i = 0; i < arr.size(); i++) // 행 제어
		{
			for (size_t j = 0; j < arr[0].size(); j++) // 열 제어
				cout << "arr[" << i << "][" << j << "]:" << setw(2) << arr[i][j] << "\t";
			cout << endl;
		} cout << endl;
	}

	system("pause");
}