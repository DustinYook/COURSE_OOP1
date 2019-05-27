// ���α׷� ����: �������迭�� ���� ���ʽǽ�
#include <iostream>
#include <iomanip> // setw()
#include <array> // array template class
#include <cstddef> // size_t
using namespace std;

int main()
{
	/* built-in array */
	{
		/* �迭 �ʱ�ȭ��� */
		int arr[2][3]; // auto array �ʱ�ȭ ���ϸ� �����Ⱚ ����
		// int arr[2][3] = { 1,2,3,4,5,6 }; // 01_���о��� ����
		// int arr[2][3] = { { 1, 2, 3 },{ 4, 5, 6 } }; // 02_brace�� ����
		arr[0][0] = 1; // 03_������ �ʱ�ȭ
		arr[0][1] = 2;
		arr[0][2] = 3;
		arr[1][0] = 4;
		arr[1][1] = 5;
		arr[1][2] = 6;

		/* �迭 ��¹�� */
		for (size_t i = 0; i < 2; i++) // �� ����
		{
			for (size_t j = 0; j < 3; j++) // �� ����
				cout << "arr[" << i << "][" << j << "]:" << setw(2) << arr[i][j] << "\t";
			cout << endl;
		} cout << endl;
	}

	/* Array Template Class */
	{
		/* �迭 �ʱ�ȭ��� */
		array<array<int, 3>, 2> arr = { 1, 2, 3, 4, 5, 6 }; // ���� ����: int -> int[3]
		// array<array<int, 3>, 2> arr = { {1,2,3}, {4,5,6} }; // <����> �����Ͽ���!
		// ������ �ʱ�ȭ�� �ǳ� ���⼭�� ������
		
		/* ��� ���� ���� ���ϴ� ��� */
		cout << "The number of rows : " << arr.size() << endl; // �����: 2
		cout << "The number of columns : " << arr[0].size() << endl; // �����: 3
		// <����> column ���� �� arr.at(0)�� �ϸ� �迭�� ���ͼ� �ȵ�! 

		/* �迭 ��¹�� */
		for (size_t i = 0; i < arr.size(); i++) // �� ����
		{
			for (size_t j = 0; j < arr[0].size(); j++) // �� ����
				cout << "arr[" << i << "][" << j << "]:" << setw(2) << arr[i][j] << "\t";
			cout << endl;
		} cout << endl;
	}

	system("pause");
}