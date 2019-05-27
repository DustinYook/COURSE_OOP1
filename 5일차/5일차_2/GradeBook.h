#pragma once // 한번만 컴파일해서 갖고 있음 (중복방지)
#ifndef GRADEBOOK_H // #pragma once와 동일한 구문
#define GRADEBOOK_H
#include <iostream>
#include <string>
using namespace std;

/* class definition */
class GradeBook
{
private:
	string courseName;
public:
	void displayMsg(string) const;
	void setCourseName(string); // setter에는 const를 적으면 제기능 수행불가
	string getCourseName() const; // const의 의의: 실수로 인한 data corruption 방지
};
#endif GRADEBOOK_H