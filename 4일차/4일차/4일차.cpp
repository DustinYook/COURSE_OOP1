// ���α׷� ����: �����ڿ� ���� �⺻���� ����
#include <iostream>
using namespace std;

int main()
{
	/* Assignment Expression */
	int num1, num2;
	num1 = num2 = 0; // num2 = 0; -> num1 = num2; 
	// ����) ����չ�Ģ(�򰡹���: ������->����)
	// '='�� ���׿������̸� �����
	// 2^3^4 ���� ����չ�Ģ�� ����: 3^4 -> 2^81
	// num1 = num1 + num2 + num1;�� �����

	cout << "���� 2�� �Է�: "; // prompt: user input directive
	cin >> num1 >> num2;

	/* Equality Operator */
	if (num1 == num2)
		cout << num1 << " == " << num2 << endl;
	else
		cout << num1 << " != " << num2 << endl;
	/* Relational Operator */
	cout << num1 << ((num1 > num2) ? " > " : " <= ") << num2 << endl;
	// Equality�� Relational�� return value�� boolean�̴�.
	
	/* Operator Precedence */
	cout << (num1 > num2 == true) << endl; // �켱����: Relational > Equality 
	// Expression Evaluation
	// 1) ������ �켱���� Relational�� �� ����: num1 > num2 �� -> true/false
	// 2) Equality ����� ��:  true/false == true -> true/false

	system("pause");
}