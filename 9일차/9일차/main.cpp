// ���α׷� ����: �ִ�, �ּڰ� ���ϴ� �Լ��� ���� �ǽ�
#include "GradeBook.h"

int main()
{
	/* ����� �Է�ó�� */
	cout << "Enter subject name : ";
	string subjectName;
	cin >> subjectName;

	/* ��ü���� �� ���α׷����� */
	GradeBook myGradeBook(subjectName);
	myGradeBook.displayMessage(subjectName);

	/* ������ �Է�ó�� */
	//myGradeBook.determineClassAverage();
	
	/* ���� �ۼ��� �κ� */
	myGradeBook.inputGrade();
	myGradeBook.displayReport();

	system("pause");
}