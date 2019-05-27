#include "GradeBook.h"

GradeBook::GradeBook()
{
	courseName = "courseName";
}
void GradeBook::displayMessage(string name) const
{
	cout << "Welcome to the Grade Book for " << getName() << endl;
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