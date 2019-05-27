// ���α׷� ����: local, static, global variable�� ���� �ǽ� (�� ��ȭ �߿�!)
#include <iostream>
using namespace std;
int x = 30; // global variable
void Local()
{
	int x = 10;
	cout << "Local  Variable : " << x++ << endl;
}
void Static()
{
	static int x = 20; 
	cout << "Static Variable : " << x++ << endl;
}
void Global()
{
	cout << "Global Variable : " << x++ << endl;
}

int main()
{
	Local();  // �����: 10
	Static(); // �����: 20
	Global(); // �����: 30
	cout << "====================" << endl;
	Local();  // �����: 10
	Static(); // �����: 21 
	Global(); // �����: 31
	/* �ǽ������� */
	// 1) local  variable : stack ������ �Ҵ� / scope���� ����� �������� scope�� '}'�� ���������� ����
	// 2) static variable : static ������ �Ҵ� / ���� �� ���ε��Ǿ� ���ൿ�� ���� (?)
	// 3) global variable : stack ������ �Ҵ� / ������ ����� ������ ���ൿ�� ���� (?)
    // <����> static variable�� ���� �� �� ���� �ʱ�ȭ!
	// Tip) ���� ���� ���ؼ��� global�� static ��� ���� (static is more desirable)	
	// static�� �Ű������� ���޵Ǵ� �Ͱ� ������ ȿ���� ��Ÿ��
	system("pause");
}