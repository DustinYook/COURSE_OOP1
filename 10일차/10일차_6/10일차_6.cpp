// 프로그램 목적: default argument와 function overloading에 대한 실습
#include <iostream>
using namespace std;

/* default argument에 대한 주의사항 */
int cube(int x = 1, int y = 1, int z = 1); 
// 1) default argument must start at the end of parameter list (rigthmost)
//    int cube(int x = 1, int y, int z); // 이렇게 leftmost로 하면 syntax error
//    int cube(int x, int y = 1, int z); // 이렇게 중간에 놓아도 syntax error
//    <중요> 반드시 rightmost로부터 시작하여 왼쪽방향으로 채워나가야 함
// 2) default argument는 function prototype(definition)에 사용해야 함
//    <중요> function definition(implementation)에서 사용하면 syntax error가 발생
// 3) function overloading과의 collision 발생의 문제
//    int cube(int x, int y, int z);에 대한 function overloading인 int cube(int x, int y);의 경우 
//    int cube(int x, int y = 1, int z = 2);와 같은 default argument 방식과 같은 프로그램에서 사용하면
//    컴파일러가 어느 함수를 호출해야 할 지 판단할 수 없기 때문에 syntax error가 발생함
int powThree(int x, int y = 1, int z = 2); // 4) 아래의 대응되는 결과값을 참고할 것! 

/* function overloading */
void fun(int i) { cout << "AAA" << endl; }
void fun(double i) { cout << "BBB" << endl; }

int main()
{
	/* default argument */
	cout << cube(10, 10, 10) << endl;
	cout << cube(10, 10) << endl;
	cout << cube(10) << endl;
	cout << cube() << endl;
	// default argument를 사용하면 마치 함수오버로딩을 한 것과 비슷한 효과

	/* 주의해야 할 부분 */
	cout << powThree(10, 10, 10) << endl; // 결과값: 10 * 10 * 10 = 1000
	cout << powThree(10, 10) << endl;     // 결과값: 10 * 10 * <2> = 200
	cout << powThree(10) << endl;         // 결과값: 10 * <1> * <2> = 20

	/* function overloading */
	fun(1);
	fun(3.14);
	// 만약 void fun(double);만 있는 경우 fun(1)을 호출하면 int에서 double로 parameter promotion이 수행
	// 따라서 fun(1.000000)이 호출됨
	// 만약 void fun(int);만 있는 경우 fun(3.14)을 호출하면 3.14에서 truncation(Narrowing Conversion)이 수행
	// 따라서 fun(3)이 호출됨 -> JAVA에서 이런 방식은 syntax 오류!

	// 기능이 다르면 function overloading 방식을 사용
	// 값만 다르면 default argument 방식을 사용
	system("pause");
}

int cube(int x, int y, int z)
{
	return x * y * z;
}
int powThree(int x, int y, int z) 
{
	return x * y * z;
}
// <주의> function header에 default argument를 사용하면 syntax error
// int powThree(int x, int y = 1, int z = 2)
// {
//	 return x * y * z;
// }