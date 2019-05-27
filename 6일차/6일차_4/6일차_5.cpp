// 프로그램 설명: 합격과 불합격 여부를 입력받고 강사에 대한 평가내리는 프로그램
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
			cout << "숫자의 형식이 잘못되었습니다.\a" << endl;
			continue; // 해당 카운트 제낌
		}
	}
	cout << "PASS: " << cntPass << endl;
	cout << "FAIL: " << cntFail << endl;
	if (cntPass >= 8)
		cout << "Bonus to instructor!" << endl;
	system("pause");
}