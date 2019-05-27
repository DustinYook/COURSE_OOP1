// ���α׷� ����: ���Ϳ� �迭�� ��
#include <iostream>
#include <vector> // vector class template
#include <array> // array class template
#include <stdexcept> // out_of_range
using namespace std;
typedef unsigned int UINT;

int main()
{
	// ���Ϳ� �迭�� ������: �����ڷ��� ���� (a set of homogeneous data type)
	vector<UINT> v1(3); 
	// vector<UINT> v1(3) = { 1, 2, 3 }; // ����: list initialization ������ 
	array<UINT,3> a1 = { 1, 2, 3 };      // �迭: list initialization ����

	/* ������ ���� ���ٹ�� (�迭�� ����) */
	v1.at(0) = 1000; // 1) at()�Լ� �̿�
	v1[1] = 2000;    // 2) index�� �̿�
	for (const auto& element : v1)
		cout << element << "  ";
	cout << endl;

	// 1) vector class template: ����ó������(out_of_range)
	try
	{ // range�� ����� ��½õ�
		for (size_t i = 0; i < v1.size() + 1; i++)
			cout << v1.at(i) << "  ";
		cout << endl;
		cout << "�������" << endl;
	}
	catch (out_of_range ex)
	{
		cout << ex.what() << endl;
		cout << "���ܹ߻�" << endl;
	}

	// 2) array class template: ����ó������(out_of_range)
	try // ���ܰ� �߻��� ������ �ִ� ���
	{ // range�� ����� ��½õ�
		for (size_t i = 0; i < a1.size() + 1; i++)
			cout << a1.at(i) << "  "; 
		// a1.at(a1.size())�� �������� �ʴ� �������� -> Exception
		cout << endl;
		cout << "�������" << endl; // ���ܹ߻��� ��¾���
	}
	catch (out_of_range ex) // OS�ʿ��� ���ܸ� ����� -> ���ܹ߻��� control �Ѿ��
	{ // exception: Ư�� ������ ��� �ý����۵��� ���ߴ� ��
		cout << ex.what() << endl; // �������� ���
		cout << "���ܹ߻�" << endl;
	}

	// 3) built-in array: ����ó�� �Ұ�
	UINT a2[] = { 1, 2, 3 };
	for (size_t i = 0; i < size(a2) + 1; i++)
		cout << a2[i] << "  ";
	cout << endl;

	system("pause");
}