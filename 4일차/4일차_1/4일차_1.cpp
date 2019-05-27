// 프로그램 설명: 클래스와 객체생성에 대한 기초예제
#include <iostream>
#include <string> // getline 라이브러리 함수 정의 (istream에만 있는거 아님에 유의!)
using namespace std;

/* Class Definition */
class GradeBook // User-defined type (Abstract Data Type)
{
private: // Member Data - private keyword is Omissible (default value)
public: /* Member Function */
	void displayMessage(string) const; // execute operations
	void printTest() const; // can access private data through member functions
}; // 주의) 클래스는 세미콜론으로 끝맺음 - 손코딩때 주의!

/* Member Function Implementation */
void GradeBook::displayMessage(string name) const // 멤버함수 -> formal parameter(형식매개변수)
{
	cout << "Welcome to the Grade Book for " << name << endl;
	// string에 대한 연산자는 <iostream>에 정의되어 있지 않아 <string>을 추가해야 함 -> 함수오버로딩
}
void GradeBook::printTest() const // function header
{ // function body start
	cout << "TEST" << endl;
} // function body end

int main() // Automatically called by Operating System
{
	/* 객체생성방법 #1 */
	GradeBook myGradeBook; // stack에 객체생성	
	/* 객체생성방법 #2 */
	GradeBook* gPtr = new GradeBook(); // heap에 객체생성(동적할당) - 이름없이 공간만 생성
	
	string courseName;
	/* space가 delimiter가 아닌 입력함수 */
	cout << "과목명 입력 : "; // user input prompt
	getline(cin, courseName); // 주의) 이 함수는 <string>의 라이브러리함수임 
	// Tip) 띄어쓰기를 포함하는 입력에 쓰면 좋음
	/* space가 delimiter가 되는 입력함수 */
	cout << "과목명 입력 : "; // user input prompt
	cin >> courseName; // cin은 space가 delimiter
	// Point) 두 함수의 차이점에 대해서 명확히 알아두어야 함!
	
	/* 객체생성방법 #1에 따른 멤버함수호출 */
	myGradeBook.displayMessage(courseName); // 도트연산자를 통해 호출
	/* 객체생성방법 #2에 따른 멤버함수호출 */
	gPtr->displayMessage(courseName); // 포인터의 경우 화살표연산자를 통해 호출
	(*gPtr).displayMessage(courseName); // 역참조연산자를 붙이면 참조객체가 되므로 도트연산자 사용가능
	// Point) 두 객체생성방식의 차이점에 대해서 명확히 알아두어야 함!
	
	system("pause");
}
// Actual Parameter(실매개변수): 함수호출부에 있는 파라미터프로파일
// Formal Parameter(형식매개변수): 함수원형에 있는 파라미터프로파일
// 실매개변수와 형식매개변수의 파라미터프로파일은 반드시 일치해야 syntax error가 발생하지 않는다.
// Point) Data Type is a range of value and a set of operations 
// ex) int는 %operator포함하나 double은 그렇지 않음