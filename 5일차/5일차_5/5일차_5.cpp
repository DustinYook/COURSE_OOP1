// 프로그램 설명: dangling else문에 대한 실습
#include <iostream>
using namespace std;

int main()
{
	int x = 6;
	int y = 6;

	/* dangling else문 */
	if (x > 5)
		if (y > 5)
			cout << "x and y are > 5" << endl;
		else
			cout << "x is <= 5" << endl;
	
	/* 실제로 컴파일러가 이해한 것 */
	if (x > 5)
	{
		if (y > 5)
			cout << "x and y are > 5" << endl;
		else
			cout << "x is <= 5" << endl;
	}

	/* 원래 작성자가 의도한 것 */
	if (x > 5)
	{ // block을 통해 explicit하게 scope를 표시
		if (y > 5)
			cout << "x and y are > 5" << endl;
	}
	else
		cout << " x is <= 5" << endl;
	system("pause");
}