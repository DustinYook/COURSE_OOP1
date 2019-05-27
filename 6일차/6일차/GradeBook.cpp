#include "GradeBook.h"

GradeBook::GradeBook(string name)
{
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
	int total = 0;
	unsigned int gradeCounter = 0;
	while (gradeCounter < MAX) // 조건 true일 때 루프
	{
	LABEL:
		/* 성적 입력처리 */
		int tempScore;
		try
		{
			cout << "Enter the grade #" << (gradeCounter + 1) << " : "; // prompt
			cin >> tempScore;
			if (tempScore < 0 || tempScore > 100)
				throw exception("[warning] wrong input! \a");
		}
		catch (exception ex)
		{
			cerr << endl << ex.what() << endl << endl;
			goto LABEL;
		}
		total += tempScore;
		gradeCounter++; // cnt=cnt+1; 또는 cnt+=1; 또는 ++cnt; (모두 같은표현)
	}
	cout << "class total: " << total << endl;
	double average = static_cast<double>(total) / gradeCounter; // Tip) readability 향상위해 가까이 선언
	cout << "class average: " << fixed << setprecision(2) << average << endl; 
	return; // 제어만 넘어감 - 프로시저(procedure): 반환값 있으면 함수 (C++에서는 구분안함) 
}