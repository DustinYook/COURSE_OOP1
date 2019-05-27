/*=============================================================================================
* File Name: GradeBook.h
* Description:
* - This program is designed to deal with grade data for the class
* Programmed by YOOK DONGHYUN (12131819)
* Last updated: December 28, 2017 (by YOOK DONGHYUN / Dustin)
* =============================================================================================
* Version Control (Explain updates in detail)
* =============================================================================================
* Updated By Date (YYYY/MM/DD) Version Remarks
* Dustin 2017/12/28, 1.1, divide-by-zero exception handling is added.
* ============================================================================================*/

#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#define MAX 10
using namespace std;

class GradeBook
{
private: // 멤버변수는 멤버함수 간 공유가능
	string courseName;
	int grade[5];
public:
	explicit GradeBook(string);
	void setCourseName(string);
	string getCourseName() const;
	void displayMessage(string) const;
	void determineClassAverage() const;
	void inputGrade(); // 성적입력함수
	void displayGrade() const; // 성적출력함수
};
#endif GRADEBOOK_H