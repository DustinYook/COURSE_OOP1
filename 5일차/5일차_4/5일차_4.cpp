// 프로그램 설명: if-else문(double selection statement)과 조건삼항연산자
#include <iostream>
using namespace std;

int main()
{
	cout << "크기를 비교할 두 정수를 입력해주십시오: ";
	int x, y;
	cin >> x >> y;
	cout << endl;

	/* 조건삼항연산자 */
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	cout << x << "와 " << y << " 중에 더 큰 값은 " << max << "입니다." << endl;
	cout << x << "와 " << y << " 중에 더 작은 값은 " << min << "입니다.\n" << endl;

	/* if-else문 */
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
	cout << x << "와 " << y << " 중에 더 큰 값은 " << max << "입니다." << endl;
	cout << x << "와 " << y << " 중에 더 작은 값은 " << min << "입니다.\n" << endl;
	// double selection statement의 경우 ternary operator와 일대일변환이 가능함	

	system("pause");
}