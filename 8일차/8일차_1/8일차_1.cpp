// 프로그램 목적: 헷갈렸던 시험문제에 대한 실습
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/* dangling else문 */
	{
		int x = 4;
		int y = 6;
		if (x > 5) // 1번
			if (y > 5) // 2번
				cout << "x and y are > 5" << endl;
		else // 보기에는 1번과 match되는 것 같지만 실제로는 2번과 match됨
			cout << "x is <= 5" << endl;
		cout << "x and y are < 5" << endl; // 이 문장만 출력
		// dangling else문은 if와 else의 개수가 다를 때 
		// else는 가장 가까이 있는 if와 match되는 것을 말한다.
	} cout << endl;
	
	/* for문의 실행순서 */
	{
		for (int i = 0; i < 10; i++)
		{
			for (int k = 0; k < i; k++) 
				cout << "  ";
			// 주의) k <= i로 해서 틀림: i = 0일 때 아래 실행문을 한 번 실행
			for (int j = 0; j <= 9 - i; j++)
				cout << " " << j;
			for (int k = 8 - i; k >= 0; k--)
				cout << " " << k;
			cout << endl;
		}
		// for문의 실행순서: 초기화 -> [조건확인 -> true인 경우: 실행문 수행 -> 증감연산] 
		//                                     -> false인 경우: 루프탈출
	} cout << endl;
	
	{
		double d = 123.456789;
		cout << "12345678901234567890" << endl;
		cout << setw(10) << setprecision(2) << fixed << d << endl; // setw()가 sticky한지가 헷갈렸음
		cout << setprecision(3) << fixed << d << endl; // 이 결과로 보아 setw()는 sticky하지 않음을 알 수 있음
		// 참고) boolalpha는 sticky함
	} cout << endl;

	system("pause");
}