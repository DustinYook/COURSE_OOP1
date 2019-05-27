// 프로그램 설명: boolalpha에 대한 실습
#include <iostream>
using namespace std;
#define TRUE 1
#define FALSE 0

int main()
{
	/* boolalpha */
	{
		// boolalpha는 <iomanip>이 아닌 <iostream>에 정의
		bool a = true;
		cout << a + 1 << endl; 
		// C++에서는 boolean과 int가 연산이 됨 
		// JAVA에서는 컴파일에러

		cout << boolalpha; // boolalpha는 <iomanip>에 정의, sticky
		cout << a << endl;
		cout << a << endl;
		cout << noboolalpha; // noboolalpha로 해제하기 전까지는 효과지속
		cout << a << endl;

		// 1) 대입문을 통해 무한루프 생성 (단, 대입값은 != 0)
		while (a = 1) // 0이 아닌 값은 true
		{
			cout << "첫번째 무한루프 들어갔다 나옴" << endl; // 출력
			break;
		}

		// 2) a = 0의 대입 방식 루프 (루프 한번도 수행하지 않음)
		while(a = 0) // 0은 false
		{
			cout << "두번째 루프 들어갔다 나옴" << endl; // 출력안됨
			break;
		}

		// 3) C++ 방식 무한루프 생성방법
		while (true) 
		{
			cout << "세번째 무한루프 들어갔다 나옴" << endl; // 출력
			break;
		}

		// 4) C 방식 무한루프 생성방법
		while (TRUE)
		{
			cout << "네번째 무한루프 들어갔다 나옴" << endl; // 출력
			break; 
			// #define을 통해서 정의 
			// C에서는 boolean을 제공하지 않았기 때문
		}

	} cout << endl;

	system("pause");
}
