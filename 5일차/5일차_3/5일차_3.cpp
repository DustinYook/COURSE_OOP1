// ���α׷� ����: scope�� ���� local, global variable
#include <iostream>
using namespace std;

int a = 1; // global variable

/* main */
int main()
{
	int a = 3; // local variable (main)
	// double a = 3.14; 
	// ���� scope������ �̸��� ������ Ÿ���� �޶� syntax error
	cout << "main: " << a << endl;
	/* block */
	{
		int a = 5; // local variable (block)
		cout << "block: " << a << endl; // call local variable (block)
		cout << "global: " << ::a << endl; // call global variable
	}
	system("pause");
}