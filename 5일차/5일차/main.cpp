// ���α׷� ����: ���뼺�� ���� ���Ϻи�ó���� ���� �ǽ�
#include "GradeBook.h" // ������������(GradeBook.h)�� ���� 
// ��ó����: ������ ���� �ش系�� ���纻�� �޸𸮿� �÷���
// < > : �ý��۶��̺귯�� (C++ Standard Library)
// " " : ��������Ƕ��̺귯�� (User-defined Library)

int main()
{
	GradeBook myGradeBook; // ����Ʈ������ ȣ��
	
	/* �Է�ó�� */
	cout << "Enter subject name : "; // �Է� ������Ʈ
	string courseName;
	getline(cin, courseName); // <string>�� ���ǵ� ���̺귯���Լ�
	myGradeBook.setName(courseName);

	/* ���ó�� */
	myGradeBook.displayMessage(courseName);

	/* �⺻ó�� */
	cout << endl;
	system("pause");
}
