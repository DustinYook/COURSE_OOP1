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
private:
	string courseName;
	/* ���� �ۼ��� �κ� */
	int maxGrade;
	int minGrade;
public:
	explicit GradeBook(string);
	void setCourseName(string);
	string getCourseName() const;
	void displayMessage(string) const;
	void determineClassAverage() const;
	/* ���� �ۼ��� �κ� */
	void inputGrade(); // const �� ���� -> �� ���� �ʿ�
	int maximum(int, int, int) const; // �Ű���������Ʈ������ Ÿ�Ը� �߿�
	int minimum(int, int, int) const; // ������ �μ��� formal parameter
	void displayReport() const;
};
#endif GRADEBOOK_H