// ���α׷� ����: arithmetic overflow�� ���� �ǽ�
#include <climits> // INT_MAX, INT_MIN�� ����
#include <cfloat> // FLT_MAX, FLT_MIN�� ����
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//int u; // initialize���� �ʾ� garbage value ����
	//cout << u << endl;

	/* <climits>�� ������ */
	int i1 = INT_MAX; // �� 21��
	int i2 = INT_MIN; // �� -21��
	cout << showpos; // show positive sign_stream manipulator
	cout << i1 << endl;
	cout << i2 << endl;
	cout << ++i1 << endl; // Arithmetic Overflow (�� -21��)
	cout << --i2 << endl; // Arithmetic Overflow (�� 21��)

	/* <cfloat>�� ������ */
	float f1 = FLT_MAX; // ���� ū �� 
	float f2 = FLT_MIN; // 0
	cout << fixed; // fixed point_stream manipulator
	cout << f1 << endl;
	cout << f2 << endl;

	system("pause");
}