// 프로그램 목적: 주사위의 frequency를 누적하여 구하는 프로그램
#include <iostream>
#include <iomanip> // setw() 정의
#include <random> // default_random_engine, 
#include <ctime> // time() 정의
#include <array> // array class template 정의
#include <cstddef> // size_t 정의
using namespace std;
const size_t SIZE = 6; // Named Constant 선언 (반드시 선언과 동시에 초기화)

int main()
{
	default_random_engine engine(static_cast<size_t>(time(NULL)));
	uniform_int_distribution<size_t> range(1, 6);

	array<size_t, SIZE> frequency = {}; // 배열의 list initialization
	for (size_t i = 0; i < 6000000; i++)
		frequency[range(engine)-1]++; // 이 방식 중요!

	cout << setw(4) << "Face" << setw(15) << "Frequency" << endl;
	for (size_t j = 0; j < frequency.size(); j++) // 배열명.size()는 배열크기 반환
		cout << setw(4) << (j + 1) << setw(15) << frequency[j] << endl;

	system("pause");
}