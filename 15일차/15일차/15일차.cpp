// 프로그램 목적: C와 C++스타일의 문자열 사용방법에 대한 기초실습
#include <iostream>
#include <cstring> // C가 붙으면 C언어에서 넘어온 헤더 
#include <string> // c가 들어가지 않은 것은 C++ 헤더
using namespace std;

int main()
{
	/* 문자배열과 list initialization */
	{
		// 1) ASCII ZERO가 명시되지 않은 경우
		char str1[] = { 'a', 'b', 'c' }; // 문자열을 문자상수의 배열로 인식
		cout << str1[0] << endl; // 0번째 원소에 저장된 'a'가 출력
		cout << str1 << endl;
		// ASCII ZERO가 명시되지 않아 시작주소저장값 'a'부터 뒤의 메모리 내용이 같이 찍힘
		//
		// 2) ASCII ZERO가 명시된 경우
		char str2[] = { 'a', 'b', 'c', '\0' }; // 문자상수 '\0'을 NULL 또는 ASCII ZERO라 함
		// 01_배열명을 이용한 출력
		cout << str2 << endl; // 출력할 때 NULL을 만나면 문자열의 끝임을 인지함 (EOF와 비슷)
		// 02_for문을 이용한 출력
		for (size_t i = 0; i < 4; i++)
			cout << str2[i];
		cout << endl;
	} cout << endl;

	/* 문자배열과 string literal */
	{ // <주의> 배열은 크기가 FIXED(고정) -> 크기 변경 절대불가!
		char str[] = "abc"; // "abc"를 string literal(constant)라고 함
		// string literal(constant)를 문자배열에 복사대입
		cout << sizeof(str) << endl; // 우리는 "abc" 3글자를 넣었는데 4글자가 나옴
		// 배열방식의 문제: 실제 문자열은 3개이나 실제로는 4개로 인식(묵시적 NULL 떄문)
		cout << str << endl;
		str[1] = 'B'; // 문자열 배열의 1번 원소의 저장값을 'B'로 갱신 - 결과값: aBc
		cout << str << endl;
		const char* strPtr = "abc"; // 포인터와 배열명은 호환가능
		cout << strPtr << endl; // string literal은 READ_ONLY
		cout << sizeof(strPtr) << endl;
	} cout << endl;

	/* string 클래스를 이용한 방법 */
	{
		string str = "abc";
		cout << str << endl; // <string>에 오버로딩함수 포함
		cout << str.size() << " = " << str.length() << endl; // C와는 다르게 NULL이 카운트되지 않음
		// length(), size(): 원소개수 출력
		string strCopy = str; // 객체복사 가능 (얕은 복사)
		cout << strCopy << endl;
		str.insert(2, "AB"); // string의 2번째 원소시작부분에 "AB"를 삽입
		cout << boolalpha << (str == strCopy) << endl; // 객체간 비교가능
	}

	system("pause");
}