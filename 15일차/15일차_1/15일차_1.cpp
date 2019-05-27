// 프로그램 목적: 문자열에 대한 응용실습
#include <iostream>
#include <string> // 전역함수 getline() 정의
#include <istream> // 멤버함수 getline() 정의
using namespace std;
#define _CRT_SECURE_NO_WARNINGS  // secure warning 제거

int main()
{
	/* 각 헤더에 따른 getline함수 */
	{ 
		// getline함수는 일반적으로 띄어쓰기를 포함하여 입력가능
		string str;
		cin >> str; // >>(insertion operator)는 띄어쓰기를 구분자로 인식
		cout << str << endl;

		// 1) <string>에 정의된 전역함수 getline()
		string str1;
		getline(cin, str1); // 전역함수이기 때문에 도트연산자 없이 사용
		// <주의> char의 배열명은 사용불가
		cout << str1 << endl; // 형식: getline(istream 객체, string 객체);

		// 2) <istream>에 정의된 멤버함수 getline()
		char str2[10]; 
		cin.getline(str2, 10, '\n'); // 멤버함수이기 때문에 도트연산자를 사용
		// <주의> string의 객체명은 사용불가
		cout << str2 << endl; // 형식: getline(char*, 크기, 구분자);
	} cout << endl;

	/* 문자열의 복사 */
	{
		// 1) 문자상수의 배열방식
		char str1[10] = "123456789";
		char str2[10];
		strcpy_s(str2, str1); // strcpy()는 security warning 발생
		// str2 = str1; // 배열방식은 이렇게 바로 대입연산 불가
		// strcpy()의 security warning 해결방법
		// 1) _s를 붙임, 즉, strcpy_s(dest, src);를 사용
		// <참고> scanf_s();는 scanf();와 매개변수 개수가 다름 -> <F1>을 이용
		// 2) #define _CRT_SECURE_NO_WARNINGS를 사용
		// 3) #pragma warning(disable:4996)를 사용
		// 4) 프로젝트 - 속성 - 전처리기 - 전처리기정의: ;_CRT_SECURE_NO_WARNINGS 붙여넣기
		cout << str1 << " = " << str2 << endl;

		// 2) string 클래스 방식
		string str3 = "123456789";
		string str4;
		str4 = str3; // string 클래스 방식은 바로 대입연산 가능 (객체복사)
		cout << str3 << " = " << str4 << endl;
	} cout << endl;

	/* 문자열의 배열 */
	{
		// 1) 문자상수의 배열방식
		char str1[3][7] = { "rabbit", "tiger", "cow" }; // 2차원 배열형태
		cout <<	str1[0] << endl; // 결과값: rabbit

		// 2) 포인터배열 방식 (배열과 포인터는 호환가능)
		const char* str2[3] = { "rabbit", "tiger", "cow" }; // 포인터배열 형태
		cout << *(str2 + 1) << endl; // 결과값: tiger
		cout << str2[1] << endl; // 결과값: tiger

		// 3) string 클래스 방식
		string str3[] = { "rabbit", "tiger", "cow" }; // string 배열형태
		cout << str3[0] << endl;
	}

	/* 실습결과 요약 */ 
	// string 클래스 방식을 쓰는 것이 더 바람직함
	// char의 배열형태는 보이는 것보다 한 자 더 들어가서 직관적이지 않고 불편함
	// 2차원 배열은 문자열 다룰 때 가장 많이 사용 -> 포인터 개념도 같이 
	// 앞으로는 라이브러리의 문제 -> 필요에 따라 학습해서 사용하면 됨

	system("pause");
}