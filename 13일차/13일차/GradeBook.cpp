// GradeBook.cpp: 클래스 구현
#include "GradeBook.h"

GradeBook::GradeBook(string cn, array<array<size_t, TESTS>, STUDENTS>& sr)
	: courseName(cn), studentRecord(sr)
{
	cout << "Welcome to the grade book for " << (this->courseName) << "!\n" << endl;
}

double GradeBook::getAverage(const array<size_t, TESTS>& record) const
{
	size_t total = 0;
	for (const size_t& buff : record)
		total += buff;
	return static_cast<double>(total) / TESTS;
}

size_t GradeBook::getMinimum() const
{
	size_t minimum = studentRecord.at(0).at(0);
	for (auto const& row : studentRecord)
	{
		for (auto const& element : row)
		{
			if (minimum > element)
				minimum = element;
		}
	} return minimum;
}

size_t GradeBook::getMaximum() const
{
	size_t maximum = studentRecord.at(0).at(0);
	for (auto const& row : studentRecord)
	{
		for (auto const& element : row)
		{
			if (maximum < element)
				maximum = element;
		}
	} return maximum;
}

void GradeBook::displayGrade() const
{
	/* 범례출력 */
	cout << "The grades are: \n" << endl;
	cout << setw(10) << left << "          ";
	for (size_t i = 0; i < TESTS; i++)
		cout << "  " << setw(4) << left << "Test" << setw(2) << right << (i + 1);
	cout << "  " << setw(7) << right << "Average" << endl;

	/* 성적 레코드 출력 */
	for (size_t i = 0; i < studentRecord.size(); i++)
	{
		cout << setw(8) << left << "Student";
		cout << setw(2) << right << (i + 1);
		for (size_t j = 0; j < studentRecord.at(0).size(); j++)
		{
			cout << setw(2) << right << "  ";
			cout << setw(6) << right << studentRecord.at(i).at(j);
		}
		cout << setw(2) << right << "  ";
		cout << setprecision(2) << fixed;
		cout << setw(7) << right << getAverage(studentRecord.at(i)) << endl;
	} cout << endl;
}

void GradeBook::displayChart() const
{
	cout << "Overall grade distribution: " << endl;
	const size_t SPLIT = 11;
	array<size_t, SPLIT> section = {}; // 점수구간
	for (auto const& row : studentRecord)
		for (auto const& element : row)
			section[element / 10]++;
	for (size_t i = 0; i < section.size(); i++)
	{
		/* 범례출력 */
		if (i == section.size() - 1)
			cout << setw(7) << right << "100: ";
		else
			cout << setw(2) << right << (i * 10) << "-" << setw(2) << right << (i * 10 + 9) << ": ";

		/* 차트출력 */
		for (size_t j = 0; j < section.at(i); j++)
			cout << "* ";
		cout << endl;
	}
}

void GradeBook::runGradeBook()
{
	displayGrade();
	cout << "Lowest grade in the grade book is " << getMinimum() << endl;
	cout << "Highest grade in the grade book is " << getMaximum() << endl << endl;
	displayChart();
}