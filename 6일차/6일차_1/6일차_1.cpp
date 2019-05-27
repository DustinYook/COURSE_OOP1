// 프로그램 설명: arithmetic overflow에 대한 실습
#include <climits> // INT_MAX, INT_MIN이 정의
#include <cfloat> // FLT_MAX, FLT_MIN이 정의
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//int u; // initialize되지 않아 garbage value 나옴
	//cout << u << endl;

	/* <climits>의 멤버사용 */
	int i1 = INT_MAX; // 약 21억
	int i2 = INT_MIN; // 약 -21억
	cout << showpos; // show positive sign_stream manipulator
	cout << i1 << endl;
	cout << i2 << endl;
	cout << ++i1 << endl; // Arithmetic Overflow (약 -21억)
	cout << --i2 << endl; // Arithmetic Overflow (약 21억)

	/* <cfloat>의 멤버사용 */
	float f1 = FLT_MAX; // 무지 큰 수 
	float f2 = FLT_MIN; // 0
	cout << fixed; // fixed point_stream manipulator
	cout << f1 << endl;
	cout << f2 << endl;

	system("pause");
}