// ���α׷� ����: �հݰ� ���հ� ���θ� �Է¹ް� ���翡 ���� �򰡳����� ���α׷�
#include <iostream>
using namespace std;
#define MAX 10

int main()
{
	unsigned int cntPass = 0; // the number of passes
	unsigned int cntFail = 0; // the number of fails
	unsigned int result;

	cout << "[notice] PASS: 1, FAIL: 2" << endl;
	for (int i = 0; i < MAX; i++)
	{
		cout << "Enter result #" << (i + 1) << " : ";
		cin >> result;
		if (result == 1)
			cntPass++;
		else if (result == 2)
			cntFail++;
		else
		{
			cout << "������ ������ �߸��Ǿ����ϴ�.\a" << endl;
			continue; // �ش� ī��Ʈ ����
		}
	}
	cout << "PASS: " << cntPass << endl;
	cout << "FAIL: " << cntFail << endl;
	if (cntPass >= 8)
		cout << "Bonus to instructor!" << endl;
	system("pause");
}