// ���α׷� ����: �������迭�� ���� ���ʽǽ�
#include <iostream>
#include <array> // array class template
#include <cstddef> // size_t
using namespace std;

/* Named Constant Definition */
const size_t ROW = 2; 
const size_t COL = 3;

/* Function Prototype = Function Declaration */
void printArray(array<array<size_t, COL>, ROW>); // �������迭�� ���ĸŰ������� ����
void printConst(const array<array<size_t, COL>, ROW>&); // const: �����־ READ_ONLY
void printRefer(array<array<size_t, COL>, ROW>&); // ����: WRITE

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
	/* ���� ������ */
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
	{ // arg�κ��� array<size_t, COL>������ copy
		for (size_t element : row)
			cout << element << "  ";
		cout << endl;
	} cout << endl;

	/* Range-based for statement with auto */
	cout << "Range-based for statment with auto" << endl;
	// Ű���� auto: �����Ϸ��� Ÿ���߷�
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
			cout << (element += 3) << "  "; // COPY�� �͸� �ٲ�
		cout << endl;
	} cout << endl;
	for (auto row : arg) // ���⺸�� ��������� �ݿ��Ǿ� ���� ����
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
			cout << (element += 3) << "  "; // ��������� ��¥ �ٲ�
		cout << endl;
	} cout << endl;
	for (auto const row : arg) // ���⺸�� ��������� �ݿ�
	{
		for (auto const element : row)
			cout << element << "  ";
		cout << endl;
	} cout << endl;
}