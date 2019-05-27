#pragma once // 한번만 컴파일해서 갖고 있음 -> 중복방지
// #pragma once와 동일한 구문
#ifndef GRADEBOOK_H // 헤더파일이 정의 안된 경우
#define GRADEBOOK_H
#include <iostream>
#include <string>
using namespace std;
/* Class Definition */
class GradeBook
{
private:
	string courseName;
public:
	explicit GradeBook();
	GradeBook(string n) :courseName(n) { cout << "생성자 호출" << endl; }
	void displayMessage(string) const;
	void setName(string);
	string getName() const;
};
#endif GRADEBOOK_H