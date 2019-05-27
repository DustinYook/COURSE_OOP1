// 프로그램 목적: 배열의 응용 - 조사 프로그램
#include <iostream>
#include <cstddef> // size_t
#include <array> // array class template
#include <random> // default_random_engine, uniform_int_distribution<T>
#include <ctime> // time()
using namespace std;

/* global named constant */
const size_t responseSize = 20; 
const size_t frequencySize = 5;
// constant 중요특징: 수정불가(READ_ONLY)

int main()
{
	/* 데이터가 주어진 경우 */
	// 1) Given data
	const array<size_t, responseSize> response =
	{ 
		1,2,1,3,1, // 공백문자의 이용 -> 가독성 향상
		2,5,1,2,4,
		3,5,2,1,3,
		4,5,4,5,4,
	};
	// 2) Get frequency from data
	array<size_t, frequencySize> frequency = {}; // 배열 0으로 초기화
	for (size_t i = 0; i < response.size(); i++) // 응답결과를 읽어들임
		frequency[response.at(i)-1]++; // 응답내용을 분류하여 frequency에 누적
	// 3) Print frequency data
	cout << "This is frequency data from the survey!" << endl;
	size_t cnt = 1;
	for (size_t buff : frequency) // Range-based for stmt
	{
		cout << cnt << " : " << buff << endl;
		cnt++;
	} cout << endl;
	// 4) Print barchart from data
	cout << "This is bar chart of freqeuncy data!" << endl;
	for (size_t i = 0; i < frequency.size(); i++)
	{
		cout << (i + 1) << " : ";
		for (size_t j = 0; j < frequency.at(i); j++)
			cout << "* ";
		cout << endl;
	} cout << endl << endl;

	/* 랜덤 시뮬레이션을 하는 경우 */
	// 1) 난수 응답 시뮬레이션 생성
	cout << "The computer will generate simulated responses!" << endl;
	array<size_t, responseSize> simulation = {};
	default_random_engine engine(static_cast<size_t>(time(NULL))); // 난수생성
	uniform_int_distribution<size_t> range(1, 5); // 범위제어
	for (size_t i = 0; i < simulation.size(); i++)
		simulation.at(i) = range(engine); 
	for (size_t buff : simulation)
		cout << buff << " ";
	cout << endl;
	// 2) Get frequency data from responses
	array<size_t, frequencySize> simulFreq = {};
	for (size_t i = 0; i < simulation.size(); i++)
		simulFreq[simulation.at(i)-1]++;
	// 3) Print frequency data
	cout << "This is frequency data from the survey!" << endl;
	cnt = 1;
	for (size_t buff : simulFreq) // Range-based for stmt
	{
		cout << cnt << " : " << buff << endl;
		cnt++;
	} cout << endl;
	// 4) Print barchart from data
	cout << "This is bar chart of freqeuncy data!" << endl;
	for (size_t i = 0; i < simulFreq.size(); i++)
	{
		cout << (i + 1) << " : ";
		for (size_t j = 0; j < simulFreq.at(i); j++)
			cout << "* ";
		cout << endl;
	} cout << endl << endl;

	system("pause");
}