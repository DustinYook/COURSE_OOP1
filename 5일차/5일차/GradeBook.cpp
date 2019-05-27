// GradeBook.cpp : GradeBook.h의 멤버함수 구현
#include "GradeBook.h"

/* member function implementation */
GradeBook::GradeBook()
{
	//courseName = "courseName";
}
GradeBook::GradeBook(string n) :courseName(n) 
{ 
	cout << "생성자 호출" << endl; 
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