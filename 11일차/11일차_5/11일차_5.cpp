// ���α׷� ����: �ֻ����� frequency�� �����Ͽ� ���ϴ� ���α׷�
#include <iostream>
#include <iomanip> // setw() ����
#include <random> // default_random_engine, 
#include <ctime> // time() ����
#include <array> // array class template ����
#include <cstddef> // size_t ����
using namespace std;
const size_t SIZE = 6; // Named Constant ���� (�ݵ�� ����� ���ÿ� �ʱ�ȭ)

int main()
{
	default_random_engine engine(static_cast<size_t>(time(NULL)));
	uniform_int_distribution<size_t> range(1, 6);

	array<size_t, SIZE> frequency = {}; // �迭�� list initialization
	for (size_t i = 0; i < 6000000; i++)
		frequency[range(engine)-1]++; // �� ��� �߿�!

	cout << setw(4) << "Face" << setw(15) << "Frequency" << endl;
	for (size_t j = 0; j < frequency.size(); j++) // �迭��.size()�� �迭ũ�� ��ȯ
		cout << setw(4) << (j + 1) << setw(15) << frequency[j] << endl;

	system("pause");
}