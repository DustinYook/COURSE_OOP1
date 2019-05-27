// 프로그램 설명: double형과 promotion에 대한 실습
#include <iostream>
using namespace std;

int main()
{
	/* floating point의 기본형은 double */
	float f = 1.5f; // f_postfix 써야 명시적으로 float으로 저장
	double lf = 1.5; // double형이 기본형 (기본정밀도 소숫점아래 6자리)
	cout << f << endl;
	cout << lf << endl;

	/* implicit casting */
	int i = 10;
	double d = 3.14;
	cout << i << endl;
	cout << d << endl;
	int iTemp = d; // 큰 값을 작은 값에 대입 (truncation 발생; 정밀도 손상)
	double dTemp = i; // 작은 값을 큰 값에 대입 (promotion)
	cout << iTemp << endl;
	cout << dTemp << endl;

	system("pause");
}
// JAVA는 reliability에 중점
// C++은 flexibility에 중점 - 개발자에게 많은 책임
// C기반언어들에서는 안정성보다는 실행되는 것이 더 중요