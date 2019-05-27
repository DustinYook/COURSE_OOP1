// 프로그램 목적: AND, OR 연산자의 기초와 단락회로평가에 대한 실습
#include <iostream>
using namespace std;

int main()
{
	/* 기초적인 &&(AND) 연산 */
	{
		int a = 1, b = 2, c = 3, d = 4;
		if (a < b && c > d) // control stmt는 false 
			cout << "AAA" << endl; // 출력안함
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
		cout << "d = " << d << endl;
	} cout << endl;

	/* 기초적인 ||(OR) 연산 */
	{
		int a = 1, b = 2, c = 3, d = 4;
		if (a < b || c > d) // control stmt는 true 
			cout << "BBB" << endl; // 출력
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
		cout << "d = " << d << endl;
	} cout << endl;

	/* &&(AND)연산자의 단락회로평가 */
	{
		int a = 1, b = 2, c = 3, d = 4;
		if ((a++ > b++) && (c++ > d++)) // 앞이 false인 경우
			cout << "AAA" << endl; // 실행안함
		// 연산자우선순위: postfix_++ > '>' > &&
		// 라인 31번 평가: a = a; -> b = b; -> c = c; -> d = d;
		// -> a > b의 값은 false -> a = a + 1; -> b = b + 1; -> 평가종료 
		// -> 라인 32번으로 이동 -> 출력 
		cout << "a = " << a << endl; // 결과값: 2
		cout << "b = " << b << endl; // 결과값: 3
		cout << "c = " << c << endl; // 결과값: 3
		cout << "d = " << d << endl; // 결과값: 4
	} cout << endl;
	// AND: 앞이 false -> 뒤 평가 X (short-circuit evaluation을 제공)
	// 주의) bitwise operator &는 short-circuit evaluation을 제공하지 않음

	/* ||(OR)연산자의 단락회로평가 */
	{
		int a = 1, b = 2, c = 3, d = 4;
		if ((a++ < b++) || (c++ > d++)) // 앞이 true인 경우
			cout << "AAA" << endl; // 실행함
		// 연산자우선순위: postfix_++ > '<' > ||
		// 라인 48번 평가: a = a; -> b = b; -> c = c; -> d = d;
		// -> a < b의 값은 true -> a = a + 1; -> b = b + 1; -> 평가종료 
		// -> 라인 32번으로 이동 -> 출력 
		cout << "a = " << a << endl; // 결과값: 2
		cout << "b = " << b << endl; // 결과값: 3
		cout << "c = " << c << endl; // 결과값: 3
		cout << "d = " << d << endl; // 결과값: 4
	} cout << endl;
	// OR: 앞이 true -> 뒤 평가 X (short-circuit evaluation을 제공)
	// 주의) bitwise operator |는 short-circuit evaluation을 제공하지 않음

	/* 요약정리 */
	// AND: 앞 거짓 -> 뒤 평가 X / OR: 앞 참 -> 뒤 평가 X
	// & 또는 |는, 즉, 비트연산자는 단락회로평가 제공하지 않음
	
	system("pause");
}