// ���α׷� ����: ���� ���� �����ϴ� ���α׷� �ǽ� (2)
#include <iostream> // MSDN(<F1> Ű�� ������ ��)
#include <iomanip>
#include <cstdlib> // srand(), rand() ����
#include <ctime> // time() ����
using namespace std;

typedef unsigned int UINT;
enum NUM { ONE = 1, TWO, THREE, FOUR, FIVE, SIX };

int main()
{
	/* �ֻ����� ���� */
	UINT frequency[6] = { 0 }; // �ʱ�ȭ
	srand(static_cast<unsigned int>(time(NULL)));

	for (size_t i = 0; i < 6000000; i++)
	{
		NUM num = static_cast<NUM>(rand() % 6 + 1);
		switch (num)
		{
		case ONE: frequency[0]++;
			break;
		case TWO: frequency[1]++;
			break;
		case THREE: frequency[2]++;
			break;
		case FOUR: frequency[3]++;
			break;
		case FIVE: frequency[4]++;
			break;
		case SIX: frequency[5]++;
			break;
		default:
			cerr << "[Warning] wrong input!\n\a" << endl;
		}
	}
	cout << setw(4) << "Face" << setw(15) << "Frequency" << endl;
	for (size_t i = 0; i < 6; i++)
		cout << setw(4) << (i + 1) << setw(15) << frequency[i] << endl;

	system("pause");
}