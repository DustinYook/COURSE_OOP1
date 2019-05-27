// 프로그램 설명: list initializer에 대한 실습
#include <iostream>
using namespace std;

int main()
{
	/* 기존의 초기화방법 */
	int x = 3.14; // warning만 발생
	cout << x << endl << endl;
	// 3이 출력: 소숫점 이하는 truncate -> syntax error 없음

	/* list initializer를 이용한 초기화 방법 */
	int y = { 3.14 }; // syntax error 발생
	int z{ 3.14 }; // syntax error 발생
	cout << y << endl;
	cout << z << endl;
	// 컴파일러에 의한 error detection이 가능한 장점

	/* list initializer의 사용방법 */
	// 1) 첫번째 방법: 배열초기화와 비슷한 문형
	double a = { 3.14 };
	cout << a << endl;
	// 2) 두번째 방법: 생성자와 비슷한 문형
	double b{ 3.14 };
	cout << b << endl << endl;

	system("pause");
}