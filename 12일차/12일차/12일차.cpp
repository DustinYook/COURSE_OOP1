// ���α׷� ����: �迭�� ���� - ���� ���α׷�
#include <iostream>
#include <cstddef> // size_t
#include <array> // array class template
#include <random> // default_random_engine, uniform_int_distribution<T>
#include <ctime> // time()
using namespace std;

/* global named constant */
const size_t responseSize = 20; 
const size_t frequencySize = 5;
// constant �߿�Ư¡: �����Ұ�(READ_ONLY)

int main()
{
	/* �����Ͱ� �־��� ��� */
	// 1) Given data
	const array<size_t, responseSize> response =
	{ 
		1,2,1,3,1, // ���鹮���� �̿� -> ������ ���
		2,5,1,2,4,
		3,5,2,1,3,
		4,5,4,5,4,
	};
	// 2) Get frequency from data
	array<size_t, frequencySize> frequency = {}; // �迭 0���� �ʱ�ȭ
	for (size_t i = 0; i < response.size(); i++) // �������� �о����
		frequency[response.at(i)-1]++; // ���䳻���� �з��Ͽ� frequency�� ����
	// 3) Print frequency data
	cout << "This is frequency data from the survey!" << endl;
	size_t cnt = 1;
	for (size_t buff : frequency) // Range-based for stmt
	{
		cout << cnt << " : " << buff << endl;
		cnt++;
	} cout << endl;
	// 4) Print barchart from data
	cout << "This is bar chart of freqeuncy data!" << endl;
	for (size_t i = 0; i < frequency.size(); i++)
	{
		cout << (i + 1) << " : ";
		for (size_t j = 0; j < frequency.at(i); j++)
			cout << "* ";
		cout << endl;
	} cout << endl << endl;

	/* ���� �ùķ��̼��� �ϴ� ��� */
	// 1) ���� ���� �ùķ��̼� ����
	cout << "The computer will generate simulated responses!" << endl;
	array<size_t, responseSize> simulation = {};
	default_random_engine engine(static_cast<size_t>(time(NULL))); // ��������
	uniform_int_distribution<size_t> range(1, 5); // ��������
	for (size_t i = 0; i < simulation.size(); i++)
		simulation.at(i) = range(engine); 
	for (size_t buff : simulation)
		cout << buff << " ";
	cout << endl;
	// 2) Get frequency data from responses
	array<size_t, frequencySize> simulFreq = {};
	for (size_t i = 0; i < simulation.size(); i++)
		simulFreq[simulation.at(i)-1]++;
	// 3) Print frequency data
	cout << "This is frequency data from the survey!" << endl;
	cnt = 1;
	for (size_t buff : simulFreq) // Range-based for stmt
	{
		cout << cnt << " : " << buff << endl;
		cnt++;
	} cout << endl;
	// 4) Print barchart from data
	cout << "This is bar chart of freqeuncy data!" << endl;
	for (size_t i = 0; i < simulFreq.size(); i++)
	{
		cout << (i + 1) << " : ";
		for (size_t j = 0; j < simulFreq.at(i); j++)
			cout << "* ";
		cout << endl;
	} cout << endl << endl;

	system("pause");
}