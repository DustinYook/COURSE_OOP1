// 프로그램 설명: 기본 프로그램 연습
#include <iostream> // 입출력스트림 클래스
int x = 10; // 전역변수 (Global Variable)

int main()
{ // 함수 시작: 함수 종료까지가 함수 body
	// 1) Scope Operator
	int x = 100; // 지역변수(Local Variable)
	std::cout << "Local Variable: " << x << std::endl; // 지역변수접근
	std::cout << "Global Variable: " << ::x << std::endl; // 전역변수접근(::는 Scope연산자)

	// 2) Escape Sequence
	std::cout // std는 namespace, 자바의 package와 유사
		<< // <<는 stream insertion operator(스트림 삽입 연산자)
	"Welcome to C++!\n"; // 줄 바꿈: \n(newline) 또는 std::endl 
	std::cout << "a\"b\"c" << "\t" << "t\'es\'t" << std::endl; // \"는 큰따옴표, \'는 작은따옴표
	std::cout << "123" << "\t" << "45678" << std::endl; // \t는 tab
	std::cout << "This is same as enter" << "\n\r" << "\\" << "\a" << std::endl; // \r은 carriage return, \\는 \, \a는 경고음

	// 3) Comment
	// 이것은 한줄 주석입니다.
	/*
	이것은 여러줄 주석입니다.
	주석은 프로그램의 실행에 아무런 영향을 주지 않습니다.
	*/
	// <ctrl> + K + U: 주석해제, <ctrl> + K + C: 주석설정
	
	system("pause");
	// return 0; // OS에 정상종료됨을 알림(디폴트값이므로 생략가능)
} // 함수 종료
// Tip) 자주 사용하는 라이브러리는 따로 헤더파일로 만들어서 include하는 것이 편함