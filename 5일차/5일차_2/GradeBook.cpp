#include "GradeBook.h"

void GradeBook::displayMsg(string name) const
{
	cout << "Welcome to the Grade Book for " << getCourseName() << endl;
}
void GradeBook::setCourseName(string name)
{
	/* validity checking */
	// 1) 이름이 5자 이내인 경우
	if (name.size() <= 5) 
		courseName = name; 
	// 2) 이름이 5자 초과인 경우
	else 
	{
		courseName = name.substr(0, 5); // substr은 부분문자열로 집어넣음 
		cerr << "[warning] The name exceeds designated length.\a" << endl;
		cerr << name << " -> " << courseName << endl;
	}
}
string GradeBook::getCourseName() const
{
	// 주의) 함수에 const가 붙은 경우
	// 1) 수정 가능: 함수의 local variable
	int changeable;
	changeable = 0;
	// 2) 수정이 불가능한 것은 함수가 속한 클래스의 member variable
	// courseName = "C++";
	return courseName;
}