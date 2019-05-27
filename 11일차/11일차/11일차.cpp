// ���α׷� ����: ���ȣ�⿡ ���� �ǽ� (factorial)
#include <iostream>
#include <iomanip>
using namespace std;
typedef unsigned int UINT;

/* function prototype */
UINT recurFact(UINT); 
UINT iterFact(UINT);
// C/C++�� ��� �̸� �����Ϸ����� �˷��־�� ��!
// prototype�� definition�� ������ ���ƾ� ��

int main()
{ // _main�� C����� ��������
	/* ����� �Է�ó�� */
	cout << "Enter number : "; // user input prompt
	int userInput;
	cin >> userInput;
	/* ��� ���ó�� */
	cout << userInput << "! = " << recurFact(userInput) << endl; // ���ȣ�� �̿�
	cout << userInput << "! = " << iterFact(userInput) << endl; // �ݺ��� �̿�
	system("pause");
}

/* recursion */
UINT recurFact(UINT num) // function definition
{
	if (num <= 1) // 0�� 1�� ó�� (Base Case ����)
		return 1;
	else // �� �̿��� ���
		return num * recurFact(num - 1); // ��ʹ� �ڽ�����
}
/* Iteration */
UINT iterFact(UINT num)
{
	UINT factorial = 1; 
	// �ٸ����: for(UINT i = 1; i <= num; i++)
	for (int i = num; i >= 1; i--) // ��������(i >= 1) �ʼ�!
		factorial *= i;
	return factorial;
}
// �Լ�ȣ��(���ȣ�� ����)�� overhead�� �߻��ϱ� ������ ���ϴ°� ȿ����
// ������ ����� �� ��� �� �� �־�� �� (����� ������ �� vs ȣ�� overhead)
// -> ���丮���� iteration��, �Ǻ���ġ�� recursive�� ȿ����