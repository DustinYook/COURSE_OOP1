// 프로그램 설명: 클래스와 생성자의 간단한 예제
#include <iostream>
#include <string>
using namespace std;

/* Class Definition */
class GradeBook
{
private: // 필드를 public위에 위치하는 것이 convention
	string courseName;
public: 
	// GradeBook() {} // implicit default constructor: 객체생성, 파라미터 없음 
	// 생성자가 정의되지 않은 경우 컴파일러에 의해 자동으로 생성
	explicit GradeBook() { courseName = "courseName"; } 
	// explicit default constructor: 사용자에 의해 명시적으로 작성, 멤버변수의 초기화수행
	GradeBook(string n) :courseName(n) { cout << "생성자 호출" << endl;  } 
	// GradeBook(string n) { courseName = n; } // 윗 줄의 표현식은 이 표현식과 같음
	// :courseName(n)은 member-initializer방식으로 초기화하는 방법
	// 위에 explicit GradeBook과 동일한 명칭을 가졌으나 파라미터프로파일이 다른 생성자 -> 생성자오버로딩
	void displayMessage(string) const;
	void setName(string);
	string getName() const;
}; 
void GradeBook::displayMessage(string name) const
{
	// 함수이용: 시간이 더 걸림 (외부접근시 필수적)
	cout << "Welcome to the Grade Book for " << getName() << endl; 
	// 멤버직접접근: 시간이 짧게 걸림 (외부접근시 불가)
	cout << "Welcome to the Grade Book for " << courseName << endl;
}
void GradeBook::setName(string n) 
{
	courseName = n;
}
string GradeBook::getName() const
{
	return courseName;
}

int main()
{
	GradeBook myGradeBook; // Default Constructor Call
	// GradeBook myGradeBook(); 
	// 에러발생(아무것도 초기화 되지 않음)
	cout << myGradeBook.getName() << endl;
	GradeBook gb("c++"); // Parameterized Constructor Call
	string courseName;
	cout << "과목명 입력 : "; 
	getline(cin, courseName); // <string>에 정의된 라이브러리함수
	myGradeBook.setName(courseName);
	myGradeBook.displayMessage(courseName);
	system("pause");
}