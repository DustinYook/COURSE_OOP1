// ���α׷� ����: ���� ���� �����ϴ� ���α׷� �ǽ� (1��)
#include <iostream> // MSDN(<F1> Ű�� ������ ��)
#include <iomanip>
#include <cstdlib> // srand(), rand() ����
#include <ctime> // time() ����
#include <climits> 
using namespace std;
typedef unsigned int UINT;

int main()
{
	/* rand�Լ��� ���� ���� */
	// 1) seed ���� ������ ���: ��� ���� ����� �ݺ�
	// 01_ù��° ���
	for (size_t i = 1; i <= 20; i++)
	{
		// scaling expression: rand() % 6 + 1 // 6�� ���� ����
		cout << setw(10) << left << rand() % 6 + 1; // 6�� scaling factor
		if (i % 5 == 0) // ���ڰ� ���� �� �ִ� ���
			cout << endl;
	} cout << endl;
	//
	// 02_�ι�° ���
	int cnt = 1;
	for (size_t i = 1; i <= 20; i++)
	{
		cout << setw(10) << left << rand() % 6 + 1; // 6�� scaling factor
		if (cnt == 5) // 17�� ���ο� ���� �ٸ� ǥ�����
		{
			cout << endl;
			cnt = 0;
		} cnt++;
	} cout << endl;
	// mod �����ڴ� ������ ���Ե� ��, �Ǵ� ����� �� �� ���
	//
	// 2) seed ���� ���ϴ� ���: �Ź� ����� �ٲ� 
	cout << RAND_MAX << endl; // pow(2,15)-1
	cout << SHRT_MAX << endl; // pow(2,15)-1
	cout << time(0) << endl; // time(0) �Ǵ� time(NULL)�� ����ð�
	cout << time(NULL) << endl; // �ý��� �ð��� 1970.01.01���� ����� �ð� (�� ����)
	cout << sizeof(time_t) << endl << endl; // 8����Ʈ
	//
	// 01_���� seed ���� �ο��ϴ� ��� 
	srand(1000); // seed ������ 1000 �ο�
	for (size_t i = 0; i < 10; i++)
	{
		int num = rand() % 6 + 1;
		cout << num << " ";
	} cout << endl << endl;
	srand(2000); // seed ������ 2000 �ο�
	for (size_t i = 0; i < 10; i++)
	{
		int num = rand() % 6 + 1;
		cout << num << " ";
	} cout << endl << endl;
	//
	// 02_time�Լ��� �̿��Ͽ� seed ���� �ο��ϴ� ���
	srand(static_cast<UINT>(time(NULL))); // ���� �ٶ����� ǥ����� (����)
	// ���� ǥ��:  srand(time(0)); = srand((unsigned int)time(0));
	for (size_t i = 1; i <= 10; i++)
	{
		int num = rand() % 6 + 1;
		cout << num << " ";
		if (i % 5 == 0)
			cout << endl;
	} cout << endl;

	system("pause");
}