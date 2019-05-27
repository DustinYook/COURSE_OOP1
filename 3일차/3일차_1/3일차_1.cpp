#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

int main()
{
	/* ��������� */
	int x1 = 10;
	int y1 = 20; // 6, 7���� ���ļ� int x = 10, y = 20;���� �ᵵ ������ �ǹ�
	cout << x1 << " + " << y1 << " = " << (x1 + y1) << endl; // ����������
	cout << x1 << " - " << y1 << " = " << (x1 - y1) << endl; // ����������
	cout << x1 << " * " << y1 << " = " << (x1 * y1) << endl; // ����������
	cout << x1 << " / " << y1 << " = " << (x1 / y1) << endl; // ������������(��) 
	cout << x1 << " % " << y1 << " = " << (x1 % y1) << endl; // ������������(������)
	// ����) x / y�� 0.5�� �ƴ� 0�� ����, �ֳ��ϸ� int / int = int�̱� ����
	// �츮�� ����� 0.5�� ������ �ϱ� ���ؼ��� �Ʒ��� ���� double�� ����ϰų� explicit casting�� ����ϸ� ��
	double x2 = 10.0, y2 = 20.0;
	cout << x2 << " / " << y2 << " = " << (x2 / y2) << endl; // ������������(��) 
	// cout << x2 << " % " << y2 << " = " << (x2 % y2) << endl; // ������������(������)
	// ����) data type�� ���� operation�� ������ �ٸ� (double�� ��� mode���� �Ұ�)
	// mode operator(%)�� operand�� double�� ����� �� ����! 
	cout << x1 << " / " << y1 << " = " << static_cast<double>(x1) / y1 << endl; // double / int = double (implicit upcasting)
	cout << x1 << " / " << y1 << " = " << x1 / static_cast<double>(y1) << endl; // int / double = double (implicit upcasting)
	// C++������ �� ���� Ÿ�԰� ū Ÿ���� ������ ���(numeric type) ������ ��Ȯ���� �Ͼ

	/* �������������� ��ʺм� */
	// ������� ������ �� �� mod������ ���ֻ��!
	cout << "Ȧ������ ¦������ �Ǵ��ϰ��� �ϴ� ���ڸ� �Է����ֽʽÿ�: ";
	int input;
	cin >> input;
	// 1) if-else���� �̿�
	if (input % 2 == 0)
		cout << "�Է��Ͻ� ���ڴ� ¦���Դϴ�." << endl;
	else
		cout << "�Է��Ͻ� ���ڴ� Ȧ���Դϴ�." << endl;
	// 2) switch-case���� �̿�
	try 
	{
		cout << "�Է��Ͻ� ���ڴ� ";
		switch (input % 2)
		{
		case 0: cout << "¦��";
			break;
		case 1: cout << "Ȧ��";
			break;
		default: throw exception("���ܹ߻�");
		}
		cout << "�Դϴ�." << endl;
	}
	catch (exception e)
	{
		cout << e.what() << endl;
		return EXIT_FAILURE;
	}
	// 3) ���ǻ��׿����ڸ� �̿�
	cout << "�Է��Ͻ� ���ڴ� " << ((input % 2 == 0) ? "¦��" : "Ȧ��") << "�Դϴ�." << endl;

	/* ������ */
	// �������� ����� true �Ǵ� false�� ���� ��ȯ, ��, boolean�� ��ȯ
	int x = 10, y = 20;
	cout << boolalpha; // true, false�� ǥ�õǰ� ��
	cout << (x > y) << '\t' << (x < y) << endl;
	cout << noboolalpha; // ����
	cout << (x > y) << '\t' << (x < y) << endl;

	system("pause");
}