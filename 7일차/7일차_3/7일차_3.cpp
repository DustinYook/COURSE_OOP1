// 프로그램 목적: for문에 대한 실습
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

	// 조건 불만족시 한번도 수행 안할 수도
	for (int i = 20; i <= 2; i -= 2)
		cout << i << " ";
	cout << endl;

	for (int i = 0, j = 0; i <= 10; i = i + 3, j++) // 조건부분은 콤마 사용불가!!
		cout << i << " " << j << endl;
	// 0 0 -> 3 1 -> 6 2 -> 9 3

	/* 1부터 10까지 합을 구하는 프로그램 */
	// 1) 첫번째 방법
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += i; // sum = sum + i; 
	cout << "1부터 10까지 합은 " << sum << "입니다." << endl;
	//
	// 2) 두번째 방법
	int sum1 = 0;
	for (int i = 0; i < 10; i++)
		sum1 += (i + 1); // sum1 = i + 1; 도 같은 결과 // sum1 = sum1 + (i + 1);
	cout << "1부터 10까지 합은 " << sum << "입니다." << endl;
	
	/* 홀수의 합과 짝수의 합 */
	// 1) 첫번째 방법
	int oddSum = 0;
	for (int i = 1; i <= 10; i += 2)
		oddSum += i;
	cout << "1부터 10까지 홀수의 합은 " << oddSum << "입니다." << endl;
	int evenSum = 0;
	for (int i = 0; i <= 10; i += 2)
		evenSum += i;
	cout << "1부터 10까지 짝수의 합은 " << evenSum << "입니다.\n" << endl;
	//
	// 2) 두번째 방법
	int sum3 = 0, sum4 = 0;
	for (int i = 0; i <= 10; i++)
	{
		if (i % 2 == 1)
			sum3 += i;
		else
			sum4 += i;
	}
	cout << "1부터 10까지 홀수의 합은 " << sum3 << "입니다." << endl;
	cout << "1부터 10까지 짝수의 합은 " << sum4 << "입니다.\n" << endl;

	/* 2의 배수와 3의 배수의 합 */
	int twoSum = 0, threeSum = 0, twoThreeSum = 0;
	for (int i = 0; i <= 10; i++)
	{
		if (i % 2 == 0 && i % 3 == 0) // 또는 if (i % 6 == 0)
		{
			twoSum += i;
			threeSum += i;
		}
		else if (i % 2 == 0)
			twoSum += i;
		else if (i % 3 == 0)
			threeSum += i;
	}
	cout << "2의 배수의 합 : " << twoSum << endl;
	cout << "3의 배수의 합 : " << threeSum << endl;

	system("pause");
}