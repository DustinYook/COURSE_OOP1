#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#define MAX 10
using namespace std;

class GradeBook
{
private: // ��������� ����Լ� �� ��������
	string courseName;
	int grade[5];
public:
	explicit GradeBook(string);
	void setCourseName(string);
	string getCourseName() const;
	void displayMessage(string) const;
	void determineClassAverage() const;
	void inputGrade(); // �����Է��Լ�
	void displayGrade() const; // ��������Լ�
};
#endif GRADEBOOK_H