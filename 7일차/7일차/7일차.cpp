// ���α׷� ����: list initializer�� ���� �ǽ�
#include <iostream>
using namespace std;

int main()
{
	/* ������ �ʱ�ȭ��� */
	int x = 3.14; // warning�� �߻�
	cout << x << endl << endl;
	// 3�� ���: �Ҽ��� ���ϴ� truncate -> syntax error ����

	/* list initializer�� �̿��� �ʱ�ȭ ��� */
	int y = { 3.14 }; // syntax error �߻�
	int z{ 3.14 }; // syntax error �߻�
	cout << y << endl;
	cout << z << endl;
	// �����Ϸ��� ���� error detection�� ������ ����

	/* list initializer�� ����� */
	// 1) ù��° ���: �迭�ʱ�ȭ�� ����� ����
	double a = { 3.14 };
	cout << a << endl;
	// 2) �ι�° ���: �����ڿ� ����� ����
	double b{ 3.14 };
	cout << b << endl << endl;

	system("pause");
}