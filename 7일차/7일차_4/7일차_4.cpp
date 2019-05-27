// ���α׷� ����: ���ǥ������ ������ ���� �ǽ� (����������α׷�)
#include <iostream> // <cmath>�� ���� -> <cmath>�Ⱦ��� �ص� ������ ���� ����
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double amount; // ���հ�������
	double principal = 1000.00; // ����
	double rate = 0.05; // ������
	cout << setw(4) << "Year"; // setw(n)�� �ʵ���̸� n���� ���� (�ʱ갪 right)
	cout << setw(21) << "Amount on deposit";
	cout << endl;
	// setw()�� <iomanip>�� ����, setw()�� �ʱ갪�� right
	cout << fixed << setprecision(2) << showpoint; // �ڿ� ������ ��鿡 �ϰ�����
	for (int i = 1; i <= 10; i++)
	{
		amount = principal * pow(1.0 + rate, i);
		cout << setw(4) << i; // YEAR�κ� �� ���
		cout << setw(21) << amount; // AMOUNT�κ� �� ���
		cout << endl;
	}
	system("pause");
}