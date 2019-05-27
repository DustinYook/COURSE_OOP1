// GradeBook.h : Ŭ���� �������̽��� ���ǵ� ����
#pragma once // �ѹ��� �������ؼ� ���� ���� (����: �ߺ�����)
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
	/* public interface */
	explicit GradeBook(); // ����Ʈ������
	GradeBook(string); // �Ϲݻ�����(�����ڿ����ε�)
	void displayMessage(string) const; // �޼������
	void setName(string); // Setters
	string getName() const; // Getters
};
#endif GRADEBOOK_H