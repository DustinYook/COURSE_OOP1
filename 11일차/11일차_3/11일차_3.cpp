// ���α׷� ����: �迭�� �ʱ�ȭ�� �ݺ����� �迭�� ���� �ǽ�
#include <iostream>
#include <array> // array class template ����
#include <cstddef> // size_t ����
using namespace std;

const int X_NUM = 1000; // 10�� Literal, x�� Named Constant
// X_NUM = 2000; // ����� ���尪 ����Ұ�!
// ����� ��� �빮�ڷ� ���� ���� ���α׷��ӵ��� �Ϲ��� ��Ģ
// �ǹ̸� �����ؾ� �� ���� ����(_)�� ���

int main()
{
	/* �迭 �ʱ�ȭ */
	{
		// <����> �迭�� �ݵ�� ũ�Ⱑ �������� ��!
		{
			// �� ����� �Ұ�! - ��������
			// int a[]; 
			// a = { 1, 2, 3, 4, 5 }; 
		}

		/* list initialization */
		{
			int a[5] = { 1, 2, 3, 4, 5 }; // ������ ������ ���� ���
			// int b[5] = { 1, 2, 3, 4, 5, 6 }; // �迭ũ�Ⱑ 5�� �����Ǿ� �־� ��������

			// <����> �ʱ�ȭ �ȵ� ���ҿ� ������ ���� �ƴ� 0(�ʱ갪)�� ��
			int c[5] = { 1, 2, 3, 4 };
			for (size_t i = 0; i < 5; i++)
				cout << c[i] << " ";
			cout << endl;

			// list initialization�� ���� �迭ũ�Ⱑ �ڵ����� ����! (����Ұ�)
			int d[] = { 1, 2, 3, 4, 5 }; // ���� C ����� �迭ũ�� �ȳ־ ����
			// int e[] = {}; // <����> �ƹ� �͵� �ȳ����� syntax error 
			// array<int> f = { 1, 2, 3, 4, 5 }; 
			// <����> C++11 ����� �迭ũ�� �ݵ�� ������ ���ÿ� �־�� ��!
		}

		/* �ݺ����� �̿��� �迭�ʱ�ȭ */
		// 1) built-in array�� ��� (���� C)
		{
			int a[5];
			for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++)
				cout << a[i] << endl;
		}
		// 2) array class template�� ��� (C++11)
		{
			array<int, 5> n = {}; // 0���� �ʱ�ȭ
			for (size_t i = 0; i < n.size(); i++)
				cout << n[i] << " ";
			cout << endl;

			array<size_t, X_NUM> m;
			for (size_t i = 0; i < X_NUM; i++)
				m[i] = (i + 1);
			cout << endl;

			/* �迭�� �ݺ����� �̿��� ������ */
			int sum = 0;
			for (size_t i = 0; i < m.size(); i++) // .size()�� �迭ũ�⸦ ����
				sum += m[i];
			cout << "SUM : " << sum << endl;
		}
	}
	// �迭�� �ݺ����� �ڵ��ݺ�ó���� ���� (5�� �Ѿ�� ����ϴ� ���� ����)
	// ũ�Ⱑ ū �迭�� ��� Call-By-Value�� �ƴ� Call-By-Address�� Call-By-Reference ���� ���� ����
	// ����� ���� ����Ǵ� �ð��� ���� �� ����
	system("pause");
}