// 프로그램 설명: 연산자에 대한 기본적인 예제
#include <iostream>
using namespace std;

int main()
{
	/* Assignment Expression */
	int num1, num2;
	num1 = num2 = 0; // num2 = 0; -> num1 = num2; 
	// 주의) 우결합법칙(평가방향: 오른쪽->왼쪽)
	// '='는 이항연산자이며 우결합
	// 2^3^4 역시 우결합법칙이 적용: 3^4 -> 2^81
	// num1 = num1 + num2 + num1;는 우결합

	cout << "정수 2개 입력: "; // prompt: user input directive
	cin >> num1 >> num2;

	/* Equality Operator */
	if (num1 == num2)
		cout << num1 << " == " << num2 << endl;
	else
		cout << num1 << " != " << num2 << endl;
	/* Relational Operator */
	cout << num1 << ((num1 > num2) ? " > " : " <= ") << num2 << endl;
	// Equality와 Relational의 return value는 boolean이다.
	
	/* Operator Precedence */
	cout << (num1 > num2 == true) << endl; // 우선순위: Relational > Equality 
	// Expression Evaluation
	// 1) 연산자 우선순위 Relational이 더 높음: num1 > num2 평가 -> true/false
	// 2) Equality 연산식 평가:  true/false == true -> true/false

	system("pause");
}