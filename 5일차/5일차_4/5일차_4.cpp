// ���α׷� ����: if-else��(double selection statement)�� ���ǻ��׿�����
#include <iostream>
using namespace std;

int main()
{
	cout << "ũ�⸦ ���� �� ������ �Է����ֽʽÿ�: ";
	int x, y;
	cin >> x >> y;
	cout << endl;

	/* ���ǻ��׿����� */
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	cout << x << "�� " << y << " �߿� �� ū ���� " << max << "�Դϴ�." << endl;
	cout << x << "�� " << y << " �߿� �� ���� ���� " << min << "�Դϴ�.\n" << endl;

	/* if-else�� */
	if (x > y)
	{
		max = x;
		min = y;
	}
	else
	{
		max = y;
		min = x;
	}
	cout << x << "�� " << y << " �߿� �� ū ���� " << max << "�Դϴ�." << endl;
	cout << x << "�� " << y << " �߿� �� ���� ���� " << min << "�Դϴ�.\n" << endl;
	// double selection statement�� ��� ternary operator�� �ϴ��Ϻ�ȯ�� ������	

	system("pause");
}