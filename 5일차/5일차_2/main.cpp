// 프로그램 설명: validity checking에 대한 실습
#include "GradeBook.h"

int main()
{
	GradeBook myGradeBook; // 디폴트생성자 호출	
	cout << "Enter subject name : "; // 한글은 2byte
	string subjectName;
	cin >> subjectName;
	myGradeBook.setCourseName(subjectName);
	myGradeBook.displayMsg(subjectName);
	system("pause");
}