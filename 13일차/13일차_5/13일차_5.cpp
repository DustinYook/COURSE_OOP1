// ���α׷� ����: ������ insert(), push_back()�� ���� �ǽ�
#include <iostream>
#include <vector> // vector class template
#include <cstddef> // size_t
using namespace std;

int main()
{
	// <�߿�> �迭�� ũ�Ⱑ �����Ǿ� ������, ���ʹ� ũ�Ⱑ ���� �� ����!
	vector<size_t> v(3);
	cout << "Size : " << v.size() << endl; // �����: 3
	for (auto& element : v) // �����: 0 0 0 
		cout << element << "  ";
	cout << endl << endl;

	/* push_back �Լ� ����� */
	v.push_back(10); // ������ �������� ���� 10�� PUSH
	cout << "Size : " << v.size() << endl; // �����: 4
	for (auto& element : v) // �����: 0 0 0 10
		cout << element << "  ";
	cout << endl << endl;
	v.push_back(20); // ������ �������� ���� 20�� PUSH
	cout << "Size : " << v.size() << endl; // �����: 5
	for (auto& element : v) // �����: 0 0 0 10 20
		cout << element << "  ";
	cout << endl << endl;

	/* pop_back �Լ� ����� */
	v.pop_back(); // ������ ������ ���Ҹ� POP
	cout << "Size : " << v.size() << endl;  // �����: 4
	for (auto& element : v)  // �����: 0 0 0 10
		cout << element << "  ";
	cout << endl << endl;
	v.pop_back(); // ������ ������ ���Ҹ� POP
	cout << "Size : " << v.size() << endl;  // �����: 3
	for (auto& element : v)  // �����: 0 0 0
		cout << element << "  ";
	cout << endl << endl;

	/* insert �Լ� ����� */
	v.insert(v.begin()+2, 100); 
	// insert(v.begin()+i, N) : i��° �ε����� �� ĭ ���������� �о�� �װ��� N ���� 
	// (��, i�� ���ͻ����� ����� out_of_range ���ܹ߻�)
	cout << "Size : " << v.size() << endl;  // �����: 4
	for (auto& element : v)  // �����: 0 0 100 0
		cout << element << "  ";
	cout << endl << endl;
	v.insert(v.end()-1, 200);
	cout << "Size : " << v.size() << endl;  // �����: 5
	for (auto& element : v)  // �����: 0 0 100 200 0
		cout << element << "  ";
	cout << endl << endl;

	system("pause");
}