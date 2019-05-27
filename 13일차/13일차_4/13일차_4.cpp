// 프로그램 목적: 벡터와 배열의 비교
#include <iostream>
#include <vector> // vector class template
#include <array> // array class template
#include <stdexcept> // out_of_range
using namespace std;
typedef unsigned int UINT;

int main()
{
	// 벡터와 배열의 공통점: 동일자료형 구성 (a set of homogeneous data type)
	vector<UINT> v1(3); 
	// vector<UINT> v1(3) = { 1, 2, 3 }; // 벡터: list initialization 미지원 
	array<UINT,3> a1 = { 1, 2, 3 };      // 배열: list initialization 지원

	/* 벡터의 원소 접근방법 (배열과 동일) */
	v1.at(0) = 1000; // 1) at()함수 이용
	v1[1] = 2000;    // 2) index를 이용
	for (const auto& element : v1)
		cout << element << "  ";
	cout << endl;

	// 1) vector class template: 예외처리가능(out_of_range)
	try
	{ // range를 벗어나서 출력시도
		for (size_t i = 0; i < v1.size() + 1; i++)
			cout << v1.at(i) << "  ";
		cout << endl;
		cout << "정상출력" << endl;
	}
	catch (out_of_range ex)
	{
		cout << ex.what() << endl;
		cout << "예외발생" << endl;
	}

	// 2) array class template: 예외처리가능(out_of_range)
	try // 예외가 발생할 여지가 있는 블록
	{ // range를 벗어나서 출력시도
		for (size_t i = 0; i < a1.size() + 1; i++)
			cout << a1.at(i) << "  "; 
		// a1.at(a1.size())은 존재하지 않는 원소접근 -> Exception
		cout << endl;
		cout << "정상출력" << endl; // 예외발생시 출력안함
	}
	catch (out_of_range ex) // OS쪽에서 예외를 잡아줌 -> 예외발생시 control 넘어옴
	{ // exception: 특정 실행의 경우 시스템작동이 멈추는 것
		cout << ex.what() << endl; // 예외종류 출력
		cout << "예외발생" << endl;
	}

	// 3) built-in array: 예외처리 불가
	UINT a2[] = { 1, 2, 3 };
	for (size_t i = 0; i < size(a2) + 1; i++)
		cout << a2[i] << "  ";
	cout << endl;

	system("pause");
}