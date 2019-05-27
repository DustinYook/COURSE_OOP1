#include "GradeBook.h"

GradeBook::GradeBook(string name)
{
	for (int i = 0; i < 5; i++)
		grade[i] = 0;
	setCourseName(name);
}
void GradeBook::setCourseName(string name)
{
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
		double average = static_cast<double>(total) / gradeCounter;
		cout << "Student Number: " << gradeCounter << endl;
		cout << "Total Score: " << total << endl;
		cout << "Average Score: " << fixed << setprecision(2) << average << endl;
	}
	else
		cout << "Nothing to process\a" << endl;
	cout << "==============================" << endl;
	cout << "[System] End the program" << endl;
}
void GradeBook::inputGrade()
{
	char gradeInput;
	cout << "[Notice] Input Range: A ~ F" << endl;
	cout << "Enter Your Grade : ";
	bool flag = false;
	while ((gradeInput = cin.get()) != EOF) // 표현방식 중요
	{
		if (flag)
			cout << "Enter Your Grade : ";
		flag = !flag;
		switch (gradeInput)
		{
		case 'A':
		case 'a':
			grade[0] += 1;
			break;
		case 'B':
		case 'b':
			grade[1] += 1;
			break;
		case 'C':
		case 'c':
			grade[2] += 1;
			break;
		case 'D':
		case 'd':
			grade[3] += 1;
			break;
		case 'F':
		case 'f':
			grade[4] += 1;
			break;
		case '\n': // 아무처리 안함
		case '\t':
		case ' ':
			break;
		default:
			cerr << "\n\n[warning] Wrong input\n" << endl;
			cout << "Enter Your Grade : ";
		}
	}
}
void GradeBook::displayGrade() const
{
	cout << setw(10) << left << "Grade" << setw(10) << "Count" << endl;
	cout << setw(10) << left << "A : " << setw(10) << grade[0] << endl;
	cout << setw(10) << left << "B : " << setw(10) << grade[1] << endl;
	cout << setw(10) << left << "C : " << setw(10) << grade[2] << endl;
	cout << setw(10) << left << "D : " << setw(10) << grade[3] << endl;
	cout << setw(10) << left << "F : " << setw(10) << grade[4] << endl;
}