// GradeBook.cpp : GradeBook.h�� ����Լ� ����
#include "GradeBook.h"

/* member function implementation */
GradeBook::GradeBook()
{
	//courseName = "courseName";
}
GradeBook::GradeBook(string n) :courseName(n) 
{ 
	cout << "������ ȣ��" << endl; 
}
void GradeBook::displayMessage(string name) const
{
	// cout << "Welcome to the Grade Book for " << getName() << endl;
	cout << "Welcome to the Grade Book for " << courseName << endl;
}
void GradeBook::setName(string n)
{
	courseName = n;
}
string GradeBook::getName() const
{
	return courseName;
}