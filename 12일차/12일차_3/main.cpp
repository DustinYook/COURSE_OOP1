// main.cpp: ���α׷� �����
#include "GradeBook.h"

int main()
{
	array<size_t, GradeBook::STUDENTS> list = 
	{
		87, 68, 94, 100, 83, 
		78, 85, 91, 76, 87
	};
	GradeBook gb("C++", list); // ��ü����
	gb.processGrade(); // �Լ�����
	system("pause");
}