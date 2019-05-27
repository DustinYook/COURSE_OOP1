// ���α׷� ����: ���۷����� �����ϴ� �Լ��� ���� �ǽ� 
#include <iostream>
using namespace std;

int& abc() // int���� ���۷����� ����
{
	static int a = 5; // history-sensitive�ϰ� �Ϸ��� static�� ��� ��
	return a; // int�� ��ü c��� ������ ����
}

int main()
{
	/* ���۷��� ��ȯ�Լ� */
	int c = abc();
	cout << c << endl;

	abc() = 3; // ���۷��� ��ȯ�Լ��� �������� lvalue�� �� �� ����
	cout << abc() << endl; // �����: 5 (3�� �ƴ�)

	/* ���۷����� ���� ���ǻ��� */
	// int& ref; // ���۷����� ����� ���ÿ� �ʱ�ȭ �Ǿ�� �� (syntax error)
	int a = 10;
	int& aRef = a;
	int b = 20;
	aRef = b; // a�� b, �׸��� aRef�� alias�� ��
	cout << aRef << endl;
	cout << a << endl;

	system("pause");
}