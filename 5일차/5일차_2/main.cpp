// ���α׷� ����: validity checking�� ���� �ǽ�
#include "GradeBook.h"

int main()
{
	GradeBook myGradeBook; // ����Ʈ������ ȣ��	
	cout << "Enter subject name : "; // �ѱ��� 2byte
	string subjectName;
	cin >> subjectName;
	myGradeBook.setCourseName(subjectName);
	myGradeBook.displayMsg(subjectName);
	system("pause");
}