// ���α׷� ����: �迭�� ���� �ڵ���¹�� �ǽ�
#include <iostream>
#include <array> // array template class
#include <cstddef> // size_t
using namespace std;
enum Size { ONE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5 }; // Named Constant (enum)

int main()
{
	/* �ڵ���¹�� */
	{
		array<size_t, FIVE> arry = { 1, 2, 3, 4, 5 };
		// automatic array�� �ʱ�ȭ ���ϸ� �����Ⱚ ����
		// 1) C��� ���
		for (size_t i = 0; i < FIVE; i++)
			cout << arry[i] << "  ";
		cout << endl << endl;
		//
		// 2) C++11 ��� (template class �̿�)
		for (size_t i = 0; i < arry.size(); i++)
			cout << arry.at(i) << "  ";
		cout << endl << endl;
		//
		// 3) Range-based for�� ��� (���� for��)
		// for(����Ÿ�� �����̸� : ���迭)
		for (size_t buff : arry)
			cout << buff << "  ";
		cout << endl << endl;
		//
		// 4) for each (���Ź��) : ������� ����
		// for each (int n in item)
		// {
		//	cout << n << endl;
		// }
	}

	/* Range-Based for�� ��Ŀ� ���� Ž�� */
	{
		array<size_t, FOUR> arr = { 1, 2, 3, 4 };
		//
		// 1) ���۷����� ���� ���� ��� (READ_MODE)
		for (size_t buff : arr)
			buff += 5;
		// <����> ������ ���鿡 5�� ��������? 
		for (size_t buff : arr)
			cout << buff << "  ";
		cout << endl << endl;
		// <�亯> NO (copy�������� ������ ������ �ȹٲ�)
		// ��, Call-By-Value�� ȣ����
		//
		// 2) ���۷����� ���� ��� (WRITE_MODE)
		for (size_t& buff : arr) // JAVA�� �Ұ� (for each�� READ_ONLY)
			buff += 5;
		// <����> ������ ���鿡 5�� ��������?
		for (size_t buff : arr)
			cout << buff << "  ";
		cout << endl << endl;
		// <�亯> YES (������ ����߱� ������ ������ �ٲ�)
		// ��, Call-By-Reference�� ȣ����
		//
		// 3) CONST�� ����ϴ� ��� (READ_ONLY_MODE)
		for (const int& buff : arr) 
			cout << buff << "  "; // cout << (buff += 5) << "  ";�� ���� syntax error
		cout << endl << endl;
		// const�� �����Ұ�, ������ �������� -> const���� �����Ұ�
	}

	/* Range-Based for���� �Ѱ��� */
	{
		array<size_t, THREE> ar = { 1, 2, 3 };
		for (size_t buff : ar) // JAVA�� for each�� ����
			cout << buff << "  ";
		cout << endl << endl;
		// <�Ѱ�> ÷�� ��� ���� �ʾ� ���ϴ� ��ġ�� ������ ����� (������ ��)
		// <���> ��� �뵵(READ_ONLY)�δ� ������, ���� ������ ����� ÷����� �� ����
	}

	system("pause");
}