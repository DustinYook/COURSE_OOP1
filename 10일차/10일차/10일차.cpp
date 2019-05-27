// 프로그램 목적: C++11에서 향상된 random number에 대한 실습 (기존의 rand함수보다 안전)
#include <ctime>
#include <random> // [default_random_engine]과 [uniform_int_distribution]가 정의
#include <iomanip>
#include <iostream>
using namespace std;
typedef unsigned int UINT;

int main()
{
	// 1) default_random_engine: 난수를 생성하는 역할
	default_random_engine engine(static_cast<UINT>(time(NULL))); // 생성자를 통해 객체생성

	// 2) uniform_int_distribution<T> objName(start, end): 범위를 start부터 end로 한정
	uniform_int_distribution<UINT> randomInt(1, 6); // class template를 통해 1부터 6까지의 난수생성
	// 부연설명_randomInt는 객체의 이름, randomInt(1, 6)은 생성자 호출
	// 참고_C++의 template은 JAVA의 generic과 동일 
	for (size_t i = 1; i <= 9; i++)
	{
		cout << setw(3) << left << randomInt(engine);
		if (i % 3 == 0)
			cout << endl;
	}
	system("pause");
}