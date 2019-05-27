// 프로그램 목적: function template에 대한 실습
#include <iostream>
using namespace std;

/* function template */
template <typename T>
T max(T x, T y, T z)
{
	T maximum = x;
	if (y > maximum)
		maximum = y;
	if (z > maximum)
		maximum = z;
	return maximum;
}

int main()
{
	cout << max(1, 2, 3) << endl; // T가 int로 대체
	cout << max(1.1, 2.2, 3.3) << endl; // T가 double로 대체
	cout << max('a', 'b', 'c') << endl; // T가 char로 대체
    // function template의 장점: 코드를 효율적으로 작성할 수 있음 
	// -> 다른 타입에 대한 같은 처리의 경우 매우 유용 (오버로딩한 효과)
	system("pause");
}