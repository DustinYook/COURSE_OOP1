// ���α׷� ����: Hello World ��� �� �⺻����
#include <stdio.h> // printf�� �̿��ϱ� ���� ��ó����
#include <iostream> // cout�� �̿��ϱ� ���� ��ó���� 
using namespace std; // namespace: �ڹ� package�� ��� (���ϰ��)
// #include�� preprocessor 

int main(void)
{
	cout << 123 << 456 << '\n';
	cout << 123 + 456 << '\n';
	printf("%s", "Hello World!\n"); // C��� ��� 
	cout << "Hello World!" << endl; // C++ ���
	cout << "��ü�������α׷���1" << endl;
	system("pause");
	return EXIT_SUCCESS; // named constant�� ����� (#define)
}
