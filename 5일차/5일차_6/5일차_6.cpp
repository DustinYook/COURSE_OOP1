// ���α׷� ����: null statement, ���� if-else���� ���� �ǽ�
#include <iostream>
using namespace std;

int main()
{
	/* input prompt */
	cout << "������ ������ �Է����ֽʽÿ�: ";
	int x;
	cin >> x;

	/* null statement */
	if (x > 60); // �� �����ϳ��� ��������
	{ // �׳� ���, ���� if������ ���� -> �������� �߻�
		cout << "�� ������ ���ǿ� ������� ���" << endl;
	}

	/* ���� if-else�� */
	if (x > 50)
		cout << "50���� ũ��" << endl;
	else
		if (x > 40) // �̷������� �ص� ����� ����
			cout << "50���� �۰ų� ����, 40���� ũ��." << endl;
		else
			cout << "40���� �۴�." << endl;
	cout << endl;

	system("pause");
}