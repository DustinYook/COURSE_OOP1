// ���α׷� ����: �迭�� ���ǻ��׿� ���� �ǽ�
#include <iostream>
using namespace std;

int main(void)
{
	/* �ε������� �ʰ��Ͽ� ������ ��� */
	{
		int a[3];
		a[1] = 1;
		a[2] = 2;
		a[3] = 3;
		a[4] = 4; // index range ����� ���� �� ���� 
		cout << a[4] << endl; // runtime checking error �߻� (�����ϸ� ���ư�)
	}

	/* �ε������� �ʰ��Ͽ� �����ϴ� ��� */
	{
		int a[5];
		for (size_t i = 0; i < 6; i++) // index range �ʰ��Ͽ� ���� (sntax error X)
			cout << a[i] << " "; // Ű���� ������ ���� ��ܿ� (hexa editor�� ���� ���� ��ŷ����)
		cout << endl;
	}
	// C++���� �迭�� �� �� �׻� �����ؾ� ��! 
	system("pause");
}