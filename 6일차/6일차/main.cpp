// ���α׷� ����: Average�� �����ϴ� ����Լ��� �߰� + �ο����� ������ ���
#include "GradeBook.h"
#include <iostream>
using namespace std;

int main()
{
	/* ����� �Է�ó�� */
	cout << "Enter subject name : "; // user input prompt
	string subjectName;
	cin >> subjectName;

	/* ��ü���� �� ���α׷����� */
	GradeBook myGradeBook(subjectName); // generate object
	myGradeBook.displayMessage(subjectName);

	/* ������ �Է�ó�� */
	myGradeBook.determineClassAverage();

	system("pause");
}
// Tip) �ݺ�Ƚ�� �ƴ� ���: for�� / �ݺ�Ƚ�� �𸣴� ���: while��
// �ҽ��� �� �� �� �о�� -> �������� ��� ���� �����غ��� -> ǥ���غ��� -> å�� ����� ��