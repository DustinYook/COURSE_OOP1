// ���α׷� ����: double���� promotion�� ���� �ǽ�
#include <iostream>
using namespace std;

int main()
{
	/* floating point�� �⺻���� double */
	float f = 1.5f; // f_postfix ��� ��������� float���� ����
	double lf = 1.5; // double���� �⺻�� (�⺻���е� �Ҽ����Ʒ� 6�ڸ�)
	cout << f << endl;
	cout << lf << endl;

	/* implicit casting */
	int i = 10;
	double d = 3.14;
	cout << i << endl;
	cout << d << endl;
	int iTemp = d; // ū ���� ���� ���� ���� (truncation �߻�; ���е� �ջ�)
	double dTemp = i; // ���� ���� ū ���� ���� (promotion)
	cout << iTemp << endl;
	cout << dTemp << endl;

	system("pause");
}
// JAVA�� reliability�� ����
// C++�� flexibility�� ���� - �����ڿ��� ���� å��
// C��ݾ��鿡���� ���������ٴ� ����Ǵ� ���� �� �߿�