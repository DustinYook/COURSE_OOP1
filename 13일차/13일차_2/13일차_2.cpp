// ���α׷� ����: ������ ���� ������ ���� �ǽ�
#include <iostream>
#include <vector> // vector class template
#include <stdexcept> // out_of_range 
using namespace std;

/* function prototype */
void output(const vector<int>&); // const�ٿ��� �����Ұ�
void input(vector<int>&); // ������ ���� ������ ����

int main()
{
	/* Vector Declaration */
	vector<int> v1(2);
	vector<int> v2(3);
	// vector: a set of homogeneous data type & dynamic-size

	/* Display the Size of Vector */
	cout << "Size of vector v1 is " << v1.size() << endl;
	cout << "Size of vector v2 is " << v2.size() << endl << endl;

	/* Display all the elements */ 
	cout << "Vector before initialization:" << endl;
	output(v1);
	output(v2);
	cout << endl;
	input(v1);
	input(v2);
	cout << "\nVector after initialization: " << endl;
	output(v1);
	output(v2);
	cout << endl;

	/* Vector Comparison Operation */
	cout << "Vector v1 and v2 are " << ((v1 == v2) ? "same" : "different") << endl << endl;

	system("pause");
}

/* Function definition */
void output(const vector<int>& vec) // �������
{
	for (int element : vec) // vec�� ���������� int
		cout << element << "  ";
	cout << endl;
}
void input(vector<int>& vec) // �����Է�
{
	cout << "Enter number : ";
	for (int& element : vec) // <����> ������ ��� �������氡�� (const X)
		cin >> element; // cin�� ���鹮�ڸ� �����ڷ� �ν�
}