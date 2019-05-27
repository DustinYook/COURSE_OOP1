// ���α׷� ����: sort(), binary_search(), static variable�� ���� �ǽ�
#include <iostream>
#include <array> // array template class
#include <algorithm> // sort(begin, end), binary_search(begin, end, val)
#include <random> // default_random_engine, uniform_int_distribution<T>
#include <ctime> // time()
#include <cstddef> // size_t
using namespace std;

class Cls
{
public: 
	const static size_t STUDENTS = 5; 
	static void staticFunc(void)
	{
		cout << "I am visible although no instantiation is made." << endl;
	}
};

int main()
{
	/* sort �����Լ� */
	{
		Cls::staticFunc(); // static: ��ü�������� ���ٰ���
		array<size_t, Cls::STUDENTS> arr = { 1, 5, 3, 2, 4 }; 
		// int arr[] = { 10, 23, 27 }; // built-in�� sort() ���Ұ�

		cout << "Before Sorting : ";
		for (size_t buff : arr)
			cout << buff << "  ";
		cout << endl;

		/* sort �̿��� */
		sort(arr.begin(), arr.end()); 
		// sort�� ���۰� �� �� �Ķ���ͷ� ����
		// <����> ������������ �������� ��ȯ -> const array�� ��� ����!
		cout << "After  Sorting : ";
		for (size_t buff : arr)
			cout << buff << "  ";
		cout << endl;
	}
	
	/* binary_search ����Ž���Լ� */
	{
		/* ��ü���� */
		const size_t STUDENT_NUM = 10; // Named Constant ����
		array<size_t, STUDENT_NUM> gradeList = {}; // �迭��ü����
		default_random_engine engine(static_cast<size_t>(time(NULL))); // ��������
		uniform_int_distribution<size_t> range(0, 100); // ��������

		/* ����Ʈ ���� */
		for(size_t& buff : gradeList) // ����Ʈ ����
			buff = range(engine);

		/* ����Ʈ ��� */
		// <����> ����Ž���� ������ �Ŀ��� �ǹ̰� ����!
		sort(gradeList.begin(), gradeList.end()); // ����
		cout << endl;
		for (size_t buff : gradeList)
			cout << buff << "  ";
		cout << endl << endl;

		/* �Է�ó�� */
		cout << "Enter number you want to check whether it exists : ";
		size_t userInput;
		cin >> userInput;

		/* ����Ž������ */
		// binary_search(�迭����, �迭��, ã�����ϴ� ��) -> boolean ����
		if (binary_search(gradeList.begin(), gradeList.end(), userInput))
			cout << "The number you entered exists!" << endl;
		else
			cout << "The number you entered doesn't exist." << endl;	
	} cout << endl;

	system("pause");
}
// �о���� ���, ���� ���, const�� ���� �߿�!
// ���� Ȯ���� �� ��� for��, �ε����� �߿��� ��� ������� ��� (����)
// Tip) main���� �� ���� ���� ������ִ� ���� ����