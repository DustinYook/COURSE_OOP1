// GradeBook.cpp: Ŭ���� ��������
#include "GradeBook.h"

/* ������ �����ε� */
// 1) member initializer ���
GradeBook::GradeBook(const string& cn, const array<size_t, STUDENTS>& g)
	:courseName(cn), grade(g)
{
	// �Ϲ������� ���⿡ �ʱ�ȭ ���� ���
}
// 2) �Ϲ����� ���
//GradeBook::GradeBook(const string& name, const array<int, STUDENTS>& score)
//{ 
//	this->courseName = name;
//	this->grade;
//}

/* ��������Լ� */
void GradeBook::printGrade() const
{
	cout << "The grades are: \n" << endl;
	for (size_t i = 0; i < grade.size(); i++)
	{
		cout << setw(8) << left << "Student ";
		cout << setw(2) << right << (i + 1) << ": ";
		cout << setw(3) << right << grade.at(i) << endl;
	} cout << endl;
}

/* ��հ� �Լ� */
double GradeBook::getAvg() const
{
	size_t sum = 0;
	for (size_t buff : grade)
		sum += buff;
	return static_cast<double>(sum) / STUDENTS; // <����> ����ȯ!
}

/* �ּڰ� �Լ� */
size_t GradeBook::getMin() const
{
	size_t min = grade.at(0); // �Ǵ� �ſ� ū ��(999)�� ����
	for (size_t buff : grade)
	{
		if (min > buff)
			min = buff;
	} return min;
}

/* �ִ� �Լ� */
size_t GradeBook::getMax() const
{
	size_t max = grade.at(0); // �Ǵ� �ſ� ���� ��(-999)���� ����
	for (size_t buff : grade)
	{
		if (max < buff)
			max = buff;
	} return max;
}

/* ��Ʈ����Լ� */
void GradeBook::barChart() const
{
	cout << "Grade distribution: " << endl;
	// 1) ��������
	array<size_t, 11> section = {};

	// 2) �ڷ��а� ������ �з�
	for (size_t i = 0; i < grade.size(); i++)
		section[grade.at(i) / 10]++;

	// 3) ��Ʈ���
	for (size_t i = 0; i < section.size(); i++)
	{
		/* ������� */
		if (i == section.size() - 1)
			cout << setw(5) << (i * 10) << ": ";
		else
			cout << setw(2) << (i * 10) << setw(1) << '-' << setw(2) << (i * 10 + 9) << ": ";
		for (size_t j = 0; j < section.at(i); j++)
			cout << "* ";
		cout << endl;
	}
}

/* ����ó���Լ� */
void GradeBook::processGrade() const
{
	// 1) �������
	printGrade();
	// 2) ��հ����
	cout << "Class average is " << setprecision(2) << fixed << getAvg() << endl;
	// <����> setprecision, fixed, <iomanip> ���߸��� �� ��!
	// 3) �ּҰ����
	cout << "Lowest grade is " << getMin() << endl;
	// 4) �ִ밪���
	cout << "Highest grade is " << getMax() << endl << endl;
	// ��Ʈ���
	barChart();
}