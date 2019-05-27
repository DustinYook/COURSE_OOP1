// 프로그램 목적: 래퍼런스를 이용한 기초실습 (swap과 change)
#include <iostream>
using namespace std;

// 1) change function: Call-By-Value방식 사용, 값만 "복사"
void change(int xCpy, int yCpy) // x와 y는 formal parameter, 함수 종료시 소멸
{
	int temp = xCpy;
	xCpy = yCpy; 
	yCpy = temp;
	cout << "At change function : " << "x = " << xCpy << ", y = " << yCpy << endl;
}
// 2) swap function: Call-By-Reference방식 사용, 값이 아닌 "실체"를 바꿈
void swap(int& xRef, int& yRef) // xRef와 yRef는 actual parameter인 x와 y의 alias
{
	int temp = xRef;
	xRef = yRef;
	yRef = temp;
	cout << "At swap function : " << "x = " << xRef << ", y = " << yRef << endl;
}

int main()
{
	/* Call-By-Value */
	int x = 10, y = 20;
	cout << "Before function call : " << "x = " << x << ", y = " << y << endl;
	change(x, y);
	cout << "After function call : " << "x = " << x << ", y = " << y << endl;

	/* Call-By-Reference */
	cout << "\nBefore function call : " << "x = " << x << ", y = " << y << endl;
	swap(x, y);
	cout << "After function call : " << "x = " << x << ", y = " << y << endl;

	/* 래퍼런스와 포인터의 차이점 */
	// 1) 래퍼런스(참조): 기존 공간에 별칭만 붙임, 즉, 공간 생성을 하지 않음 (call-by-reference)
	// 2) 포인터: 참조하는 변수의 주소값을 저장할 수 있는 공간을 생성함 (call-by-address)

	/* 래퍼런스를 사용하는 이유 */
	// 1) callee의 execution 중에는 control이 callee에 있으므로 caller의 변수에는 접근 불가
	//    래퍼런스는 이름(identifier)을 제공하여 caller의 변수에 접근할 수 있는 통로를 제공
	// <참고> execution stack의 stack pointer(SP)가 가리키는 ARI에만 접근이 가능
	// 2) 래퍼런스는 Call-By-Value 방식과는 다르게 메모리의 Copy를 수행하지 않아 효율적

	system("pause");
}