// 프로그램 목적: 다차원배열에 대한 기초실습
#include <iostream>
#include <array> // array class template
#include <cstddef> // size_t
using namespace std;

/* Named Constant Definition */
const size_t ROW = 2; 
const size_t COL = 3;

/* Function Prototype = Function Declaration */
void printArray(array<array<size_t, COL>, ROW>); // 다차원배열을 형식매개변수로 받음
void printConst(const array<array<size_t, COL>, ROW>&); // const: 참조있어도 READ_ONLY
void printRefer(array<array<size_t, COL>, ROW>&); // 참조: WRITE

int main()
{
	array<array<size_t, COL>, ROW> arr = { 1, 2, 3, 4, 5, 6 };
	printArray(arr);
	printConst(arr);
	printRefer(arr);
	system("pause");
}

/* Function Definition = Function Implementation */
void printArray(array<array<size_t, COL>, ROW> arg)
{
	/* 루프 제어방식 */
	cout << "Loop-controlled counter" << endl;
	for (size_t i = 0; i < arg.size(); i++)
	{
		for (size_t j = 0; j < arg[i].size(); j++)
			cout << arg.at(i).at(j) << "  ";
		cout << endl;
	} cout << endl;

	/* Range-based for statement without auto */
	cout << "Range-based for statment without auto" << endl;
	for (array<size_t, COL> row : arg) 
	{ // arg로부터 array<size_t, COL>단위로 copy
		for (size_t element : row)
			cout << element << "  ";
		cout << endl;
	} cout << endl;

	/* Range-based for statement with auto */
	cout << "Range-based for statment with auto" << endl;
	// 키워드 auto: 컴파일러가 타입추론
	for (auto& row : arg) // auto == array<size_t, COL> 
	{
		for (auto& element : row) // auto == size_t 
			cout << element << "  ";
		cout << endl;
	} cout << endl;
}
void printConst(const array<array<size_t, COL>, ROW>& arg)
{
	cout << "Manipulate const array" << endl;
	for (auto row : arg)
	{
		for (auto element : row)
			cout << (element += 3) << "  "; // COPY된 것만 바뀜
		cout << endl;
	} cout << endl;
	for (auto row : arg) // 여기보면 변경사항이 반영되어 있지 않음
	{
		for (auto element : row)
			cout << element << "  ";
		cout << endl;
	} cout << endl;
}
void printRefer(array<array<size_t, COL>, ROW>& arg)
{
	cout << "Manipulate array reference" << endl;
	for (auto& row : arg)
	{
		for (auto& element : row)
			cout << (element += 3) << "  "; // 참조대상이 진짜 바뀜
		cout << endl;
	} cout << endl;
	for (auto const row : arg) // 여기보면 변경사항이 반영
	{
		for (auto const element : row)
			cout << element << "  ";
		cout << endl;
	} cout << endl;
}