// 프로그램 목적: 포인터와 키워드 const에 대한 실습
#include <iostream>
using namespace std;

int main()
{
	/* 포인터:비상수, 피참조변수:비상수 */
	{
		int a = 10;
		int b = 20;
		int* ptr = &a;
		*ptr = 100; // 피참조변수 저장값 변경가능
		ptr = &b; // 포인터변수 저장값 변경가능
	}
	
	/* 포인터:상수, 피참조변수:비상수 */
	{
		int a = 10;
		int b = 20;
		int* const ptr = &a; // 포인터변수의 상수화
		*ptr = 100; // 피참조변수 저장값 변경가능
		// ptr = &b; // 포인터변수 저장값 변경불가
	}

	/* 포인터:비상수, 피참조변수:상수 */
	{
		int a = 10;
		int b = 20;
		const int* ptr = &a;
		// *ptr = 100; // 피참조변수 저장값 변경불가
		ptr = &b; // 포인터변수 저장값 변경가능
	}

	/* 포인터:상수, 피참조변수:상수 */
	{
		int a = 10;
		int b = 20;
		const int* const ptr = &a;
		// *ptr = 100; // 피참조변수 저장값 변경불가
		// ptr = &b; // 포인터변수 저장값 변경불가
	}
	// <중요> 어느게 상수화가 되어 변경불가능한지 파악하는 것이 중요함!

	system("pause");
}