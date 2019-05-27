// ���α׷� ����: C�� C++��Ÿ���� ���ڿ� ������� ���� ���ʽǽ�
#include <iostream>
#include <cstring> // C�� ������ C���� �Ѿ�� ��� 
#include <string> // c�� ���� ���� ���� C++ ���
using namespace std;

int main()
{
	/* ���ڹ迭�� list initialization */
	{
		// 1) ASCII ZERO�� ��õ��� ���� ���
		char str1[] = { 'a', 'b', 'c' }; // ���ڿ��� ���ڻ���� �迭�� �ν�
		cout << str1[0] << endl; // 0��° ���ҿ� ����� 'a'�� ���
		cout << str1 << endl;
		// ASCII ZERO�� ��õ��� �ʾ� �����ּ����尪 'a'���� ���� �޸� ������ ���� ����
		//
		// 2) ASCII ZERO�� ��õ� ���
		char str2[] = { 'a', 'b', 'c', '\0' }; // ���ڻ�� '\0'�� NULL �Ǵ� ASCII ZERO�� ��
		// 01_�迭���� �̿��� ���
		cout << str2 << endl; // ����� �� NULL�� ������ ���ڿ��� ������ ������ (EOF�� ���)
		// 02_for���� �̿��� ���
		for (size_t i = 0; i < 4; i++)
			cout << str2[i];
		cout << endl;
	} cout << endl;

	/* ���ڹ迭�� string literal */
	{ // <����> �迭�� ũ�Ⱑ FIXED(����) -> ũ�� ���� ����Ұ�!
		char str[] = "abc"; // "abc"�� string literal(constant)��� ��
		// string literal(constant)�� ���ڹ迭�� �������
		cout << sizeof(str) << endl; // �츮�� "abc" 3���ڸ� �־��µ� 4���ڰ� ����
		// �迭����� ����: ���� ���ڿ��� 3���̳� �����δ� 4���� �ν�(������ NULL ����)
		cout << str << endl;
		str[1] = 'B'; // ���ڿ� �迭�� 1�� ������ ���尪�� 'B'�� ���� - �����: aBc
		cout << str << endl;
		const char* strPtr = "abc"; // �����Ϳ� �迭���� ȣȯ����
		cout << strPtr << endl; // string literal�� READ_ONLY
		cout << sizeof(strPtr) << endl;
	} cout << endl;

	/* string Ŭ������ �̿��� ��� */
	{
		string str = "abc";
		cout << str << endl; // <string>�� �����ε��Լ� ����
		cout << str.size() << " = " << str.length() << endl; // C�ʹ� �ٸ��� NULL�� ī��Ʈ���� ����
		// length(), size(): ���Ұ��� ���
		string strCopy = str; // ��ü���� ���� (���� ����)
		cout << strCopy << endl;
		str.insert(2, "AB"); // string�� 2��° ���ҽ��ۺκп� "AB"�� ����
		cout << boolalpha << (str == strCopy) << endl; // ��ü�� �񱳰���
	}

	system("pause");
}