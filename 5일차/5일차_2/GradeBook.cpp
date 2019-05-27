#include "GradeBook.h"

void GradeBook::displayMsg(string name) const
{
	cout << "Welcome to the Grade Book for " << getCourseName() << endl;
}
void GradeBook::setCourseName(string name)
{
	/* validity checking */
	// 1) �̸��� 5�� �̳��� ���
	if (name.size() <= 5) 
		courseName = name; 
	// 2) �̸��� 5�� �ʰ��� ���
	else 
	{
		courseName = name.substr(0, 5); // substr�� �κй��ڿ��� ������� 
		cerr << "[warning] The name exceeds designated length.\a" << endl;
		cerr << name << " -> " << courseName << endl;
	}
}
string GradeBook::getCourseName() const
{
	// ����) �Լ��� const�� ���� ���
	// 1) ���� ����: �Լ��� local variable
	int changeable;
	changeable = 0;
	// 2) ������ �Ұ����� ���� �Լ��� ���� Ŭ������ member variable
	// courseName = "C++";
	return courseName;
}