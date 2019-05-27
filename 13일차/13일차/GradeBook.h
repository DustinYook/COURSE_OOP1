// GradeBook.h: Ŭ��������
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <iomanip> // setw()
#include <string> // string class
#include <array> // array class template
#include <cstddef> // size_t
using namespace std;
class GradeBook
{
public:
	static const size_t STUDENTS = 10;
	static const size_t TESTS = 3;
	explicit GradeBook(string, array<array<size_t, TESTS>, STUDENTS>&);
	double getAverage(const array<size_t, TESTS>&) const; // ���
	size_t getMinimum() const; // �ּڰ�
	size_t getMaximum() const; // �ִ�
	void displayGrade() const; // �������
	void displayChart() const; // ��Ʈ���
	void runGradeBook();
private:
	array<array<size_t, TESTS>, STUDENTS> studentRecord; // �л� ���� ���ڵ�
	string& courseName;
};
#endif