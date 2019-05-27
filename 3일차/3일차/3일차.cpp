#include <iostream>
using namespace std;

int main()
{
	/* Escape Sequence */
	cout << "우리나라\t좋은나라\n\n니네나라\t나쁜나라" << endl; // \t: tab

	/* 입력 및 덧셈연산수행 프로그램1 */
	int num1, num2; // 변수선언
	int sum = 0; // 변수정의
	cout << "덧셈을 수행할 두 정수를 차례로 입력해주십시오 >> ";
	cin >> num1 >> num2; // cin >> num1; cin >> num2;로 쓸 수도 있음 (중요! cin에서 white space는 구분자로 이용)
	sum = num1 + num2;
	cout << "덧셈의 결과는 " << sum << "입니다." << endl << endl;

	/* 입력 및 덧셈연산수행 프로그램2 */
	int input[2] = { 0 };
	int sum = 0;
	cout << &input[0] << '\t' << &input[1] << endl; // 변수명은 메모리의 주소를 나타냄
	for (int i = 0; i < 2; i++)
	{
	    cout << (i + 1) << "번쨰 숫자입력: __\b\b"; 
		// tip) "__\b\b"는 자릿수를 나타내게 하는 역할을 하게 할 수 있음
		cin >> input[i];
		sum += input[i];
	} cout << endl << input[0] << " + " << input[1] << " = " << sum << endl << endl;

	/* Overflow */
	// C++에서는 프로그래머가 제어해야 하는 부분이 많음. 
	// 특히 표현범위나 포인터에 유의하도록 할 것 
	// 자바는 reliability를 중시하여 compile time에 detect하지만 C++은 flexibility를 중시하여 detect하지 않음
	// 표현범위를 신중하게 고려한 후 해야 overflow로 인한 logical error를 방지할 수 있음
	int a = 99999999999999; 
	cout << a << endl;
	int b = 99999;
	cout << b << endl;
	int c = 3, d = 4;
	// int e=4, f=5, int g; (x) // 중간에 이렇게 하면 안됨
	char ch = 'a';
	cout << ch + 1 << endl; // 항상 더 큰 형(int)로 upcasting을 함, 따라서 int형으로 결과가 나오게 됨
	cout << static_cast<char>(ch + 1) << endl; // 문자는 숫자와 왔다갔다 할 수 있다. (ASCII코드가 숫자와 문자를 대응하는 테이블)

	system("pause");
}