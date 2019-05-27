// 프로그램 목적: 배열과 포인터에 대한 실습
#include <iostream>
#include <array> // size()
using namespace std;
/* Function Prototype */
void addArr(int[]); // 배열의 주소를 전달
void addPtr1(int*);  
void addPtr2(int*);

int main()
{
	int arr[] = { 1,2,3,4,5 };
	cout << arr << " == " << &arr[0] << endl; // <중요> 배열명은 배열의 시작주소를 의미
	addArr(arr);
	addPtr1(arr);
	addPtr2(arr);
	int* arrPtr = arr; // arr을 간접참조하는 포인터변수 선언
	cout << *(arr + 2) << " == " << arrPtr[2] << endl; // 배열과 포인터는 상호호환
	// <중요> 배열명은 포인터상수, 포인터는 포인터변수
	cout << *(++arrPtr) << endl; // 포인터는 변수 -> 저장값 변경가능!
	// cout << arr++ << endl;    // 배열명은 포인터상수 -> 저장값 변경불가!

	system("pause");
}
/* Function Definition */
void addArr(int a[])
{
	int sum = 0;
	for (size_t i = 0; i < 5; i++)
		sum += a[i]; // 배열의 인덱스 조정
	cout << "Sum : " << sum << endl;
}
void addPtr1(int* a)
{
	int sum = 0;
	for (size_t i = 0; i < 5; i++)
		sum += *(a + i); // 포인터 조정 -> 포인터 저장값 유지
	cout << "Sum : " << sum << endl;
} 
void addPtr2(int* a)
{
	int sum = 0;
	for (size_t i = 0; i < 5; i++)
		sum += *(a++); // 포인터 조정 -> 포인터 저장값 변경
	cout << "Sum : " << sum << endl;
	/* WARNING! */
	for (size_t i = 0; i < 5; i++)
		sum += *(a++); // 첨자범위를 벗어남! (쓰레기값 가져옴)
	cout << "Sum : " << sum << endl;
}