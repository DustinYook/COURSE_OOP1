// 프로그램 목적: 이름상수(Named Constant)에 대한 실습
#include <iostream>
using namespace std;

/* 첫번째 방법: #define을 이용한 방법 */
#define PI 3.14 

int main()
{
	/* 변수의 경우 */
	int var = 10;
	var = 20; 
	// 변수(variable)의 경우 값의 변경이 가능

	/* 상수의 경우 */ 
	// Named Constant를 생성하는 3가지 방법
	// 1) #define 이용 
	// 2) 키워드 const 이용 
	// 3) 열거체/열거형(enum) 이용
	//
	// PI = 3.141592; (sytnax error)
	// 상수(constant)의 경우 값의 변경이 불가
	//
	/* 두번째 방법: 키워드 const를 이용한 방법 */
	const int NUM = 10; // 특징1_상수는 반드시 초기화 해야함
	// NUM = 20;        // 특징2_상수는 값의 변경이 불가
	//
	/* 세번째 방법: 열거체 enum을 이용한 방법 */
	// 주의) 열거체는 명시하지 않은 경우 0부터 시작 / JAVA, C#에서도 자주 사용 / 상수에 이름 붙임
	//
	// 열거체의 장점1_타입을 제약하여 입력오류를 방지할 수 있음
	enum Status { ONE, TWO = 2, THREE }; // 주의) ONE은 0, THREE는 3 
	Status s = ONE; // 사용자의 입력 오류를 방지
	switch(s)
	{
	case ONE: cout << "1을 입력하셨습니다." << endl;
		break;
	case TWO: cout << "2를 입력하셨습니다." << endl;
		break;
	case THREE: cout << "3을 입력하셨습니다." << endl;
		break;
	default: cerr << "잘못입력하셨습니다." << endl;
	}
	cout << s << endl; // 0이 출력
	cout << s + 1 << endl; // C++의 문제, 다른 타입간 연산이 됨; 논리오류 (JAVA는 컴파일에러)
	//
	// 열거체의 장점2_상수에 이름을 붙여 가독성이 좋아짐
	enum Week { SUN, MON, THUR, WED, THU, FRI, SAT };
	cout << Week::SUN + 1 << endl; // scope resolution operator를 통해 명시적표현 가능
	//                             // 주의) enum class Week로 할 경우 Week::SUN하면 컴파일에러
	//							   // 출력값이 같아도 의미가 다름을 쉽게 파악가능 (35번 라인과 비교)
	//
	// 열거체의 장점3_코드의 유지보수가 용이해짐
	enum Game { WIN = 10, DRAW = 20, LOSE = 30}; // 값 지정가능
	Game g = WIN;
	if (WIN == 0)
		cout << "이겼습니다 : " << Game::WIN << endl;
	// 만약 WIN이 10이 아니라 0으로 바꾸고 싶으면 코드의 WIN을 일일이 바꿀 필요없이
	// enum Game { WIN, DRAW = 20, LOSE = 30};으로 정의만 바꿔주면 됨
	
	// #define와 enum은 타입제약 불가, const방식은 여러 타입을 사용할 수 있는 장점!

	system("pause");
}