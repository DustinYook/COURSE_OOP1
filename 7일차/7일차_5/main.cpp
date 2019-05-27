/*=============================================================================================
* File Name: main.cpp
* Description:
* - This program is designed to generate GPA data
* Programmed by YOOK DONGHYUN (12131819)
* Last updated: December 28, 2017 (by YOOK DONGHYUN / Dustin)
* =============================================================================================
* Version Control (Explain updates in detail)
* =============================================================================================
* Updated By Date (YYYY/MM/DD) Version Remarks
* Dustin 2017/12/28, 1.1, divide-by-zero exception handling is added.
* ============================================================================================*/

#include "GradeBook.h"

int main()
{
	///* 과목명 입력처리 */
	//cout << "Enter subject name : "; // prompt
	//string subjectName;
	//cin >> subjectName;

	///* 객체생성 및 프로그램시작 */
	//GradeBook myGradeBook(subjectName); // 객체생성
	//myGradeBook.displayMessage(subjectName);

	///* 과목성적 입력처리 */
	//myGradeBook.determineClassAverage();
	GradeBook gb("C++");
	gb.inputGrade();
	gb.displayGrade();

	system("pause");
}