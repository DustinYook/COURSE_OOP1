// 프로그램 목적: 래퍼런스를 리턴하는 함수에 대한 실습 
#include <iostream>
using namespace std;

int& abc() // int형인 래퍼런스를 리턴
{
	static int a = 5; // history-sensitive하게 하려면 static을 써야 함
	return a; // int의 객체 c라는 공간을 리턴
}

int main()
{
	/* 래퍼런스 반환함수 */
	int c = abc();
	cout << c << endl;

	abc() = 3; // 래퍼런스 반환함수는 배정문의 lvalue가 될 수 있음
	cout << abc() << endl; // 결과값: 5 (3이 아님)

	/* 래퍼런스에 대한 주의사항 */
	// int& ref; // 래퍼런스는 선언과 동시에 초기화 되어야 함 (syntax error)
	int a = 10;
	int& aRef = a;
	int b = 20;
	aRef = b; // a와 b, 그리고 aRef가 alias가 됨
	cout << aRef << endl;
	cout << a << endl;

	system("pause");
}