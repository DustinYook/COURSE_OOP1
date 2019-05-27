// 프로그램 목적: 13일차_9에서 다룬 내용을 명확하게 다시 정리
#include <iostream>
#include <iomanip> // setw()
using namespace std;

int main()
{
	/* 배열 선언 및 출력 */
	int arr[] = { 1, 2 ,3 };
	int* arrPtr = arr;
	for (auto const& element : arr)
		cout << setw(3) << left << element;
	cout << endl << endl;

	/* 포인터가 가리키는 위치가 바뀌는 경우 */
	{
		cout << "Pointer : " << arrPtr << endl;
		cout << *arrPtr++ << endl; // 결과값 : 1
		cout << "Pointer : " << arrPtr << endl;
		cout << *arrPtr << endl; // 결과값 : 2
		// 배열값이 아닌 포인터가 가리키는 곳이 바뀜
		for (auto const& element : arr)
			cout << setw(3) << left << element; // 결과값: 1 2 3
		cout << endl << endl;
		arrPtr = arr; // 포인터를 다시 원래 가리키던 곳으로 이동

		cout << "Pointer : " << arrPtr << endl;
		cout << *++arrPtr << endl; // 결과값 : 2
		cout << "Pointer : " << arrPtr << endl;
		cout << *arrPtr << endl; // 결과값 : 2
		// 배열값이 아닌 포인터가 가리키는 곳이 바뀜
		for (auto const& element : arr)
			cout << setw(3) << left << element; // 결과값: 1 2 3
		cout << endl << endl;
		arrPtr = arr;
	}

	/* 배열의 실제 저장값이 바뀌는 경우 */
	{
		cout << "Pointer : " << arrPtr << endl;
		cout << (*arrPtr)++ << endl; // 결과값 : 1
		cout << "Pointer : " << arrPtr << endl;
		cout << *arrPtr << endl; // 결과값 : 2
		// 포인터가 가리키는 값은 변화없고 배열의 저장값이 바뀜
		for (auto const& element : arr)
			cout << setw(3) << left << element; // 결과값: 2 2 3
		cout << endl << endl;
		arr[0] = 1; // 배열의 저장값을 다시 원래 저장값으로 바꿈

		cout << "Pointer : " << arrPtr << endl;
		cout << ++(*arrPtr) << endl; // 결과값 : 2
		cout << "Pointer : " << arrPtr << endl;
		cout << *arrPtr << endl; // 결과값 : 2
		// 포인터가 가리키는 값은 변화없고 배열의 저장값이 바뀜
		for (auto const& element : arr)
			cout << setw(3) << left << element; // 결과값: 2 2 3
		cout << endl << endl;
		arr[0] = 1; // 배열의 저장값을 다시 원래 저장값으로 바꿈
	}

	system("pause");
}