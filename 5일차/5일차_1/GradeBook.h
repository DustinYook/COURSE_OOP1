#pragma once // �ѹ��� �������ؼ� ���� ���� -> �ߺ�����
// #pragma once�� ������ ����
#ifndef GRADEBOOK_H // ��������� ���� �ȵ� ���
#define GRADEBOOK_H
#include <iostream>
#include <string>
using namespace std;
/* Class Definition */
class GradeBook
{
private:
	string courseName;
public:
	explicit GradeBook();
	GradeBook(string n) :courseName(n) { cout << "������ ȣ��" << endl; }
	void displayMessage(string) const;
	void setName(string);
	string getName() const;
};
#endif GRADEBOOK_H