// 프로그램 설명: Average를 산출하는 멤버함수의 추가 + 인원수가 정해진 경우
#include "GradeBook.h"
#include <iostream>
using namespace std;

int main()
{
	/* 과목명 입력처리 */
	cout << "Enter subject name : "; // user input prompt
	string subjectName;
	cin >> subjectName;

	/* 객체생성 및 프로그램시작 */
	GradeBook myGradeBook(subjectName); // generate object
	myGradeBook.displayMessage(subjectName);

	/* 과목성적 입력처리 */
	myGradeBook.determineClassAverage();

	system("pause");
}
// Tip) 반복횟수 아는 경우: for문 / 반복횟수 모르는 경우: while문
// 소스를 쭉 한 번 읽어보기 -> 생각나는 대로 먼저 구현해보기 -> 표현해보기 -> 책의 내용과 비교