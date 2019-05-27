// ���α׷� ����: �迭�� �������� ���� ��ȭ�ǽ�
#include <iostream>
#include <algorithm> // sort(), binary_search()
#include <array> // array class template
using namespace std;

int add(int a[])
{
	int sum = 0;
	for (size_t i = 0; i < 5; i++)
		sum += *(a + i); // a[i]�� ���� ǥ�� -> ����� �ٸ����� ����� ���� (�迭�� ��� ++�Ұ�)
	return sum;
}

int main()
{
	/* begin(), end()�Լ��� ���� */
	{
		// 1) built-in array
		int arr1[] = { 1, 3, 4, 2, 5 };
		sort(begin(arr1), end(arr1)); // ��Ʈ�����ڴ�� �迭�� �Ű������� ����

		// 2) array class template
		array<int, 5> arr2 = { 1, 3, 4, 2, 5 };
		sort(arr2.begin(), arr2.end()); // ��Ʈ�����ڸ� ���� ����Լ��� ����
	}

	/* �迭�� �������� ȣȯ�� */
	int arr[] = { 1, 2, 3 };
	int* arrPtr = arr; 
	for (size_t i = 0; i < 3; i++)
	{
		// arr[i]�� *(ptr + i)�� ���� ǥ��!
		cout << arr[i] << " == " << *(arrPtr + i) << endl;
	}
	for (size_t i = 0; i < 3; i++)
	{
		// <����> *(arrPtr + i)�� �������� ���尪�� ��ȭ��Ű�� ����
		// ������ *(arrPtr++)�� �������� ���尪�� ��ȭ��Ű�Ƿ� ����!
		cout << *(arrPtr++) << endl; 
	} cout << *arrPtr << endl; // �����Ͱ� �迭������ ��� (�����Ⱚ ���)
	arrPtr = arr; // �ٽ� �����Ͱ� �迭�� �����ּ� ����Ű�� ��
	cout << arrPtr[0] << " == " << *(arr + 0) << endl << endl; // �迭��� �����ͺ����� ȣȯ����
	// <����> arrPtr[0]�� *(arr + 0)�� arr�� 0��° �ּҿ� ����� ���� ��ȯ

	/* �����ؾ� �ϴ� ��� */
	// int arr[] = { 1, 2, 3 };      // ������ �ּ����� �ȹٷ� �ľ��ؾ� ��!
	// 1) ������ �켱���� <����>
	cout << *arrPtr + 1 << endl; // �����: 1 + 1 = 2
	// Ǯ��) *arrPtr; -> 1 + 1 -> 2
	//
	cout << *arrPtr++ << endl; // �����: 1 
	cout << *arrPtr << endl;   // �����: 2
	// Ǯ��) arrPtr = arrPtr; -> *arrPtr; -> cout(1) -> arrPtr = arrPtr + 1; -> cout(2)
	arrPtr = arr; // �ٽ��ʱ�ȭ
	//
	cout << *++arrPtr << endl; // �����: 2
	cout << *arrPtr << endl;   // �����: 2
	// Ǯ��) arrPtr = arrPtr + 1; -> *arrPtr; -> cout(2) -> arrPtr = arrPtr; -> cout(2)
	arrPtr = arr; // �ٽ��ʱ�ȭ
	cout << endl;
	//
	// 2) �����Ͱ� �Ű������� ���� <����>
	cout << *(arrPtr + 1) << endl;  // �����Ͱ� �� �Ű���: 2
	cout << *arrPtr << endl; // 1
	cout << *(arrPtr++) << endl;    // �����Ͱ� �Ű���: 1
	cout << *arrPtr << endl; // 2
	cout << *(++arrPtr) << endl;    // �����Ͱ� �Ű���: 3
	cout << *arrPtr << endl; // 3
	arrPtr = arr; // �ٽ��ʱ�ȭ
	cout << *(arrPtr += 1) << endl; // �����Ͱ� �Ű���: 2
	cout << *arrPtr << endl; // 2
	arrPtr = arr; // �ٽ� �ʱ�ȭ
	cout << endl;
	//
	// 3) �迭�� ���尪�� �ٲ���°�? vs �����Ͱ� ����Ű�� ��ġ�� �ٲ���°�?
	// 01_�迭�� ���尪�� �ٲ� ��� (1)
	for (auto const& element : arr)
		cout << element << "  "; // �����: 1 2 3
	cout << endl;
	cout << (*arrPtr)++ << endl; // �����: 1
	cout << *arrPtr << endl;     // �����: 2 (�迭�� ���尪�� �ٲ�)
	for (auto const& element : arr)
		cout << element << "  "; // �����: 2 2 3
	cout << endl << endl;
	arr[0] = 1; // �ٽ� �ʱ�ȭ
	//
	// 02_�迭�� ���尪�� �ٲ� ��� (2)
	for (auto const& element : arr)
		cout << element << "  "; // �����: 1 2 3
	cout << endl;
	cout << ++(*arrPtr) << endl; // �����: 2 (�迭�� ���尪�� �ٲ�)
	cout << *arrPtr << endl;     // �����: 2 
	arrPtr = arr; // �ٽ� �ʱ�ȭ
	for (auto const& element : arr)
		cout << element << "  "; // �����: 2 2 3
	cout << endl << endl;
	arr[0] = 1; // �ٽ� �ʱ�ȭ
	//
	// 03_�����Ͱ� ����Ű�� ��ġ�� �ٲ� ��� (1)
	for (auto const& element : arr)
		cout << element << "  "; // �����: 1 2 3
	cout << endl;
	cout << *(arrPtr++) << endl; // �����: 1
	cout << *arrPtr << endl;     // �����: 2 (�����Ͱ� ����Ű�� ��ġ�� �ٲ�)
	for (auto const& element : arr)
		cout << element << "  "; // �����: 1 2 3
	arrPtr = arr; // �ٽ� �ʱ�ȭ
	cout << endl << endl;
	//
	// 04_�����Ͱ� ����Ű�� ��ġ�� �ٲ� ��� (2)
	for (auto const& element : arr)
		cout << element << "  "; // �����: 1 2 3
	cout << endl;
	cout << *(++arrPtr) << endl; // �����: 2 (�����Ͱ� ����Ű�� ��ġ�� �ٲ�)
	cout << *arrPtr << endl;     // �����: 2 
	for (auto const& element : arr)
		cout << element << "  "; // �����: 1 2 3
	arrPtr = arr; // �ٽ� �ʱ�ȭ
	cout << endl << endl;
	//
	// 4) �迭�� �������� ȣȯ
	cout << (arr + 1) << " == " << &arrPtr[1] << endl; // �ּҰ� ����
	cout << *(arr + 1) << " == " << arrPtr[1] << endl; // ���尪 ����

	system("pause");
}