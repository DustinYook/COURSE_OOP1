// ���α׷� ����: boolalpha�� ���� �ǽ�
#include <iostream>
using namespace std;
#define TRUE 1
#define FALSE 0

int main()
{
	/* boolalpha */
	{
		// boolalpha�� <iomanip>�� �ƴ� <iostream>�� ����
		bool a = true;
		cout << a + 1 << endl; 
		// C++������ boolean�� int�� ������ �� 
		// JAVA������ �����Ͽ���

		cout << boolalpha; // boolalpha�� <iomanip>�� ����, sticky
		cout << a << endl;
		cout << a << endl;
		cout << noboolalpha; // noboolalpha�� �����ϱ� �������� ȿ������
		cout << a << endl;

		// 1) ���Թ��� ���� ���ѷ��� ���� (��, ���԰��� != 0)
		while (a = 1) // 0�� �ƴ� ���� true
		{
			cout << "ù��° ���ѷ��� ���� ����" << endl; // ���
			break;
		}

		// 2) a = 0�� ���� ��� ���� (���� �ѹ��� �������� ����)
		while(a = 0) // 0�� false
		{
			cout << "�ι�° ���� ���� ����" << endl; // ��¾ȵ�
			break;
		}

		// 3) C++ ��� ���ѷ��� �������
		while (true) 
		{
			cout << "����° ���ѷ��� ���� ����" << endl; // ���
			break;
		}

		// 4) C ��� ���ѷ��� �������
		while (TRUE)
		{
			cout << "�׹�° ���ѷ��� ���� ����" << endl; // ���
			break; 
			// #define�� ���ؼ� ���� 
			// C������ boolean�� �������� �ʾұ� ����
		}

	} cout << endl;

	system("pause");
}
