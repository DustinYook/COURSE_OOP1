// 프로그램 목적: 래퍼런스(참조)에 대한 기초실습 - 매우 중요!
#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	cout << a << endl; // a의 값 출력
	cout << &a << endl; // a의 주소 출력

	int b = a; // a값을 복사하여 b에 대입
	cout << b << endl; // b의 값 출력
	cout << &b << endl; // b의 주소 출력

	int& c = a; // c는 a의 참조변수/래퍼런스
	cout << c << endl; // a의 값 = c의 값
	cout << &c << endl;  // a의 주소 = c의 주소
	// 즉, a라는 이름이 붙은 메모리 공간에 c라는 이름을 또 붙임
	// 같은 공간에 이름을 하나 더 붙인 것 = 참조(래퍼런스), 별칭, Alias

	c++; // 1) c를 증가시켰지만 a도 증가
	cout << a << endl;

	a++; // 2) a를 증가시켰지만 c도 증가
	cout << c << endl;
	// 1과 2를 통해서 a, c는 같은 메모리 공간을 공유하고 있음을 알 수 있음

	system("pause");
}