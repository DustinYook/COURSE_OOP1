// ���α׷� ����: ���۷����� �̿��� ���ʽǽ� (swap�� change)
#include <iostream>
using namespace std;

// 1) change function: Call-By-Value��� ���, ���� "����"
void change(int xCpy, int yCpy) // x�� y�� formal parameter, �Լ� ����� �Ҹ�
{
	int temp = xCpy;
	xCpy = yCpy; 
	yCpy = temp;
	cout << "At change function : " << "x = " << xCpy << ", y = " << yCpy << endl;
}
// 2) swap function: Call-By-Reference��� ���, ���� �ƴ� "��ü"�� �ٲ�
void swap(int& xRef, int& yRef) // xRef�� yRef�� actual parameter�� x�� y�� alias
{
	int temp = xRef;
	xRef = yRef;
	yRef = temp;
	cout << "At swap function : " << "x = " << xRef << ", y = " << yRef << endl;
}

int main()
{
	/* Call-By-Value */
	int x = 10, y = 20;
	cout << "Before function call : " << "x = " << x << ", y = " << y << endl;
	change(x, y);
	cout << "After function call : " << "x = " << x << ", y = " << y << endl;

	/* Call-By-Reference */
	cout << "\nBefore function call : " << "x = " << x << ", y = " << y << endl;
	swap(x, y);
	cout << "After function call : " << "x = " << x << ", y = " << y << endl;

	/* ���۷����� �������� ������ */
	// 1) ���۷���(����): ���� ������ ��Ī�� ����, ��, ���� ������ ���� ���� (call-by-reference)
	// 2) ������: �����ϴ� ������ �ּҰ��� ������ �� �ִ� ������ ������ (call-by-address)

	/* ���۷����� ����ϴ� ���� */
	// 1) callee�� execution �߿��� control�� callee�� �����Ƿ� caller�� �������� ���� �Ұ�
	//    ���۷����� �̸�(identifier)�� �����Ͽ� caller�� ������ ������ �� �ִ� ��θ� ����
	// <����> execution stack�� stack pointer(SP)�� ����Ű�� ARI���� ������ ����
	// 2) ���۷����� Call-By-Value ��İ��� �ٸ��� �޸��� Copy�� �������� �ʾ� ȿ����

	system("pause");
}