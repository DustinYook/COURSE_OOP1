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
private:
	string courseName;
public:
	explicit GradeBook(string);
	void setCourseName(string);
	string getCourseName() const;
	void displayMessage(string) const;
	void determineClassAverage() const;
};
#endif GRADEBOOK_H