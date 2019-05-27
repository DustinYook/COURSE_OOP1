// GradeBook.cpp: 클래스 구현파일
#include "GradeBook.h"

/* 생성자 오버로딩 */
// 1) member initializer 방식
GradeBook::GradeBook(const string& cn, const array<size_t, STUDENTS>& g)
	:courseName(cn), grade(g)
{
	// 일반적으로 여기에 초기화 동작 기술
}
// 2) 일반적인 방식
//GradeBook::GradeBook(const string& name, const array<int, STUDENTS>& score)
//{ 
//	this->courseName = name;
//	this->grade;
//}

/* 성적출력함수 */
void GradeBook::printGrade() const
{
	cout << "The grades are: \n" << endl;
	for (size_t i = 0; i < grade.size(); i++)
	{
		cout << setw(8) << left << "Student ";
		cout << setw(2) << right << (i + 1) << ": ";
		cout << setw(3) << right << grade.at(i) << endl;
	} cout << endl;
}

/* 평균값 함수 */
double GradeBook::getAvg() const
{
	size_t sum = 0;
	for (size_t buff : grade)
		sum += buff;
	return static_cast<double>(sum) / STUDENTS; // <주의> 형변환!
}

/* 최솟값 함수 */
size_t GradeBook::getMin() const
{
	size_t min = grade.at(0); // 또는 매우 큰 값(999)로 설정
	for (size_t buff : grade)
	{
		if (min > buff)
			min = buff;
	} return min;
}

/* 최댓값 함수 */
size_t GradeBook::getMax() const
{
	size_t max = grade.at(0); // 또는 매우 작은 값(-999)으로 설정
	for (size_t buff : grade)
	{
		if (max < buff)
			max = buff;
	} return max;
}

/* 차트출력함수 */
void GradeBook::barChart() const
{
	cout << "Grade distribution: " << endl;
	// 1) 구간설정
	array<size_t, 11> section = {};

	// 2) 자료읽고 구간별 분류
	for (size_t i = 0; i < grade.size(); i++)
		section[grade.at(i) / 10]++;

	// 3) 차트출력
	for (size_t i = 0; i < section.size(); i++)
	{
		/* 범례출력 */
		if (i == section.size() - 1)
			cout << setw(5) << (i * 10) << ": ";
		else
			cout << setw(2) << (i * 10) << setw(1) << '-' << setw(2) << (i * 10 + 9) << ": ";
		for (size_t j = 0; j < section.at(i); j++)
			cout << "* ";
		cout << endl;
	}
}

/* 성적처리함수 */
void GradeBook::processGrade() const
{
	// 1) 성적출력
	printGrade();
	// 2) 평균값출력
	cout << "Class average is " << setprecision(2) << fixed << getAvg() << endl;
	// <주의> setprecision, fixed, <iomanip> 빠뜨리지 말 것!
	// 3) 최소값출력
	cout << "Lowest grade is " << getMin() << endl;
	// 4) 최대값출력
	cout << "Highest grade is " << getMax() << endl << endl;
	// 차트출력
	barChart();
}