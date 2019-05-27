/*=============================================================================================
* File Name: GradeBook.cpp
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

#include "GradeBook.h"

GradeBook::GradeBook(string name)
{
	setCourseName(name);
}
void GradeBook::setCourseName(string name)
{
	/* validation, validity checking */
	if (name.size() <= 5)
		courseName = name;
	else
	{
		courseName = name.substr(0, 5);
		cerr << "[warning] The name exceeds designated length.\a" << endl;
		cerr << name << " -> " << courseName << endl;
	}
}
string GradeBook::getCourseName() const
{
	return courseName;
}
void GradeBook::displayMessage(string name) const
{
	cout << "Welcome to the Grade Book for " << getCourseName() << "!\n" << endl;
}
void GradeBook::determineClassAverage() const
{
	/* initialization */
	unsigned int gradeCounter = 0; // unsigned의 경우 항상 양수만 표시
	unsigned int total = 0;

	/* input procedure */
	cout << "[Notice] Enter -1 to end an input process" << endl; // user-input prompt
	while (gradeCounter != -1) // gradeCounter: sentinel value
	{
	LABEL:
		int tempScore;
		try
		{
			cout << "Enter the grade #" << (gradeCounter + 1) << " : ___\b\b\b"; // 입력 필드를 지정하는 효과
			cin >> tempScore;
			if (tempScore == -1)
				break;
			else if (tempScore < 0 || tempScore > 100)
				throw exception("\n[warning] wrong input!\a\n");
		}
		catch (exception ex)
		{
			cerr << ex.what() << endl;
			goto LABEL;
		}
		total += tempScore;
		gradeCounter++;
	} cout << "==============================" << endl;
	/* divide-by-zero exception handling */
	if (gradeCounter != 0)
	{
		double average = static_cast<double>(total) / gradeCounter; // explicit conversion (casting)
		cout << "Student Number: " << gradeCounter << endl;
		cout << "Total Score: " << total << endl;
		cout << "Average Score: " << fixed << setprecision(2) << average << endl;
	}
	else
		cout << "Nothing to process\a" << endl;
	cout << "==============================" << endl;
	cout << "[System] End the program" << endl;
}