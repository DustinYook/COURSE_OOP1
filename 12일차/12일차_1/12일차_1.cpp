// ���α׷� ����: static array�� automatic array�� ���� �ǽ� 
#include <iostream>
#include <iomanip> // setw() 
#include <cstddef> // size_t
#include <array> // ������ �ʵ��� ����!
using namespace std;

/* Static Array */
void staticArray() // �Լ� �Ҹ�Ǿ ������ ���� (history-sensitive)
{
	cout << "Static Array is generated!" << endl;
	static array<size_t, 3> arr; 
	// <����> static�� �ʱ�ȭ ���ϸ� '0'���� �ڵ��ʱ�ȭ
	for (const size_t constBuff : arr)
		cout << setw(2) << left <<  constBuff << "  ";
	cout << endl;
	for (size_t& refBuff : arr)
		cout << setw(2) << left << (refBuff += 5) << "  "; // �켱���� ������ ��ȣ���!
	cout << endl << endl;
}

/* Automatic Array */
void autoArray() // �Լ� ����� �Լ��������� �Ҹ�
{
	cout << "Automatic Array is generated!" << endl;
	array<size_t, 3> arr = { 1, 2, 3 }; 
	// <����> automatic local variable�� �ʱ�ȭ ���ϸ� garbage value ����	
	for(size_t i = 0; i < arr.size(); i++)
		cout << setw(2) << left << arr.at(i) << "  ";
	cout << endl;
	for (size_t i = 0; i < arr.size(); i++)
		cout << setw(2) << left << (arr.at(i) += 5) << "  "; // �켱���� ������ ��ȣ���!
	cout << endl << endl;
}

size_t main()
{
	/* First Function Call */
	cout << "[First Function Call]" << endl;
	staticArray();
	autoArray();	
	/* Second Function Call */
	cout << "\n[Second Function Call]" << endl;
	staticArray();
	autoArray();
	system("pause");
}