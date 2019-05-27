#include "GradeBook.h"

int main()
{
	/* 과목명 입력처리 */
	cout << "Enter subject name : "; // prompt
	string subjectName;
	cin >> subjectName;

	/* 객체생성 및 프로그램시작 */
	GradeBook myGradeBook(subjectName); // 객체생성
	myGradeBook.displayMessage(subjectName);

	/* 과목평점 입력처리 */
	myGradeBook.inputGrade();
	myGradeBook.displayGrade();

	system("pause");
}