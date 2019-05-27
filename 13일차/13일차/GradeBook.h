// GradeBook.h: 클래스정의
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <iomanip> // setw()
#include <string> // string class
#include <array> // array class template
#include <cstddef> // size_t
using namespace std;
class GradeBook
{
public:
	static const size_t STUDENTS = 10;
	static const size_t TESTS = 3;
	explicit GradeBook(string, array<array<size_t, TESTS>, STUDENTS>&);
	double getAverage(const array<size_t, TESTS>&) const; // 평균
	size_t getMinimum() const; // 최솟값
	size_t getMaximum() const; // 최댓값
	void displayGrade() const; // 성적출력
	void displayChart() const; // 차트출력
	void runGradeBook();
private:
	array<array<size_t, TESTS>, STUDENTS> studentRecord; // 학생 성적 레코드
	string& courseName;
};
#endif