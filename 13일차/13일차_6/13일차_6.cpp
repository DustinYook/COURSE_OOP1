// 프로그램 목적: 포인터에 대한 기초실습
#include <iostream>
using namespace std;
/* Function Prototype */
void change(int x, int y);
void changeRef(int& x, int& y);
void changePtr(int* x, int* y);

int main()
{
	/* 포인터 변수의 선언 */
	int a = 10; // a라는 공간에 10을 저장
	int* aPtr = &a; // aPtr이라는 특수공간에 a주소저장 (*는 포인터표시)
	cout << a << " == " << *aPtr << endl; // <주의> *는 역참조연산자 (위와 다름!)
	cout << &a << " == " << aPtr << endl << endl; // 포인터 변수는 피참조변수의 주소값을 저장

	/* 참조와 포인터의 차이점 */
	int& aRef = a; // a라는 공간에 aRef라는 별칭을 붙임
	cout << &a << " == " << &aRef << " != " << &aPtr << endl; // <주의> a와 aRef는 동일, aPtr은 아예 다른 변수
	cout << a << " == " << *aPtr << " == " << aRef << endl; // 저장값은 모두 같음: 10
	cout << (a += 1) << " == " << *aPtr << " == " << aRef << endl; // a를 변화시키면 나머지 같이 변화: 11
	cout << a << " == " << (*aPtr+=1) << " == " << aRef << endl; // *aPtr를 변화시키면 나머지 같이 변화: 12
	cout << a << " == " << *aPtr << " == " << (aRef += 1) << endl << endl; // aRef를 변화시키면 나머지 같이 변화: 13
	// <중요> 참조는 피참조변수 그 자체이지만, 포인터는 피참조변수의 주소만 저장할 뿐 전혀 별개의 변수이다!

	/* 포인터 변수의 초기화 */	
	// int* ptr; // 포인터 변수는 선언과 동시에 초기화 필요!
	int* ptr1 = NULL; // 과거방식
	int* ptr2 = nullptr; // 현재방식 (보다 명시적)
	cout << ptr1 << " == " << ptr2 << endl << endl;
	// int* ptr1 = 100; // 컴파일에러 -> 포인터변수에는 주소만 저장가능! 

	/* 함수의 매개변수로서의 포인터 */
	int x = 10, y = 20;
	cout << "x = " << x << "   " << "y = " << y << endl;
	// 1) Call-by-value 방식 (COPY)
	change(x, y); // 결과값: x = 10, y = 20
	cout << "x = " << x << "   " << "y = " << y << endl;
	// 2) Call-by-reference 방식
	changeRef(x, y); // 결과값: x = 20, y = 10
	cout << "x = " << x << "   " << "y = " << y << endl; 
	// 3) Call-by-address 방식
	changePtr(&x, &y); // 결과값: x = 10, y = 20 <주의> 주소전달해야 함!
	cout << "x = " << x << "   " << "y = " << y << endl << endl;

	system("pause");
}
/* Function Definition */
void change(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
void changeRef(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void changePtr(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}