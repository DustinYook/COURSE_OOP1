// 프로그램 설명: 재사용성을 위한 파일분리처리에 대한 실습
#include "GradeBook.h" // 사용자정의헤더(GradeBook.h)와 연결 
// 전처리기: 컴파일 전에 해당내용 복사본을 메모리에 올려줌
// < > : 시스템라이브러리 (C++ Standard Library)
// " " : 사용자정의라이브러리 (User-defined Library)

int main()
{
	GradeBook myGradeBook; // 디폴트생성자 호출
	
	/* 입력처리 */
	cout << "Enter subject name : "; // 입력 프롬프트
	string courseName;
	getline(cin, courseName); // <string>에 정의된 라이브러리함수
	myGradeBook.setName(courseName);

	/* 출력처리 */
	myGradeBook.displayMessage(courseName);

	/* 기본처리 */
	cout << endl;
	system("pause");
}
