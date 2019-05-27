// 프로그램 목적: built-in array와 array class template에 대한 기초실습
#include <iostream>
#include <cstddef> // size_t 정의
#include <array> // array class template 정의
using namespace std;

/* Named Constant */
#define MAX 10 // 매크로상수 정의 (세미콜론 X)
enum Number { ONE = 1, TWO = 2 }; // 열거체 정의
const int NUM = 30; // const 사용
// 위의 Named Constant는 모두 배열의 크기로 사용가능!

int main()
{
	/* 배열은 크기가 고정 */
	{
		int x = 10; // 변수(variable)
		// int b[x]; // 배열의 크기는 절대로 변수가 될 수 없다!
		// array<int, x> b; // array class template도 마찬가지
		// ★ 배열은 선언시 크기가 정해져야 함 (Named Constant 또는 Constant만 허용)
		// 즉, 중간에 값을 변경할 수 없음
	}

	/* built-in array (기존 C 방식) */
	{
		// 초기화 없이 출력: 쓰레기값 출력
		int a[5]; // stack 영역에 생성 (초기화 안하면 garbage value 저장)
	    // <주의> 지역변수를 초기화없이 사용하면 논리오류(쓰레기값 저장)
		for (size_t i = 0; i < 5; i++)
			cout << a[i] << " "; // 쓰레기값 출력
		cout << endl;
		
		// 기본초기화방법 #1: 원소별로 일일이 초기화
		a[0] = 1; 
		a[1] = 2;
		a[2] = 3;
		a[3] = 4;
		a[4] = 5;
		for (size_t i = 0; i < 5; i++)
			cout << a[i] << " "; // 초기화 된 값으로 출력 
		cout << endl;

		// 기본초기화방법 #2: 반복문을 이용하여 초기화
		for (size_t i = 0; i < sizeof(a)/sizeof(a[0]); i++) 
		{ // <참고> sizeof(a[0])는 배열의 단위타입
		  // built-in array에는 멤버함수 없음! (array class template과 차이점)
			a[i] = i * 10; // 초기화
			cout << a[i] << " ";
		} cout << endl;
	}

	/* array class template (C++11 방식) */
	{
		array<int, MAX> arry; // arry는 객체 (즉, 멤버함수 존재)
		for (size_t i = 0; i < arry.size(); i++) // size()는 배열크기 리턴
		{
			arry.at(i) = i * 100; // at(i)는 i번째 원소를 의미
			cout << arry.at(i) << " ";
		} cout << endl;
		cout << "Size of array : " << arry.size() << endl; 
	}
	system("pause");
}