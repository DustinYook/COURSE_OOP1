// 프로그램 목적: 출력표시형식 관리에 대한 실습 (복리계산프로그램)
#include <iostream> // <cmath>를 포함 -> <cmath>안쓰고 해도 에러가 나진 않음
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double amount; // 총합관리변수
	double principal = 1000.00; // 원금
	double rate = 0.05; // 이자율
	cout << setw(4) << "Year"; // setw(n)은 필드넓이를 n으로 세팅 (초깃값 right)
	cout << setw(21) << "Amount on deposit";
	cout << endl;
	// setw()는 <iomanip>에 정의, setw()의 초깃값은 right
	cout << fixed << setprecision(2) << showpoint; // 뒤에 나오는 얘들에 일괄적용
	for (int i = 1; i <= 10; i++)
	{
		amount = principal * pow(1.0 + rate, i);
		cout << setw(4) << i; // YEAR부분 값 출력
		cout << setw(21) << amount; // AMOUNT부분 값 출력
		cout << endl;
	}
	system("pause");
}