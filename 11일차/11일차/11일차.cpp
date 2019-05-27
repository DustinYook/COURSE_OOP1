// 프로그램 목적: 재귀호출에 대한 실습 (factorial)
#include <iostream>
#include <iomanip>
using namespace std;
typedef unsigned int UINT;

/* function prototype */
UINT recurFact(UINT); 
UINT iterFact(UINT);
// C/C++의 경우 미리 컴파일러에게 알려주어야 함!
// prototype과 definition은 형식이 같아야 함

int main()
{ // _main은 C언어의 내부형식
	/* 사용자 입력처리 */
	cout << "Enter number : "; // user input prompt
	int userInput;
	cin >> userInput;
	/* 결과 출력처리 */
	cout << userInput << "! = " << recurFact(userInput) << endl; // 재귀호출 이용
	cout << userInput << "! = " << iterFact(userInput) << endl; // 반복문 이용
	system("pause");
}

/* recursion */
UINT recurFact(UINT num) // function definition
{
	if (num <= 1) // 0과 1을 처리 (Base Case 정의)
		return 1;
	else // 그 이외의 경우
		return num * recurFact(num - 1); // 재귀는 자신포함
}
/* Iteration */
UINT iterFact(UINT num)
{
	UINT factorial = 1; 
	// 다른방식: for(UINT i = 1; i <= num; i++)
	for (int i = num; i >= 1; i--) // 종료조건(i >= 1) 필수!
		factorial *= i;
	return factorial;
}
// 함수호출(재귀호출 포함)은 overhead가 발생하기 때문에 피하는게 효율적
// 적절한 방법을 잘 골라서 쓸 수 있어야 함 (만들기 복잡한 것 vs 호출 overhead)
// -> 팩토리얼은 iteration이, 피보나치는 recursive가 효율적