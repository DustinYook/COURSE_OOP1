#pragma once // �ѹ��� �������ؼ� ���� ���� (�ߺ�����)
#ifndef GRADEBOOK_H // #pragma once�� ������ ����
#define GRADEBOOK_H
#include <iostream>
#include <string>
using namespace std;

/* class definition */
class GradeBook
{
private:
	string courseName;
public:
	void displayMsg(string) const;
	void setCourseName(string); // setter���� const�� ������ ����� ����Ұ�
	string getCourseName() const; // const�� ����: �Ǽ��� ���� data corruption ����
};
#endif GRADEBOOK_H