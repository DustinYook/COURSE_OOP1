// ���α׷� ����: for���� ���� �ǽ�
#include <iostream>
using namespace std;

int main(void)
{
	for (int i = 0; i < 10; i++)
		cout << i << endl;

	for (int i = 0; i < 10; i++)
		cout << i << " ";
	cout << endl;

	for (int i = 1; i <= 10; i++)
		cout << i << endl;

	for (int i = 20; i >= 2; i -= 2)
		cout << i << " ";
	cout << endl;

	// ���� �Ҹ����� �ѹ��� ���� ���� ����
	for (int i = 20; i <= 2; i -= 2)
		cout << i << " ";
	cout << endl;

	for (int i = 0, j = 0; i <= 10; i = i + 3, j++) // ���Ǻκ��� �޸� ���Ұ�!!
		cout << i << " " << j << endl;
	// 0 0 -> 3 1 -> 6 2 -> 9 3

	/* 1���� 10���� ���� ���ϴ� ���α׷� */
	// 1) ù��° ���
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += i; // sum = sum + i; 
	cout << "1���� 10���� ���� " << sum << "�Դϴ�." << endl;
	//
	// 2) �ι�° ���
	int sum1 = 0;
	for (int i = 0; i < 10; i++)
		sum1 += (i + 1); // sum1 = i + 1; �� ���� ��� // sum1 = sum1 + (i + 1);
	cout << "1���� 10���� ���� " << sum << "�Դϴ�." << endl;
	
	/* Ȧ���� �հ� ¦���� �� */
	// 1) ù��° ���
	int oddSum = 0;
	for (int i = 1; i <= 10; i += 2)
		oddSum += i;
	cout << "1���� 10���� Ȧ���� ���� " << oddSum << "�Դϴ�." << endl;
	int evenSum = 0;
	for (int i = 0; i <= 10; i += 2)
		evenSum += i;
	cout << "1���� 10���� ¦���� ���� " << evenSum << "�Դϴ�.\n" << endl;
	//
	// 2) �ι�° ���
	int sum3 = 0, sum4 = 0;
	for (int i = 0; i <= 10; i++)
	{
		if (i % 2 == 1)
			sum3 += i;
		else
			sum4 += i;
	}
	cout << "1���� 10���� Ȧ���� ���� " << sum3 << "�Դϴ�." << endl;
	cout << "1���� 10���� ¦���� ���� " << sum4 << "�Դϴ�.\n" << endl;

	/* 2�� ����� 3�� ����� �� */
	int twoSum = 0, threeSum = 0, twoThreeSum = 0;
	for (int i = 0; i <= 10; i++)
	{
		if (i % 2 == 0 && i % 3 == 0) // �Ǵ� if (i % 6 == 0)
		{
			twoSum += i;
			threeSum += i;
		}
		else if (i % 2 == 0)
			twoSum += i;
		else if (i % 3 == 0)
			threeSum += i;
	}
	cout << "2�� ����� �� : " << twoSum << endl;
	cout << "3�� ����� �� : " << threeSum << endl;

	system("pause");
}