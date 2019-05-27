// 프로그램 목적: 배열의 초기화와 반복문과 배열에 대한 실습
#include <iostream>
#include <array> // array class template 정의
#include <cstddef> // size_t 정의
using namespace std;

const int X_NUM = 1000; // 10은 Literal, x는 Named Constant
// X_NUM = 2000; // 상수는 저장값 변경불가!
// 상수는 모두 대문자로 적는 것이 프로그래머들의 암묵적 규칙
// 의미를 구분해야 할 때는 밑줄(_)을 사용

int main()
{
	/* 배열 초기화 */
	{
		// <주의> 배열은 반드시 크기가 정해져야 함!
		{
			// 이 방식은 불가! - 구문오류
			// int a[]; 
			// a = { 1, 2, 3, 4, 5 }; 
		}

		/* list initialization */
		{
			int a[5] = { 1, 2, 3, 4, 5 }; // 원소의 개수가 적은 경우
			// int b[5] = { 1, 2, 3, 4, 5, 6 }; // 배열크기가 5로 고정되어 있어 구문오류

			// <주의> 초기화 안된 원소에 쓰레기 값이 아닌 0(초깃값)이 들어감
			int c[5] = { 1, 2, 3, 4 };
			for (size_t i = 0; i < 5; i++)
				cout << c[i] << " ";
			cout << endl;

			// list initialization에 의해 배열크기가 자동으로 결정! (변경불가)
			int d[] = { 1, 2, 3, 4, 5 }; // 기존 C 방식은 배열크기 안넣어도 가능
			// int e[] = {}; // <주의> 아무 것도 안넣으면 syntax error 
			// array<int> f = { 1, 2, 3, 4, 5 }; 
			// <주의> C++11 방식은 배열크기 반드시 생성과 동시에 넣어야 함!
		}

		/* 반복문을 이용한 배열초기화 */
		// 1) built-in array의 경우 (기존 C)
		{
			int a[5];
			for (size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++)
				cout << a[i] << endl;
		}
		// 2) array class template의 경우 (C++11)
		{
			array<int, 5> n = {}; // 0으로 초기화
			for (size_t i = 0; i < n.size(); i++)
				cout << n[i] << " ";
			cout << endl;

			array<size_t, X_NUM> m;
			for (size_t i = 0; i < X_NUM; i++)
				m[i] = (i + 1);
			cout << endl;

			/* 배열과 반복문을 이용한 누적합 */
			int sum = 0;
			for (size_t i = 0; i < m.size(); i++) // .size()는 배열크기를 리턴
				sum += m[i];
			cout << "SUM : " << sum << endl;
		}
	}
	// 배열과 반복문은 자동반복처리에 유용 (5개 넘어가면 사용하는 것이 좋음)
	// 크기가 큰 배열의 경우 Call-By-Value가 아닌 Call-By-Address나 Call-By-Reference 쓰는 것이 좋음
	// 복사로 인해 낭비되는 시간을 줄일 수 있음
	system("pause");
}