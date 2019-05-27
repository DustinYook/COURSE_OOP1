#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

int main()
{
	/* 산술연산자 */
	int x1 = 10;
	int y1 = 20; // 6, 7번을 합쳐서 int x = 10, y = 20;으로 써도 동일한 의미
	cout << x1 << " + " << y1 << " = " << (x1 + y1) << endl; // 덧셈연산자
	cout << x1 << " - " << y1 << " = " << (x1 - y1) << endl; // 뺄셈연산자
	cout << x1 << " * " << y1 << " = " << (x1 * y1) << endl; // 곱셈연산자
	cout << x1 << " / " << y1 << " = " << (x1 / y1) << endl; // 나눗셈연산자(몫) 
	cout << x1 << " % " << y1 << " = " << (x1 % y1) << endl; // 나눗셈연산자(나머지)
	// 주의) x / y는 0.5가 아닌 0이 나옴, 왜냐하면 int / int = int이기 때문
	// 우리가 기대한 0.5이 나오게 하기 위해서는 아래와 같이 double을 사용하거나 explicit casting을 사용하면 됨
	double x2 = 10.0, y2 = 20.0;
	cout << x2 << " / " << y2 << " = " << (x2 / y2) << endl; // 나눗셈연산자(몫) 
	// cout << x2 << " % " << y2 << " = " << (x2 % y2) << endl; // 나눗셈연산자(나머지)
	// 주의) data type에 따라 operation의 종류가 다름 (double의 경우 mode연산 불가)
	// mode operator(%)는 operand로 double을 사용할 수 없음! 
	cout << x1 << " / " << y1 << " = " << static_cast<double>(x1) / y1 << endl; // double / int = double (implicit upcasting)
	cout << x1 << " / " << y1 << " = " << x1 / static_cast<double>(y1) << endl; // int / double = double (implicit upcasting)
	// C++에서는 더 작은 타입과 큰 타입의 연산의 경우(numeric type) 묵시적 형확장이 일어남

	/* 나머지연산자의 사례분석 */
	// 배수관련 연산을 할 때 mod연산을 자주사용!
	cout << "홀수인지 짝수인지 판단하고자 하는 숫자를 입력해주십시오: ";
	int input;
	cin >> input;
	// 1) if-else문을 이용
	if (input % 2 == 0)
		cout << "입력하신 숫자는 짝수입니다." << endl;
	else
		cout << "입력하신 숫자는 홀수입니다." << endl;
	// 2) switch-case문을 이용
	try 
	{
		cout << "입력하신 숫자는 ";
		switch (input % 2)
		{
		case 0: cout << "짝수";
			break;
		case 1: cout << "홀수";
			break;
		default: throw exception("예외발생");
		}
		cout << "입니다." << endl;
	}
	catch (exception e)
	{
		cout << e.what() << endl;
		return EXIT_FAILURE;
	}
	// 3) 조건삼항연산자를 이용
	cout << "입력하신 숫자는 " << ((input % 2 == 0) ? "짝수" : "홀수") << "입니다." << endl;

	/* 논리연산 */
	// 논리연산의 결과는 true 또는 false의 값을 반환, 즉, boolean을 반환
	int x = 10, y = 20;
	cout << boolalpha; // true, false로 표시되게 함
	cout << (x > y) << '\t' << (x < y) << endl;
	cout << noboolalpha; // 해제
	cout << (x > y) << '\t' << (x < y) << endl;

	system("pause");
}