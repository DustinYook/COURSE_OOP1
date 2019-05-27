// 프로그램 목적: 배열과 포인터의 관계 심화실습
#include <iostream>
#include <algorithm> // sort(), binary_search()
#include <array> // array class template
using namespace std;

int add(int a[])
{
	int sum = 0;
	for (size_t i = 0; i < 5; i++)
		sum += *(a + i); // a[i]와 같은 표현 -> 모양은 다르지만 기능은 같음 (배열의 경우 ++불가)
	return sum;
}

int main()
{
	/* begin(), end()함수의 사용법 */
	{
		// 1) built-in array
		int arr1[] = { 1, 3, 4, 2, 5 };
		sort(begin(arr1), end(arr1)); // 도트연산자대신 배열을 매개변수로 받음

		// 2) array class template
		array<int, 5> arr2 = { 1, 3, 4, 2, 5 };
		sort(arr2.begin(), arr2.end()); // 도트연산자를 통해 멤버함수에 접근
	}

	/* 배열과 포인터의 호환성 */
	int arr[] = { 1, 2, 3 };
	int* arrPtr = arr; 
	for (size_t i = 0; i < 3; i++)
	{
		// arr[i]과 *(ptr + i)는 같은 표현!
		cout << arr[i] << " == " << *(arrPtr + i) << endl;
	}
	for (size_t i = 0; i < 3; i++)
	{
		// <주의> *(arrPtr + i)는 포인터의 저장값을 변화시키지 않음
		// 하지만 *(arrPtr++)은 포인터의 저장값을 변화시키므로 주의!
		cout << *(arrPtr++) << endl; 
	} cout << *arrPtr << endl; // 포인터가 배열범위를 벗어남 (쓰레기값 출력)
	arrPtr = arr; // 다시 포인터가 배열의 시작주소 가리키게 함
	cout << arrPtr[0] << " == " << *(arr + 0) << endl << endl; // 배열명과 포인터변수는 호환가능
	// <주의> arrPtr[0]괴 *(arr + 0)은 arr의 0번째 주소에 저장된 값을 반환

	/* 주의해야 하는 경우 */
	// int arr[] = { 1, 2, 3 };      // 값인지 주소인지 똑바로 파악해야 함!
	// 1) 연산자 우선순위 <시험>
	cout << *arrPtr + 1 << endl; // 결과값: 1 + 1 = 2
	// 풀이) *arrPtr; -> 1 + 1 -> 2
	//
	cout << *arrPtr++ << endl; // 결과값: 1 
	cout << *arrPtr << endl;   // 결과값: 2
	// 풀이) arrPtr = arrPtr; -> *arrPtr; -> cout(1) -> arrPtr = arrPtr + 1; -> cout(2)
	arrPtr = arr; // 다시초기화
	//
	cout << *++arrPtr << endl; // 결과값: 2
	cout << *arrPtr << endl;   // 결과값: 2
	// 풀이) arrPtr = arrPtr + 1; -> *arrPtr; -> cout(2) -> arrPtr = arrPtr; -> cout(2)
	arrPtr = arr; // 다시초기화
	cout << endl;
	//
	// 2) 포인터가 옮겨지는지 여부 <시험>
	cout << *(arrPtr + 1) << endl;  // 포인터가 안 옮겨짐: 2
	cout << *arrPtr << endl; // 1
	cout << *(arrPtr++) << endl;    // 포인터가 옮겨짐: 1
	cout << *arrPtr << endl; // 2
	cout << *(++arrPtr) << endl;    // 포인터가 옮겨짐: 3
	cout << *arrPtr << endl; // 3
	arrPtr = arr; // 다시초기화
	cout << *(arrPtr += 1) << endl; // 포인터가 옮겨짐: 2
	cout << *arrPtr << endl; // 2
	arrPtr = arr; // 다시 초기화
	cout << endl;
	//
	// 3) 배열의 저장값이 바뀌었는가? vs 포인터가 가리키는 위치가 바뀌었는가?
	// 01_배열의 저장값이 바뀐 경우 (1)
	for (auto const& element : arr)
		cout << element << "  "; // 결과값: 1 2 3
	cout << endl;
	cout << (*arrPtr)++ << endl; // 결과값: 1
	cout << *arrPtr << endl;     // 결과값: 2 (배열의 저장값이 바뀜)
	for (auto const& element : arr)
		cout << element << "  "; // 결과값: 2 2 3
	cout << endl << endl;
	arr[0] = 1; // 다시 초기화
	//
	// 02_배열의 저장값이 바뀐 경우 (2)
	for (auto const& element : arr)
		cout << element << "  "; // 결과값: 1 2 3
	cout << endl;
	cout << ++(*arrPtr) << endl; // 결과값: 2 (배열의 저장값이 바뀜)
	cout << *arrPtr << endl;     // 결과값: 2 
	arrPtr = arr; // 다시 초기화
	for (auto const& element : arr)
		cout << element << "  "; // 결과값: 2 2 3
	cout << endl << endl;
	arr[0] = 1; // 다시 초기화
	//
	// 03_포인터가 가리키는 위치가 바뀐 경우 (1)
	for (auto const& element : arr)
		cout << element << "  "; // 결과값: 1 2 3
	cout << endl;
	cout << *(arrPtr++) << endl; // 결과값: 1
	cout << *arrPtr << endl;     // 결과값: 2 (포인터가 가리키는 위치가 바뀜)
	for (auto const& element : arr)
		cout << element << "  "; // 결과값: 1 2 3
	arrPtr = arr; // 다시 초기화
	cout << endl << endl;
	//
	// 04_포인터가 가리키는 위치가 바뀐 경우 (2)
	for (auto const& element : arr)
		cout << element << "  "; // 결과값: 1 2 3
	cout << endl;
	cout << *(++arrPtr) << endl; // 결과값: 2 (포인터가 가리키는 위치가 바뀜)
	cout << *arrPtr << endl;     // 결과값: 2 
	for (auto const& element : arr)
		cout << element << "  "; // 결과값: 1 2 3
	arrPtr = arr; // 다시 초기화
	cout << endl << endl;
	//
	// 4) 배열과 포인터의 호환
	cout << (arr + 1) << " == " << &arrPtr[1] << endl; // 주소값 측면
	cout << *(arr + 1) << " == " << arrPtr[1] << endl; // 저장값 측면

	system("pause");
}