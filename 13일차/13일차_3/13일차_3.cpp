// ���α׷� ����: ������ ���Կ���� ���� �����ڹ�Ŀ� ���� �ǽ�
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
	vector<size_t> v1(3); // ���� Ŭ���� ��ü������ �⺻�� 0���� ����
	vector<size_t> v2(5);
	// <����> vector�� ���� list initialization ���� ����!
	// vector<size_t> v2(5) = { 1, 2, 3, 4, 5 };
	cout << "Before Initialization" << endl;
	for (const auto& element : v1) // �����: 0 0 0 
		cout << element << "  ";
	cout << endl;
	cout << "After Initialization" << endl;
	for (auto& element : v1) // �����: 3 3 3
		cout << (element+=3) << "  ";
	cout << endl << endl;
	for (auto& element : v2) // �����: 5 5 5 5 5
		element += 5; // �ʱ�ȭ���ϰ� ��� ����

	/* Vector Assignment Operation */
	cout << "Before Assignment Operation" << endl;
	showSize("v1", v1);
	showSize("v2", v2);
	showElement(v1);
	showElement(v2);
	cout << endl;
	v1 = v2; // 3ũ���� ���Ϳ� 5ũ�� ���� ���� -> dynamic�ϰ� ũ�Ⱑ �þ
	cout << "After Assignment Operation" << endl;
	showSize("v1", v1);
	showSize("v2", v2);
	showElement(v1);
	showElement(v2);
	cout << "Vector v1 and v2 are " << ((v1 == v2) ? "same\n" : "different\n") << endl;

	/* Vector Deep Copy (Copy Constructor) */
	cout << "Copy Constructor" << endl;
	vector<size_t> v3(v1); // v3�� v1�� ���� �����Ͽ� ����
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