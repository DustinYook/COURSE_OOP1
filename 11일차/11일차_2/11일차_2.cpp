// 프로그램 목적: 배열의 주의사항에 대한 실습
#include <iostream>
using namespace std;

int main(void)
{
	/* 인덱스범위 초과하여 배정한 경우 */
	{
		int a[3];
		a[1] = 1;
		a[2] = 2;
		a[3] = 3;
		a[4] = 4; // index range 벗어나는 곳에 값 배정 
		cout << a[4] << endl; // runtime checking error 발생 (무시하면 돌아감)
	}

	/* 인덱스범위 초과하여 접근하는 경우 */
	{
		int a[5];
		for (size_t i = 0; i < 6; i++) // index range 초과하여 찍음 (sntax error X)
			cout << a[i] << " "; // 키보드 버퍼의 값을 당겨옴 (hexa editor를 통해 보아 해킹가능)
		cout << endl;
	}
	// C++에서 배열을 쓸 때 항상 조심해야 함! 
	system("pause");
}