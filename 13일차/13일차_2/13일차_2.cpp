// 프로그램 목적: 벡터의 기초 사용법에 대한 실습
#include <iostream>
#include <vector> // vector class template
#include <stdexcept> // out_of_range 
using namespace std;

/* function prototype */
void output(const vector<int>&); // const붙여서 수정불가
void input(vector<int>&); // 참조를 통해 원본에 접금

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
void output(const vector<int>& vec) // 원소출력
{
	for (int element : vec) // vec의 구성단위는 int
		cout << element << "  ";
	cout << endl;
}
void input(vector<int>& vec) // 원소입력
{
	cout << "Enter number : ";
	for (int& element : vec) // <주의> 참조를 써야 원본변경가능 (const X)
		cin >> element; // cin은 공백문자를 구분자로 인식
}