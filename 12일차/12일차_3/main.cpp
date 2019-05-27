// main.cpp: 프로그램 실행부
#include "GradeBook.h"

int main()
{
	array<size_t, GradeBook::STUDENTS> list = 
	{
		87, 68, 94, 100, 83, 
		78, 85, 91, 76, 87
	};
	GradeBook gb("C++", list); // 객체생성
	gb.processGrade(); // 함수실행
	system("pause");
}