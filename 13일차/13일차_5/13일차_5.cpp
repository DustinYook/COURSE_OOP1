// 프로그램 목적: 벡터의 insert(), push_back()에 대한 실습
#include <iostream>
#include <vector> // vector class template
#include <cstddef> // size_t
using namespace std;

int main()
{
	// <중요> 배열은 크기가 고정되어 있으나, 벡터는 크기가 변할 수 있음!
	vector<size_t> v(3);
	cout << "Size : " << v.size() << endl; // 결과값: 3
	for (auto& element : v) // 결과값: 0 0 0 
		cout << element << "  ";
	cout << endl << endl;

	/* push_back 함수 사용방법 */
	v.push_back(10); // 벡터의 마지막에 원소 10을 PUSH
	cout << "Size : " << v.size() << endl; // 결과값: 4
	for (auto& element : v) // 결과값: 0 0 0 10
		cout << element << "  ";
	cout << endl << endl;
	v.push_back(20); // 벡터의 마지막에 원소 20을 PUSH
	cout << "Size : " << v.size() << endl; // 결과값: 5
	for (auto& element : v) // 결과값: 0 0 0 10 20
		cout << element << "  ";
	cout << endl << endl;

	/* pop_back 함수 사용방법 */
	v.pop_back(); // 벡터의 마지막 원소를 POP
	cout << "Size : " << v.size() << endl;  // 결과값: 4
	for (auto& element : v)  // 결과값: 0 0 0 10
		cout << element << "  ";
	cout << endl << endl;
	v.pop_back(); // 벡터의 마지막 원소를 POP
	cout << "Size : " << v.size() << endl;  // 결과값: 3
	for (auto& element : v)  // 결과값: 0 0 0
		cout << element << "  ";
	cout << endl << endl;

	/* insert 함수 사용방법 */
	v.insert(v.begin()+2, 100); 
	// insert(v.begin()+i, N) : i번째 인덱스를 한 칸 오른쪽으로 밀어내고 그곳에 N 저장 
	// (단, i가 벡터사이즈 벗어나면 out_of_range 예외발생)
	cout << "Size : " << v.size() << endl;  // 결과값: 4
	for (auto& element : v)  // 결과값: 0 0 100 0
		cout << element << "  ";
	cout << endl << endl;
	v.insert(v.end()-1, 200);
	cout << "Size : " << v.size() << endl;  // 결과값: 5
	for (auto& element : v)  // 결과값: 0 0 100 200 0
		cout << element << "  ";
	cout << endl << endl;

	system("pause");
}