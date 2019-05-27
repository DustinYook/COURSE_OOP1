// 프로그램 목적: 배열에 대한 자동출력방법 실습
#include <iostream>
#include <array> // array template class
#include <cstddef> // size_t
using namespace std;
enum Size { ONE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5 }; // Named Constant (enum)

int main()
{
	/* 자동출력방법 */
	{
		array<size_t, FIVE> arry = { 1, 2, 3, 4, 5 };
		// automatic array는 초기화 안하면 쓰레기값 저장
		// 1) C언어 방식
		for (size_t i = 0; i < FIVE; i++)
			cout << arry[i] << "  ";
		cout << endl << endl;
		//
		// 2) C++11 방식 (template class 이용)
		for (size_t i = 0; i < arry.size(); i++)
			cout << arry.at(i) << "  ";
		cout << endl << endl;
		//
		// 3) Range-based for문 방식 (향상된 for문)
		// for(단위타입 버퍼이름 : 대상배열)
		for (size_t buff : arry)
			cout << buff << "  ";
		cout << endl << endl;
		//
		// 4) for each (과거방식) : 사용하지 않음
		// for each (int n in item)
		// {
		//	cout << n << endl;
		// }
	}

	/* Range-Based for문 방식에 대한 탐구 */
	{
		array<size_t, FOUR> arr = { 1, 2, 3, 4 };
		//
		// 1) 래퍼런스를 쓰지 않은 경우 (READ_MODE)
		for (size_t buff : arr)
			buff += 5;
		// <질문> 각각의 값들에 5가 더해질까? 
		for (size_t buff : arr)
			cout << buff << "  ";
		cout << endl << endl;
		// <답변> NO (copy가져오기 때문에 실제값 안바뀜)
		// 즉, Call-By-Value의 호출방식
		//
		// 2) 래퍼런스를 쓰는 경우 (WRITE_MODE)
		for (size_t& buff : arr) // JAVA는 불가 (for each를 READ_ONLY)
			buff += 5;
		// <질문> 각각의 값들에 5가 더해질까?
		for (size_t buff : arr)
			cout << buff << "  ";
		cout << endl << endl;
		// <답변> YES (참조로 사용했기 때문에 실제값 바뀜)
		// 즉, Call-By-Reference의 호출방식
		//
		// 3) CONST를 사용하는 경우 (READ_ONLY_MODE)
		for (const int& buff : arr) 
			cout << buff << "  "; // cout << (buff += 5) << "  ";로 쓰면 syntax error
		cout << endl << endl;
		// const는 수정불가, 참조는 수정가능 -> const들어가면 수정불가
	}

	/* Range-Based for문의 한계점 */
	{
		array<size_t, THREE> ar = { 1, 2, 3 };
		for (size_t buff : ar) // JAVA의 for each와 동일
			cout << buff << "  ";
		cout << endl << endl;
		// <한계> 첨자 제어가 되지 않아 원하는 위치에 접근이 어려움 (가능은 함)
		// <결론> 출력 용도(READ_ONLY)로는 좋으나, 값의 정교한 제어는 첨자제어가 더 좋음
	}

	system("pause");
}