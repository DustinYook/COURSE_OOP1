#include "GradeBook.h"

int main()
{
	/* ����� �Է�ó�� */
	cout << "Enter subject name : "; // prompt
	string subjectName;
	cin >> subjectName;

	/* ��ü���� �� ���α׷����� */
	GradeBook myGradeBook(subjectName); // ��ü����
	myGradeBook.displayMessage(subjectName);

	/* �������� �Է�ó�� */
	myGradeBook.inputGrade();
	myGradeBook.displayGrade();

	system("pause");
}