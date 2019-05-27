// ���α׷� ����: 13����_9���� �ٷ� ������ ��Ȯ�ϰ� �ٽ� ����
#include <iostream>
#include <iomanip> // setw()
using namespace std;

int main()
{
	/* �迭 ���� �� ��� */
	int arr[] = { 1, 2 ,3 };
	int* arrPtr = arr;
	for (auto const& element : arr)
		cout << setw(3) << left << element;
	cout << endl << endl;

	/* �����Ͱ� ����Ű�� ��ġ�� �ٲ�� ��� */
	{
		cout << "Pointer : " << arrPtr << endl;
		cout << *arrPtr++ << endl; // ����� : 1
		cout << "Pointer : " << arrPtr << endl;
		cout << *arrPtr << endl; // ����� : 2
		// �迭���� �ƴ� �����Ͱ� ����Ű�� ���� �ٲ�
		for (auto const& element : arr)
			cout << setw(3) << left << element; // �����: 1 2 3
		cout << endl << endl;
		arrPtr = arr; // �����͸� �ٽ� ���� ����Ű�� ������ �̵�

		cout << "Pointer : " << arrPtr << endl;
		cout << *++arrPtr << endl; // ����� : 2
		cout << "Pointer : " << arrPtr << endl;
		cout << *arrPtr << endl; // ����� : 2
		// �迭���� �ƴ� �����Ͱ� ����Ű�� ���� �ٲ�
		for (auto const& element : arr)
			cout << setw(3) << left << element; // �����: 1 2 3
		cout << endl << endl;
		arrPtr = arr;
	}

	/* �迭�� ���� ���尪�� �ٲ�� ��� */
	{
		cout << "Pointer : " << arrPtr << endl;
		cout << (*arrPtr)++ << endl; // ����� : 1
		cout << "Pointer : " << arrPtr << endl;
		cout << *arrPtr << endl; // ����� : 2
		// �����Ͱ� ����Ű�� ���� ��ȭ���� �迭�� ���尪�� �ٲ�
		for (auto const& element : arr)
			cout << setw(3) << left << element; // �����: 2 2 3
		cout << endl << endl;
		arr[0] = 1; // �迭�� ���尪�� �ٽ� ���� ���尪���� �ٲ�

		cout << "Pointer : " << arrPtr << endl;
		cout << ++(*arrPtr) << endl; // ����� : 2
		cout << "Pointer : " << arrPtr << endl;
		cout << *arrPtr << endl; // ����� : 2
		// �����Ͱ� ����Ű�� ���� ��ȭ���� �迭�� ���尪�� �ٲ�
		for (auto const& element : arr)
			cout << setw(3) << left << element; // �����: 2 2 3
		cout << endl << endl;
		arr[0] = 1; // �迭�� ���尪�� �ٽ� ���� ���尪���� �ٲ�
	}

	system("pause");
}