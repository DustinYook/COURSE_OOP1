// ���α׷� ����: �򰥷ȴ� ���蹮���� ���� �ǽ�
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/* dangling else�� */
	{
		int x = 4;
		int y = 6;
		if (x > 5) // 1��
			if (y > 5) // 2��
				cout << "x and y are > 5" << endl;
		else // ���⿡�� 1���� match�Ǵ� �� ������ �����δ� 2���� match��
			cout << "x is <= 5" << endl;
		cout << "x and y are < 5" << endl; // �� ���常 ���
		// dangling else���� if�� else�� ������ �ٸ� �� 
		// else�� ���� ������ �ִ� if�� match�Ǵ� ���� ���Ѵ�.
	} cout << endl;
	
	/* for���� ������� */
	{
		for (int i = 0; i < 10; i++)
		{
			for (int k = 0; k < i; k++) 
				cout << "  ";
			// ����) k <= i�� �ؼ� Ʋ��: i = 0�� �� �Ʒ� ���๮�� �� �� ����
			for (int j = 0; j <= 9 - i; j++)
				cout << " " << j;
			for (int k = 8 - i; k >= 0; k--)
				cout << " " << k;
			cout << endl;
		}
		// for���� �������: �ʱ�ȭ -> [����Ȯ�� -> true�� ���: ���๮ ���� -> ��������] 
		//                                     -> false�� ���: ����Ż��
	} cout << endl;
	
	{
		double d = 123.456789;
		cout << "12345678901234567890" << endl;
		cout << setw(10) << setprecision(2) << fixed << d << endl; // setw()�� sticky������ �򰥷���
		cout << setprecision(3) << fixed << d << endl; // �� ����� ���� setw()�� sticky���� ������ �� �� ����
		// ����) boolalpha�� sticky��
	} cout << endl;

	system("pause");
}