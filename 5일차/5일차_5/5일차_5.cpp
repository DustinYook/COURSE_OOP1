// ���α׷� ����: dangling else���� ���� �ǽ�
#include <iostream>
using namespace std;

int main()
{
	int x = 6;
	int y = 6;

	/* dangling else�� */
	if (x > 5)
		if (y > 5)
			cout << "x and y are > 5" << endl;
		else
			cout << "x is <= 5" << endl;
	
	/* ������ �����Ϸ��� ������ �� */
	if (x > 5)
	{
		if (y > 5)
			cout << "x and y are > 5" << endl;
		else
			cout << "x is <= 5" << endl;
	}

	/* ���� �ۼ��ڰ� �ǵ��� �� */
	if (x > 5)
	{ // block�� ���� explicit�ϰ� scope�� ǥ��
		if (y > 5)
			cout << "x and y are > 5" << endl;
	}
	else
		cout << " x is <= 5" << endl;
	system("pause");
}