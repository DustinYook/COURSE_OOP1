// 프로그램 목적: local, static, global variable에 대한 실습 (값 변화 중요!)
#include <iostream>
using namespace std;
int x = 30; // global variable
void Local()
{
	int x = 10;
	cout << "Local  Variable : " << x++ << endl;
}
void Static()
{
	static int x = 20; 
	cout << "Static Variable : " << x++ << endl;
}
void Global()
{
	cout << "Global Variable : " << x++ << endl;
}

int main()
{
	Local();  // 결과값: 10
	Static(); // 결과값: 20
	Global(); // 결과값: 30
	cout << "====================" << endl;
	Local();  // 결과값: 10
	Static(); // 결과값: 21 
	Global(); // 결과값: 31
	/* 실습결과요약 */
	// 1) local  variable : stack 영역에 할당 / scope에서 선언된 순간부터 scope의 '}'를 만날때까지 유지
	// 2) static variable : static 영역에 할당 / 실행 전 바인딩되어 실행동안 유지 (?)
	// 3) global variable : stack 영역에 할당 / 선언문이 실행될 때부터 실행동안 유지 (?)
    // <주의> static variable은 선언 시 한 번만 초기화!
	// Tip) 값을 유지 위해서는 global과 static 모두 가능 (static is more desirable)	
	// static은 매개변수가 전달되는 것과 유사한 효과를 나타냄
	system("pause");
}