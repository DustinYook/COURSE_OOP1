// 프로그램 목적: sort(), binary_search(), static variable에 대한 실습
#include <iostream>
#include <array> // array template class
#include <algorithm> // sort(begin, end), binary_search(begin, end, val)
#include <random> // default_random_engine, uniform_int_distribution<T>
#include <ctime> // time()
#include <cstddef> // size_t
using namespace std;

class Cls
{
public: 
	const static size_t STUDENTS = 5; 
	static void staticFunc(void)
	{
		cout << "I am visible although no instantiation is made." << endl;
	}
};

int main()
{
	/* sort 정렬함수 */
	{
		Cls::staticFunc(); // static: 객체생성없이 접근가능
		array<size_t, Cls::STUDENTS> arr = { 1, 5, 3, 2, 4 }; 
		// int arr[] = { 10, 23, 27 }; // built-in은 sort() 사용불가

		cout << "Before Sorting : ";
		for (size_t buff : arr)
			cout << buff << "  ";
		cout << endl;

		/* sort 이용방법 */
		sort(arr.begin(), arr.end()); 
		// sort는 시작과 끝 값 파라미터로 받음
		// <주의> 원본데이터의 수정본을 반환 -> const array인 경우 에러!
		cout << "After  Sorting : ";
		for (size_t buff : arr)
			cout << buff << "  ";
		cout << endl;
	}
	
	/* binary_search 이진탐색함수 */
	{
		/* 객체생성 */
		const size_t STUDENT_NUM = 10; // Named Constant 정의
		array<size_t, STUDENT_NUM> gradeList = {}; // 배열객체생성
		default_random_engine engine(static_cast<size_t>(time(NULL))); // 난수생성
		uniform_int_distribution<size_t> range(0, 100); // 범위지정

		/* 리스트 생성 */
		for(size_t& buff : gradeList) // 리스트 배정
			buff = range(engine);

		/* 리스트 출력 */
		// <주의> 이진탐색은 정렬한 후에만 의미가 있음!
		sort(gradeList.begin(), gradeList.end()); // 정렬
		cout << endl;
		for (size_t buff : gradeList)
			cout << buff << "  ";
		cout << endl << endl;

		/* 입력처리 */
		cout << "Enter number you want to check whether it exists : ";
		size_t userInput;
		cin >> userInput;

		/* 이진탐색수행 */
		// binary_search(배열시작, 배열끝, 찾고자하는 값) -> boolean 리턴
		if (binary_search(gradeList.begin(), gradeList.end(), userInput))
			cout << "The number you entered exists!" << endl;
		else
			cout << "The number you entered doesn't exist." << endl;	
	} cout << endl;

	system("pause");
}
// 읽어오는 방법, 쓰는 방법, const와 참조 중요!
// 값만 확인할 때 향상 for문, 인덱스가 중요한 경우 기존방식 사용 (정렬)
// Tip) main에서 할 동작 먼저 명시해주는 것이 좋음