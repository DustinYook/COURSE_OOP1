// 프로그램 목적: 랜덤 수를 생성하는 프로그램 실습 (1ㄴ)
#include <iostream> // MSDN(<F1> 키를 누르면 됨)
#include <iomanip>
#include <cstdlib> // srand(), rand() 정의
#include <ctime> // time() 정의
#include <climits> 
using namespace std;
typedef unsigned int UINT;

int main()
{
	/* rand함수에 대한 기초 */
	// 1) seed 값이 일정한 경우: 계속 같은 결과가 반복
	// 01_첫번째 방법
	for (size_t i = 1; i <= 20; i++)
	{
		// scaling expression: rand() % 6 + 1 // 6을 넘지 않음
		cout << setw(10) << left << rand() % 6 + 1; // 6은 scaling factor
		if (i % 5 == 0) // 예쁘게 찍을 수 있는 방법
			cout << endl;
	} cout << endl;
	//
	// 02_두번째 방법
	int cnt = 1;
	for (size_t i = 1; i <= 20; i++)
	{
		cout << setw(10) << left << rand() % 6 + 1; // 6은 scaling factor
		if (cnt == 5) // 17번 라인에 대한 다른 표현방식
		{
			cout << endl;
			cnt = 0;
		} cnt++;
	} cout << endl;
	// mod 연산자는 범위에 포함된 수, 또는 배수를 쓸 때 사용
	//
	// 2) seed 값이 변하는 경우: 매번 결과가 바뀜 
	cout << RAND_MAX << endl; // pow(2,15)-1
	cout << SHRT_MAX << endl; // pow(2,15)-1
	cout << time(0) << endl; // time(0) 또는 time(NULL)은 현재시간
	cout << time(NULL) << endl; // 시스템 시간이 1970.01.01부터 경과한 시간 (초 단위)
	cout << sizeof(time_t) << endl << endl; // 8바이트
	//
	// 01_직접 seed 값을 부여하는 경우 
	srand(1000); // seed 값으로 1000 부여
	for (size_t i = 0; i < 10; i++)
	{
		int num = rand() % 6 + 1;
		cout << num << " ";
	} cout << endl << endl;
	srand(2000); // seed 값으로 2000 부여
	for (size_t i = 0; i < 10; i++)
	{
		int num = rand() % 6 + 1;
		cout << num << " ";
	} cout << endl << endl;
	//
	// 02_time함수를 이용하여 seed 값을 부여하는 경우
	srand(static_cast<UINT>(time(NULL))); // 가장 바람직한 표현방식 (안전)
	// 같은 표현:  srand(time(0)); = srand((unsigned int)time(0));
	for (size_t i = 1; i <= 10; i++)
	{
		int num = rand() % 6 + 1;
		cout << num << " ";
		if (i % 5 == 0)
			cout << endl;
	} cout << endl;

	system("pause");
}