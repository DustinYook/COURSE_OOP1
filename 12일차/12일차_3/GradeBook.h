// GradeBook.h: Ŭ���� �������
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <iomanip> // setw()
#include <string> // string template class
#include <array> // array template class
#include <cstddef> // size_t
using namespace std;
class GradeBook
{
public: // public: Ŭ�����ܺ� �������
	static const size_t STUDENTS = 10; 
private:
	string courseName;
	array<size_t, STUDENTS> grade;
public: // <����> const ������ ������ �� ����Ұ� (���� �پ ����Ұ�!)
	explicit GradeBook(const string& name, const array<size_t, STUDENTS>& grade); 
	void printGrade() const; // �������
	double getAvg() const; // ��հ�
	size_t getMin() const; // �ּڰ�
	size_t getMax() const; // �ִ�
	void barChart() const; // ��Ʈ���
	void processGrade() const; 
}; // <�߿�> const�� ����Ұ�, ������ ���氡��
#endif GRADEBOOK_H