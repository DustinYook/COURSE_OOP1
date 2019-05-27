// 앞 내용과 이어짐
#include <iostream>
using namespace std;

int main()
{
	// 참고) 연산자 우선순위: postfix_++/-- > prefix_++/-- > binaryOperator_+

	/* 복합된 증감연산자표현식에 대한 평가 #1 */
	{
		// 1) 후치증감연산 간의 합을 cout
		int a = 1;
		cout << "a의 평가값 : " << a++ + a++ << endl; // 결과값: 2
		// 풀이) a = a; -> a = a; -> 따라서 a는 1이므로 1 + 1 = 2

		// 2) 전치증감연산 간의의 합을 cout
		int b = 1;
		cout << "b의 평가값 : " << ++b + ++b << endl; // 결과값: 6
		// 풀이) b = b + 1; -> b = b + 1; -> 따라서 b는 3이므로 3 + 3 = 6

		// 3) 후치증감연산과 전치증간연산의 합을 cout
		int c = 1;
		cout << "c의 평가값 : " << c++ + ++c << endl; // 결과값: 4
		// 풀이) c = c + 1;(post) -> c = c;(pre) -> 따라서 c는 2이므로 2 + 2 = 4

		// 4) 전치증감연산과 후치증감연산의 합을 cout
		int d = 1;
		cout << "d의 평가값 : " << ++d + d++ << endl; // 결과값: 4
		// 풀이) d = d;(post) -> d = d + 1;(pre) -> 따라서 d는 2이므로 2 + 2 = 4
	} cout << endl;

	/* 복합된 증감연산자표현식에 대한 평가 #2 */
	{
		/* increment와 decrement의 합 */
		// 1) postfix 간의 경우
		int x = 1;
		cout << "x의 평가값 : " << x-- + x++ << endl; // 결과값: 2
		// 풀이) x = x; -> x = x; -> 따라서 x는 1이므로 1 + 1 = 2

		// 2) prefix 간의 경우
		int y = 1;
		cout << "y의 평가값 : " << --y + ++y << endl; // 결과값: 2
		// 풀이) y = y - 1; -> y = y + 1; -> 따라서 y는 1이므로 1 + 1 = 2

		// 3) postfix decrement + prefix increment
		int i = 1;
		cout << "i의 평가값 : " << i-- + ++i << endl; // 결과값: 4
		// 풀이) i = i; -> i = i + 1; -> 따라서 i는 2이므로 2 + 2 = 4

		// 4) prefix decrement + postfix increment
		int j = 1;
		cout << "j의 평가값 : " << --j + j++ << endl; // 결과값: 0
		// 풀이) j = j; -> j = j - 1; -> 따라서 j는 0이므로 0 + 0 = 0
	} cout << endl;

	/* 복합된 증감연산자표현식에 대한 평가 #3 */
	{
		// 1) 다른변수에 후치증감연산 간의 합을 대입하는 경우
		int a = 1;
		int b = a++ + a++;
		cout << "b의 평가값 : " << b << endl; // 결과값: 2
		// 풀이) a = a; -> a = a; -> [b = a + a <=> b = 1 + 1] -> b = 2

		// 2) 다른변수에 전치증감연산 간의 합을 대입하는 경우
		int c = 1;
		int d = ++c + ++c;
		cout << "d의 평가값 : " << d << endl; // 결과값: 6
		// 풀이) c = c + 1; -> c = c + 1; -> [d = c + c <=> d = 3 + 3] -> d = 6

		// 3) 다른변수에 후치증감연산과 전치증감연산의 합을 대입하는 경우
		int e = 1;
		int f = e++ + ++e;
		cout << "f의 평가값 : " << f << endl; // 결과값: 4
		// 풀이) e = e;(post) -> e = e + 1;(pre) -> [f = e + e <=> f = 2 + 2] -> f = 4

		// 4) 다른변수에 전치증감연산과 후치증감연산의 합을 대입하는 경우
		int g = 1;
		int h = ++g + g++;
		cout << "h의 평가값 : " << h << endl; // 결과값: 4
		// 풀이) g = g;(post) -> g = g + 1;(pre) -> [h = g + g <=> h = 2 + 2] -> h = 4
	} cout << endl;

	/* 복합된 증감연산자표현식에 대한 평가 #4 */
	{
		/* increment와 decrement의 합의 대입 */
		// 1) postfix 간의 경우
		int a = 1;
		int b = a-- + a++;
		cout << "b의 평가값 : " << b << endl; // 결과값: 2
		// 풀이) a = a;(dec) -> a = a;(inc) -> [b = a + a <=> b = 1 + 1] -> b = 2

		// 2) prefix 간의 경우
		int c = 1;
		int d = --c + ++c;
		cout << "d의 평가값 : " << d << endl; // 결과값: 2
		// 풀이) c = c - 1; -> c = c + 1; -> [d = c + c <=> d = 1 + 1] -> d = 2

		// 3) postfix decrement + prefix increment
		int e = 1;
		int f = e-- + ++e; 
		cout << "f의 평가값 : " << f << endl; // 결과값: 4
		// 풀이) e = e;(post) -> e = e + 1;(pre) -> [f = e + e <=> f = 2 + 2] -> f = 4

		// 4) prefix decrement + postfix increment
		int g = 1;
		int h = --g + g++;
		cout << "h의 평가값 : " << h << endl; // 결과값: 0
		// 풀이) g = g;(post) -> g = g - 1;(pre) -> [h = g + g <=> h = 0 + 0] -> h = 0;
	} cout << endl;

	/* 혹시 모를 문제에 대비한 예제 */
	{
		int a = 1;
		int b = --a * a++ + a--;
		cout << "b의 평가값 : " << b << endl; // 결과값: 0
		// 연산자우선순위: postfix > prefix > * > +
		// 풀이) a = a;(post) -> a = a;(post) -> a = a - 1;(pre) -> [b = a * a + a <=> b = 0 * 0 + 0] -> b = 0
	} cout << endl;

	system("pause");
}