// ���α׷� ����: �����Ϳ� ���� ���ʽǽ�
#include <iostream>
using namespace std;
/* Function Prototype */
void change(int x, int y);
void changeRef(int& x, int& y);
void changePtr(int* x, int* y);

int main()
{
	/* ������ ������ ���� */
	int a = 10; // a��� ������ 10�� ����
	int* aPtr = &a; // aPtr�̶�� Ư�������� a�ּ����� (*�� ������ǥ��)
	cout << a << " == " << *aPtr << endl; // <����> *�� ������������ (���� �ٸ�!)
	cout << &a << " == " << aPtr << endl << endl; // ������ ������ ������������ �ּҰ��� ����

	/* ������ �������� ������ */
	int& aRef = a; // a��� ������ aRef��� ��Ī�� ����
	cout << &a << " == " << &aRef << " != " << &aPtr << endl; // <����> a�� aRef�� ����, aPtr�� �ƿ� �ٸ� ����
	cout << a << " == " << *aPtr << " == " << aRef << endl; // ���尪�� ��� ����: 10
	cout << (a += 1) << " == " << *aPtr << " == " << aRef << endl; // a�� ��ȭ��Ű�� ������ ���� ��ȭ: 11
	cout << a << " == " << (*aPtr+=1) << " == " << aRef << endl; // *aPtr�� ��ȭ��Ű�� ������ ���� ��ȭ: 12
	cout << a << " == " << *aPtr << " == " << (aRef += 1) << endl << endl; // aRef�� ��ȭ��Ű�� ������ ���� ��ȭ: 13
	// <�߿�> ������ ���������� �� ��ü������, �����ʹ� ������������ �ּҸ� ������ �� ���� ������ �����̴�!

	/* ������ ������ �ʱ�ȭ */	
	// int* ptr; // ������ ������ ����� ���ÿ� �ʱ�ȭ �ʿ�!
	int* ptr1 = NULL; // ���Ź��
	int* ptr2 = nullptr; // ������ (���� �����)
	cout << ptr1 << " == " << ptr2 << endl << endl;
	// int* ptr1 = 100; // �����Ͽ��� -> �����ͺ������� �ּҸ� ���尡��! 

	/* �Լ��� �Ű������μ��� ������ */
	int x = 10, y = 20;
	cout << "x = " << x << "   " << "y = " << y << endl;
	// 1) Call-by-value ��� (COPY)
	change(x, y); // �����: x = 10, y = 20
	cout << "x = " << x << "   " << "y = " << y << endl;
	// 2) Call-by-reference ���
	changeRef(x, y); // �����: x = 20, y = 10
	cout << "x = " << x << "   " << "y = " << y << endl; 
	// 3) Call-by-address ���
	changePtr(&x, &y); // �����: x = 10, y = 20 <����> �ּ������ؾ� ��!
	cout << "x = " << x << "   " << "y = " << y << endl << endl;

	system("pause");
}
/* Function Definition */
void change(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
void changeRef(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void changePtr(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}