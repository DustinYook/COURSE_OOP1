// ���α׷� ����: �迭�� �̿��� ���������׷��� �ۼ����α׷�
#include <iostream>
#include <array> // array class template - �� ����
#include <cstddef> // size_t ����
using namespace std;
const int SIZE = 11; // Named Constant

int main()
{
	array<size_t, SIZE> arry = { 1, 2, 3, 4 ,5 ,6, 5, 4, 3, 2, 1 }; // �迭 �ʱ�ȭ
	for (size_t i = 0; i < arry.size(); i++) // �迭 ũ�⸸ŭ �ݺ�
	{
		/* �ڷḦ �׷���ȭ �ϴ� ó�� */ // �� �߿�!!
		for (size_t j = 0; j < arry.at(i) ; j++) // �迭��.at(i)�� i��° �ε����� ����� ����
			cout << " * "; // '��'�� ���� ����Ű ������ Ư������ �Է°���
		cout << endl;
	} cout << endl;
	// �߿�) �迭�� ÷�ڴ� ������ �ް��� �ǹ�, �迭�� ���ҳ����� �����ο��� �ǹ�!
	system("pause");
}
