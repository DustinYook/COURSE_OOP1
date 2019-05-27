// ���α׷� ����: �迭�� �����Ϳ� ���� �ǽ�
#include <iostream>
#include <array> // size()
using namespace std;
/* Function Prototype */
void addArr(int[]); // �迭�� �ּҸ� ����
void addPtr1(int*);  
void addPtr2(int*);

int main()
{
	int arr[] = { 1,2,3,4,5 };
	cout << arr << " == " << &arr[0] << endl; // <�߿�> �迭���� �迭�� �����ּҸ� �ǹ�
	addArr(arr);
	addPtr1(arr);
	addPtr2(arr);
	int* arrPtr = arr; // arr�� ���������ϴ� �����ͺ��� ����
	cout << *(arr + 2) << " == " << arrPtr[2] << endl; // �迭�� �����ʹ� ��ȣȣȯ
	// <�߿�> �迭���� �����ͻ��, �����ʹ� �����ͺ���
	cout << *(++arrPtr) << endl; // �����ʹ� ���� -> ���尪 ���氡��!
	// cout << arr++ << endl;    // �迭���� �����ͻ�� -> ���尪 ����Ұ�!

	system("pause");
}
/* Function Definition */
void addArr(int a[])
{
	int sum = 0;
	for (size_t i = 0; i < 5; i++)
		sum += a[i]; // �迭�� �ε��� ����
	cout << "Sum : " << sum << endl;
}
void addPtr1(int* a)
{
	int sum = 0;
	for (size_t i = 0; i < 5; i++)
		sum += *(a + i); // ������ ���� -> ������ ���尪 ����
	cout << "Sum : " << sum << endl;
} 
void addPtr2(int* a)
{
	int sum = 0;
	for (size_t i = 0; i < 5; i++)
		sum += *(a++); // ������ ���� -> ������ ���尪 ����
	cout << "Sum : " << sum << endl;
	/* WARNING! */
	for (size_t i = 0; i < 5; i++)
		sum += *(a++); // ÷�ڹ����� ���! (�����Ⱚ ������)
	cout << "Sum : " << sum << endl;
}