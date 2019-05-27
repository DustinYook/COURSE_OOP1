// ���α׷� ����: ���ڿ��� ���� ����ǽ�
#include <iostream>
#include <string> // �����Լ� getline() ����
#include <istream> // ����Լ� getline() ����
using namespace std;
#define _CRT_SECURE_NO_WARNINGS  // secure warning ����

int main()
{
	/* �� ����� ���� getline�Լ� */
	{ 
		// getline�Լ��� �Ϲ������� ���⸦ �����Ͽ� �Է°���
		string str;
		cin >> str; // >>(insertion operator)�� ���⸦ �����ڷ� �ν�
		cout << str << endl;

		// 1) <string>�� ���ǵ� �����Լ� getline()
		string str1;
		getline(cin, str1); // �����Լ��̱� ������ ��Ʈ������ ���� ���
		// <����> char�� �迭���� ���Ұ�
		cout << str1 << endl; // ����: getline(istream ��ü, string ��ü);

		// 2) <istream>�� ���ǵ� ����Լ� getline()
		char str2[10]; 
		cin.getline(str2, 10, '\n'); // ����Լ��̱� ������ ��Ʈ�����ڸ� ���
		// <����> string�� ��ü���� ���Ұ�
		cout << str2 << endl; // ����: getline(char*, ũ��, ������);
	} cout << endl;

	/* ���ڿ��� ���� */
	{
		// 1) ���ڻ���� �迭���
		char str1[10] = "123456789";
		char str2[10];
		strcpy_s(str2, str1); // strcpy()�� security warning �߻�
		// str2 = str1; // �迭����� �̷��� �ٷ� ���Կ��� �Ұ�
		// strcpy()�� security warning �ذ���
		// 1) _s�� ����, ��, strcpy_s(dest, src);�� ���
		// <����> scanf_s();�� scanf();�� �Ű����� ������ �ٸ� -> <F1>�� �̿�
		// 2) #define _CRT_SECURE_NO_WARNINGS�� ���
		// 3) #pragma warning(disable:4996)�� ���
		// 4) ������Ʈ - �Ӽ� - ��ó���� - ��ó��������: ;_CRT_SECURE_NO_WARNINGS �ٿ��ֱ�
		cout << str1 << " = " << str2 << endl;

		// 2) string Ŭ���� ���
		string str3 = "123456789";
		string str4;
		str4 = str3; // string Ŭ���� ����� �ٷ� ���Կ��� ���� (��ü����)
		cout << str3 << " = " << str4 << endl;
	} cout << endl;

	/* ���ڿ��� �迭 */
	{
		// 1) ���ڻ���� �迭���
		char str1[3][7] = { "rabbit", "tiger", "cow" }; // 2���� �迭����
		cout <<	str1[0] << endl; // �����: rabbit

		// 2) �����͹迭 ��� (�迭�� �����ʹ� ȣȯ����)
		const char* str2[3] = { "rabbit", "tiger", "cow" }; // �����͹迭 ����
		cout << *(str2 + 1) << endl; // �����: tiger
		cout << str2[1] << endl; // �����: tiger

		// 3) string Ŭ���� ���
		string str3[] = { "rabbit", "tiger", "cow" }; // string �迭����
		cout << str3[0] << endl;
	}

	/* �ǽ���� ��� */ 
	// string Ŭ���� ����� ���� ���� �� �ٶ�����
	// char�� �迭���´� ���̴� �ͺ��� �� �� �� ���� ���������� �ʰ� ������
	// 2���� �迭�� ���ڿ� �ٷ� �� ���� ���� ��� -> ������ ���䵵 ���� 
	// �����δ� ���̺귯���� ���� -> �ʿ信 ���� �н��ؼ� ����ϸ� ��

	system("pause");
}