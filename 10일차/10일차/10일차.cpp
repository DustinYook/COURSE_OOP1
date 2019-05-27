// ���α׷� ����: C++11���� ���� random number�� ���� �ǽ� (������ rand�Լ����� ����)
#include <ctime>
#include <random> // [default_random_engine]�� [uniform_int_distribution]�� ����
#include <iomanip>
#include <iostream>
using namespace std;
typedef unsigned int UINT;

int main()
{
	// 1) default_random_engine: ������ �����ϴ� ����
	default_random_engine engine(static_cast<UINT>(time(NULL))); // �����ڸ� ���� ��ü����

	// 2) uniform_int_distribution<T> objName(start, end): ������ start���� end�� ����
	uniform_int_distribution<UINT> randomInt(1, 6); // class template�� ���� 1���� 6������ ��������
	// �ο�����_randomInt�� ��ü�� �̸�, randomInt(1, 6)�� ������ ȣ��
	// ����_C++�� template�� JAVA�� generic�� ���� 
	for (size_t i = 1; i <= 9; i++)
	{
		cout << setw(3) << left << randomInt(engine);
		if (i % 3 == 0)
			cout << endl;
	}
	system("pause");
}