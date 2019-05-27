// ���α׷� ����: AND, OR �������� ���ʿ� �ܶ�ȸ���򰡿� ���� �ǽ�
#include <iostream>
using namespace std;

int main()
{
	/* �������� &&(AND) ���� */
	{
		int a = 1, b = 2, c = 3, d = 4;
		if (a < b && c > d) // control stmt�� false 
			cout << "AAA" << endl; // ��¾���
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
		cout << "d = " << d << endl;
	} cout << endl;

	/* �������� ||(OR) ���� */
	{
		int a = 1, b = 2, c = 3, d = 4;
		if (a < b || c > d) // control stmt�� true 
			cout << "BBB" << endl; // ���
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
		cout << "d = " << d << endl;
	} cout << endl;

	/* &&(AND)�������� �ܶ�ȸ���� */
	{
		int a = 1, b = 2, c = 3, d = 4;
		if ((a++ > b++) && (c++ > d++)) // ���� false�� ���
			cout << "AAA" << endl; // �������
		// �����ڿ켱����: postfix_++ > '>' > &&
		// ���� 31�� ��: a = a; -> b = b; -> c = c; -> d = d;
		// -> a > b�� ���� false -> a = a + 1; -> b = b + 1; -> ������ 
		// -> ���� 32������ �̵� -> ��� 
		cout << "a = " << a << endl; // �����: 2
		cout << "b = " << b << endl; // �����: 3
		cout << "c = " << c << endl; // �����: 3
		cout << "d = " << d << endl; // �����: 4
	} cout << endl;
	// AND: ���� false -> �� �� X (short-circuit evaluation�� ����)
	// ����) bitwise operator &�� short-circuit evaluation�� �������� ����

	/* ||(OR)�������� �ܶ�ȸ���� */
	{
		int a = 1, b = 2, c = 3, d = 4;
		if ((a++ < b++) || (c++ > d++)) // ���� true�� ���
			cout << "AAA" << endl; // ������
		// �����ڿ켱����: postfix_++ > '<' > ||
		// ���� 48�� ��: a = a; -> b = b; -> c = c; -> d = d;
		// -> a < b�� ���� true -> a = a + 1; -> b = b + 1; -> ������ 
		// -> ���� 32������ �̵� -> ��� 
		cout << "a = " << a << endl; // �����: 2
		cout << "b = " << b << endl; // �����: 3
		cout << "c = " << c << endl; // �����: 3
		cout << "d = " << d << endl; // �����: 4
	} cout << endl;
	// OR: ���� true -> �� �� X (short-circuit evaluation�� ����)
	// ����) bitwise operator |�� short-circuit evaluation�� �������� ����

	/* ������� */
	// AND: �� ���� -> �� �� X / OR: �� �� -> �� �� X
	// & �Ǵ� |��, ��, ��Ʈ�����ڴ� �ܶ�ȸ���� �������� ����
	
	system("pause");
}