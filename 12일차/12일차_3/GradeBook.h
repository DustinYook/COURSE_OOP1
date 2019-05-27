// GradeBook.h: 클래스 헤더파일
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <iomanip> // setw()
#include <string> // string template class
#include <array> // array template class
#include <cstddef> // size_t
using namespace std;
class GradeBook
{
public: // public: 클래스외부 접근허용
	static const size_t STUDENTS = 10; 
private:
	string courseName;
	array<size_t, STUDENTS> grade;
public: // <주의> const 붙으면 무조건 값 변경불가 (참조 붙어도 변경불가!)
	explicit GradeBook(const string& name, const array<size_t, STUDENTS>& grade); 
	void printGrade() const; // 성적출력
	double getAvg() const; // 평균값
	size_t getMin() const; // 최솟값
	size_t getMax() const; // 최댓값
	void barChart() const; // 차트출력
	void processGrade() const; 
}; // <중요> const는 변경불가, 참조는 변경가능
#endif GRADEBOOK_H