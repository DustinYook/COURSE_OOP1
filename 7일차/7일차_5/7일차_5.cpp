// ���α׷� ����: ���ǥ������ ������ ���� �ǽ� (���������α׷�)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "������ ��� ���α׷�\n" << endl;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int result = i * j;
			cout << setw(2) << i << setw(2) << " X" << setw(2) << j;
			cout << setw(3) << " = " << setw(2) << result << endl;
		} cout << endl;
	}
	system("pause");
}