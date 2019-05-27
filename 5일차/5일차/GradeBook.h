// GradeBook.h : 클래스 인터페이스가 정의된 파일
#pragma once // 한번만 컴파일해서 갖고 있음 (목적: 중복방지)
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
	/* public interface */
	explicit GradeBook(); // 디폴트생성자
	GradeBook(string); // 일반생성자(생성자오버로딩)
	void displayMessage(string) const; // 메세지출력
	void setName(string); // Setters
	string getName() const; // Getters
};
#endif GRADEBOOK_H