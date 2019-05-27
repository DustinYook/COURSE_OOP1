// ���α׷� ����: �⺻ ���α׷� ����
#include <iostream> // ����½�Ʈ�� Ŭ����
int x = 10; // �������� (Global Variable)

int main()
{ // �Լ� ����: �Լ� ��������� �Լ� body
	// 1) Scope Operator
	int x = 100; // ��������(Local Variable)
	std::cout << "Local Variable: " << x << std::endl; // ������������
	std::cout << "Global Variable: " << ::x << std::endl; // ������������(::�� Scope������)

	// 2) Escape Sequence
	std::cout // std�� namespace, �ڹ��� package�� ����
		<< // <<�� stream insertion operator(��Ʈ�� ���� ������)
	"Welcome to C++!\n"; // �� �ٲ�: \n(newline) �Ǵ� std::endl 
	std::cout << "a\"b\"c" << "\t" << "t\'es\'t" << std::endl; // \"�� ū����ǥ, \'�� ��������ǥ
	std::cout << "123" << "\t" << "45678" << std::endl; // \t�� tab
	std::cout << "This is same as enter" << "\n\r" << "\\" << "\a" << std::endl; // \r�� carriage return, \\�� \, \a�� �����

	// 3) Comment
	// �̰��� ���� �ּ��Դϴ�.
	/*
	�̰��� ������ �ּ��Դϴ�.
	�ּ��� ���α׷��� ���࿡ �ƹ��� ������ ���� �ʽ��ϴ�.
	*/
	// <ctrl> + K + U: �ּ�����, <ctrl> + K + C: �ּ�����
	
	system("pause");
	// return 0; // OS�� ����������� �˸�(����Ʈ���̹Ƿ� ��������)
} // �Լ� ����
// Tip) ���� ����ϴ� ���̺귯���� ���� ������Ϸ� ���� include�ϴ� ���� ����