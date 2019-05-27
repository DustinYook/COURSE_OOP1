// ���α׷� ����: function template�� ���� �ǽ�
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
	cout << max(1, 2, 3) << endl; // T�� int�� ��ü
	cout << max(1.1, 2.2, 3.3) << endl; // T�� double�� ��ü
	cout << max('a', 'b', 'c') << endl; // T�� char�� ��ü
    // function template�� ����: �ڵ带 ȿ�������� �ۼ��� �� ���� 
	// -> �ٸ� Ÿ�Կ� ���� ���� ó���� ��� �ſ� ���� (�����ε��� ȿ��)
	system("pause");
}