#include <iostream>
using namespace std;

int main()
{
	/* Escape Sequence */
	cout << "�츮����\t��������\n\n�ϳ׳���\t���۳���" << endl; // \t: tab

	/* �Է� �� ����������� ���α׷�1 */
	int num1, num2; // ��������
	int sum = 0; // ��������
	cout << "������ ������ �� ������ ���ʷ� �Է����ֽʽÿ� >> ";
	cin >> num1 >> num2; // cin >> num1; cin >> num2;�� �� ���� ���� (�߿�! cin���� white space�� �����ڷ� �̿�)
	sum = num1 + num2;
	cout << "������ ����� " << sum << "�Դϴ�." << endl << endl;

	/* �Է� �� ����������� ���α׷�2 */
	int input[2] = { 0 };
	int sum = 0;
	cout << &input[0] << '\t' << &input[1] << endl; // �������� �޸��� �ּҸ� ��Ÿ��
	for (int i = 0; i < 2; i++)
	{
	    cout << (i + 1) << "���� �����Է�: __\b\b"; 
		// tip) "__\b\b"�� �ڸ����� ��Ÿ���� �ϴ� ������ �ϰ� �� �� ����
		cin >> input[i];
		sum += input[i];
	} cout << endl << input[0] << " + " << input[1] << " = " << sum << endl << endl;

	/* Overflow */
	// C++������ ���α׷��Ӱ� �����ؾ� �ϴ� �κ��� ����. 
	// Ư�� ǥ�������� �����Ϳ� �����ϵ��� �� �� 
	// �ڹٴ� reliability�� �߽��Ͽ� compile time�� detect������ C++�� flexibility�� �߽��Ͽ� detect���� ����
	// ǥ�������� �����ϰ� ����� �� �ؾ� overflow�� ���� logical error�� ������ �� ����
	int a = 99999999999999; 
	cout << a << endl;
	int b = 99999;
	cout << b << endl;
	int c = 3, d = 4;
	// int e=4, f=5, int g; (x) // �߰��� �̷��� �ϸ� �ȵ�
	char ch = 'a';
	cout << ch + 1 << endl; // �׻� �� ū ��(int)�� upcasting�� ��, ���� int������ ����� ������ ��
	cout << static_cast<char>(ch + 1) << endl; // ���ڴ� ���ڿ� �Դٰ��� �� �� �ִ�. (ASCII�ڵ尡 ���ڿ� ���ڸ� �����ϴ� ���̺�)

	system("pause");
}