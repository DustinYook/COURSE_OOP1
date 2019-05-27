// ���α׷� ����: Scope�� ���� �ǽ�
#include <iostream>
using namespace std;
int x = 1; // global variable

int main()
{ // function scope start 
	cout << "This is global variable x : " << x << endl;

	/* Function Scope */
	int x = 2;
	cout << "This is a variable of main x : " << x << endl;

	// scope resolution operator�� ���� �������� ���ٰ���
	cout << "This is global variable x : " << ::x << endl; 

	/* Block Scope */
	{ // block scope start
		int x = 3; 
		cout << "This is a variable of block x : " << x << endl;

		// scope resolution operator�� ���� �������� ���ٰ���
		cout << "This is global variable x : " << ::x << endl;
	} // block scope end

	cout << "This is a variable of main x : " << x << endl;

	system("pause");
} // function scope end