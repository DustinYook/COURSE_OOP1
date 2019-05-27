// 프로그램 목적: 최댓값, 최솟값 구하는 함수에 대한 실습
#include "GradeBook.h"

int main()
{
	/* 과목명 입력처리 */
	cout << "Enter subject name : ";
	string subjectName;
	cin >> subjectName;

	/* 객체생성 및 프로그램시작 */
	GradeBook myGradeBook(subjectName);
	myGradeBook.displayMessage(subjectName);

	/* 과목성적 입력처리 */
	//myGradeBook.determineClassAverage();
	
	/* 새로 작성된 부분 */
	myGradeBook.inputGrade();
	myGradeBook.displayReport();

	system("pause");
}