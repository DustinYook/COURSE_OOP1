// ���α׷� ����: built-in array�� array class template�� ���� ���ʽǽ�
#include <iostream>
#include <cstddef> // size_t ����
#include <array> // array class template ����
using namespace std;

/* Named Constant */
#define MAX 10 // ��ũ�λ�� ���� (�����ݷ� X)
enum Number { ONE = 1, TWO = 2 }; // ����ü ����
const int NUM = 30; // const ���
// ���� Named Constant�� ��� �迭�� ũ��� ��밡��!

int main()
{
	/* �迭�� ũ�Ⱑ ���� */
	{
		int x = 10; // ����(variable)
		// int b[x]; // �迭�� ũ��� ����� ������ �� �� ����!
		// array<int, x> b; // array class template�� ��������
		// �� �迭�� ����� ũ�Ⱑ �������� �� (Named Constant �Ǵ� Constant�� ���)
		// ��, �߰��� ���� ������ �� ����
	}

	/* built-in array (���� C ���) */
	{
		// �ʱ�ȭ ���� ���: �����Ⱚ ���
		int a[5]; // stack ������ ���� (�ʱ�ȭ ���ϸ� garbage value ����)
	    // <����> ���������� �ʱ�ȭ���� ����ϸ� ������(�����Ⱚ ����)
		for (size_t i = 0; i < 5; i++)
			cout << a[i] << " "; // �����Ⱚ ���
		cout << endl;
		
		// �⺻�ʱ�ȭ��� #1: ���Һ��� ������ �ʱ�ȭ
		a[0] = 1; 
		a[1] = 2;
		a[2] = 3;
		a[3] = 4;
		a[4] = 5;
		for (size_t i = 0; i < 5; i++)
			cout << a[i] << " "; // �ʱ�ȭ �� ������ ��� 
		cout << endl;

		// �⺻�ʱ�ȭ��� #2: �ݺ����� �̿��Ͽ� �ʱ�ȭ
		for (size_t i = 0; i < sizeof(a)/sizeof(a[0]); i++) 
		{ // <����> sizeof(a[0])�� �迭�� ����Ÿ��
		  // built-in array���� ����Լ� ����! (array class template�� ������)
			a[i] = i * 10; // �ʱ�ȭ
			cout << a[i] << " ";
		} cout << endl;
	}

	/* array class template (C++11 ���) */
	{
		array<int, MAX> arry; // arry�� ��ü (��, ����Լ� ����)
		for (size_t i = 0; i < arry.size(); i++) // size()�� �迭ũ�� ����
		{
			arry.at(i) = i * 100; // at(i)�� i��° ���Ҹ� �ǹ�
			cout << arry.at(i) << " ";
		} cout << endl;
		cout << "Size of array : " << arry.size() << endl; 
	}
	system("pause");
}