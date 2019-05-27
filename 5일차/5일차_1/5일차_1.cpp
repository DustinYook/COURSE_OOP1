// ���α׷� ����: function prototype�� ���� �ǽ�
#include <iostream>
using namespace std;

/* function declaration/prototype/interface */
void test(int); // �����Ϸ����� ������ �˷���

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		test(i); // function call
		cout << endl;
	}
	system("pause");
}

/* function definition/implementation */
void test(int a) // function header
{ // function body start
	static int cnt = 0;
	for (int i = 0; i <= cnt; i++)
		cout << "test" << a << " ";
	cnt++;
} // function body end