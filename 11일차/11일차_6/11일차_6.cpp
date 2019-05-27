// 프로그램 목적: 피보나치 수열의 재귀호출과 반복문을 통한 구현 (작업중!)
#include <iostream>
#include <cstddef> // size_t 정의
using namespace std;

size_t recurFibo(size_t);
size_t iterFibo(size_t);

int main()
{
	size_t userInput;
	cout << "Enter number : ";
	cin >> userInput;
	cout << "fibo(" << userInput << ") : " << recurFibo(userInput) << endl;
	cout << "fibo(" << userInput << ") : " << iterFibo(userInput) << endl;
	system("pause");
}

/* recursion */
size_t recurFibo(size_t num)
{
	if ((num == 0) || (num == 1))
		return num;
	else
		return recurFibo(num - 1) + recurFibo(num - 2);
}
/* iteration */
size_t iterFibo(size_t num)
{
	size_t finResult;
	for (size_t i = 0; i <= num; i++)
	{
		static size_t tmpResult = 0;
		if ((num == 0) || (num == 1))
		{
			tmpResult += num;
			finResult = tmpResult;
			break;
		}
		else
		{

		}
	}
	return finResult
}