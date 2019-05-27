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
	/* 새로 작성된 부분 */
	int maxGrade;
	int minGrade;
public:
	explicit GradeBook(string);
	void setCourseName(string);
	string getCourseName() const;
	void displayMessage(string) const;
	void determineClassAverage() const;
	/* 새로 작성된 부분 */
	void inputGrade(); // const 안 붙임 -> 값 수정 필요
	int maximum(int, int, int) const; // 매개변수리스트에서는 타입만 중요
	int minimum(int, int, int) const; // 여기의 인수는 formal parameter
	void displayReport() const;
};
#endif GRADEBOOK_H