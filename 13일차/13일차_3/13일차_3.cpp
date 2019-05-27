// 프로그램 목적: 벡터의 대입연산과 복사 생성자방식에 대한 실습
#include <iostream>
#include <vector> // vector class template
#include <cstddef> // size_t
#include <string>
using namespace std;
/* Function Prototype*/
void showElement(const vector<size_t>&);
void showSize(string, const vector<size_t>&);

int main()
{
	vector<size_t> v1(3); // 벡터 클래스 객체생성시 기본값 0으로 세팅
	vector<size_t> v2(5);
	// <주의> vector는 아직 list initialization 지원 안함!
	// vector<size_t> v2(5) = { 1, 2, 3, 4, 5 };
	cout << "Before Initialization" << endl;
	for (const auto& element : v1) // 결과값: 0 0 0 
		cout << element << "  ";
	cout << endl;
	cout << "After Initialization" << endl;
	for (auto& element : v1) // 결과값: 3 3 3
		cout << (element+=3) << "  ";
	cout << endl << endl;
	for (auto& element : v2) // 결과값: 5 5 5 5 5
		element += 5; // 초기화만하고 출력 안함

	/* Vector Assignment Operation */
	cout << "Before Assignment Operation" << endl;
	showSize("v1", v1);
	showSize("v2", v2);
	showElement(v1);
	showElement(v2);
	cout << endl;
	v1 = v2; // 3크기의 벡터에 5크기 벡터 대입 -> dynamic하게 크기가 늘어남
	cout << "After Assignment Operation" << endl;
	showSize("v1", v1);
	showSize("v2", v2);
	showElement(v1);
	showElement(v2);
	cout << "Vector v1 and v2 are " << ((v1 == v2) ? "same\n" : "different\n") << endl;

	/* Vector Deep Copy (Copy Constructor) */
	cout << "Copy Constructor" << endl;
	vector<size_t> v3(v1); // v3를 v1의 것을 복사하여 생성
	showSize("v3", v3);
	showElement(v3);
	cout << "Vector v1 and v3 are " << ((v1 == v3) ? "same\n" : "different\n") << endl;
	
	system("pause");
}
/* Function Definition */
void showElement(const vector<size_t>& argv)
{
	for (size_t i = 0; i < argv.size(); i++)
		cout << argv.at(i) << "  ";
	cout << endl;
}
void showSize(string vectorName, const vector<size_t>& argv)
{
	cout << "The size of " << vectorName << " : "  << argv.size() << endl;
}