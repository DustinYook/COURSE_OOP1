// 프로그램 설명: null statement, 다중 if-else문에 대한 실습
#include <iostream>
using namespace std;

int main()
{
	/* input prompt */
	cout << "임의의 정수를 입력해주십시오: ";
	int x;
	cin >> x;

	/* null statement */
	if (x > 60); // 이 문장하나로 문장종료
	{ // 그냥 블록, 위의 if문과는 별개 -> 논리적에러 발생
		cout << "이 문장은 조건에 상관없이 출력" << endl;
	}

	/* 다중 if-else문 */
	if (x > 50)
		cout << "50보다 크다" << endl;
	else
		if (x > 40) // 이런식으로 해도 상관은 없음
			cout << "50보다 작거나 같고, 40보다 크다." << endl;
		else
			cout << "40보다 작다." << endl;
	cout << endl;

	system("pause");
}