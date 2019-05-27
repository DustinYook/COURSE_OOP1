// ���α׷� ����: sizeof�Լ��� for�� �ڵ��Է¿� ���� �ǽ�
#include <iostream>
using namespace std;
typedef unsigned int UINT; // UINT: �����������, size_t: �ý���������

int main()
{
	/* sizeof�Լ� */
	{
		cout << sizeof(short int) << endl; // 2����Ʈ
		cout << sizeof(wchar_t) << endl; // 2����Ʈ
		cout << sizeof(char) << endl; // 1����Ʈ
		cout << sizeof(bool) << endl; // 1����Ʈ
		// sizeof()�� operand�� ����Ʈ���� ��ȯ�ϴ� �Լ�
	} cout << endl;
	
	/* for�� �ڵ��Է¹�� */
	{
		for (size_t i = 0; i < 10; i++)
		{ // Tip) �巹�� ����ؼ� i�� j�� �ٲٸ� �Ѳ����� �ٲ�
			for (size_t j = 0; j < i; j++)
			{
				cout << j;
			} cout << endl;
		} cout << endl;
		// for�� �ڵ��Է�: for�� Ÿ������ �� <tab>�� ����
		// ���⼭ size_t�� unsigned int�� typedef�� (������)
	} cout << endl;

	/* typedef�� ���� */
	{
		// ���� 4�� ����
		for (UINT i = 65; i < 91; i++)
		{
			cout << static_cast<char>(i) << " ";
		} cout << endl;
		// unsigned int�� �� typedef(������)�� ���ؼ� ���������� �� �� ����
	}
	
	system("pause");
}