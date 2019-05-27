// 프로그램 설명: 클래스와 객체생성에 대한 기초예제
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14

/* Class Definition */
class Circle
{
	// public, private, 그리고 protected를 접근지정자라고 함
private:
	// 1) 멤버변수: 가지고 있는 특성 (attribute) 
	// private를 통해 Information Hiding 구현: 보여줄 것(public)과 감출 것(private)을 구분
	// 중요한 자료의 보안성유지 
	int r;
public: 
	// 2) 멤버함수: 할 수 있는 행위 (behavior)
	// get, set함수를 getters, setters - 대표적인 public 함수
	int getR() const; // function prototype
	void setR(int);
	double getArea() const;
};
/* Member Function Implementation */
int Circle::getR() const // Circle::는 해당 클래스 소속임을 알려줌 (경로지정)
{
	return r;
}
void Circle::setR(int input) // ::(Scope resolution operator)
{
	r = input;
}
double Circle::getArea() const
{
	return PI * pow(r, 2);
}

int main()
{
	Circle c; // 객체생성
	cout << "반지름을 입력해주십시오 : ";
	int r;
	cin >> r;
	c.setR(r);
	cout << "해당 반지름에 해당하는 원의 넓이는 " << c.getArea() << "입니다." << endl;
	system("pause");
}
// 프로그램: 데이터입력 -> 값 설정(setters) -> 데이터처리 -> 값 반환(getters) - >결과출력