#include <iostream>
using namespace std;

int main()
{
	/* while�� */
	int product = 3;
	int cnt = 0;
	while (product <= 100)
	{
		product = 3 * product;
		cout << "product #" << (cnt+1) << " : " << product << endl; // ���� 4�� ���� 5��°�� ����
		cnt++;
	}
	cout << "product: " << product << endl;
	system("pause");
}