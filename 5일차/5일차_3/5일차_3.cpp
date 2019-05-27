// 프로그램 설명: scope에 따른 local, global variable
#include <iostream>
using namespace std;

int a = 1; // global variable

/* main */
int main()
{
	int a = 3; // local variable (main)
	// double a = 3.14; 
	// 같은 scope에서는 이름이 같으면 타입이 달라도 syntax error
	cout << "main: " << a << endl;
	/* block */
	{
		int a = 5; // local variable (block)
		cout << "block: " << a << endl; // call local variable (block)
		cout << "global: " << ::a << endl; // call global variable
	}
	system("pause");
}