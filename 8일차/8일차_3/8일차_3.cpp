// ���α׷� ����: break, continue ��ȭ���� ��������!
#include <iostream>
using namespace std;

int main()
{
	// ����) break�� continue�� scope�ϳ��� ���/��ŵ��
	// ���� scope ������� goto�� ���, �Ǵ� break�� ������ ���

	/* break ��ȭ */
	for (size_t i = 0; i < 5; i++) // �� ����
	{
		for (size_t j = 0; j < 5; j++) // ������
		{
			if (i == 2)
				break; // �ϳ��� scope�� Ż��
			cout << i << "," << j << "\t";
		} cout << endl;
	} cout << endl << endl;

	/* continue ��ȭ */
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (i == 2)
				continue;
			cout << i << "," << j << "\t";
		} cout << endl;
	} cout << endl << endl;

	/* goto���� LABEL */
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (i == 2)
				goto LABEL;
			cout << i << "," << j << "\t";
		} cout << endl;
	}
LABEL:
	cout << endl;
	// ����) LABEL�ؿ� �ݵ�� ���డ���ڵ尡 �־�� �� (�ƴϸ� �����Ͽ���)
	// ����) goto�� ��� �ȿ��� �����δ� �ǳ�, �ۿ��� �����δ� �ȵ�!
	// ����) JAVA�� break L1;�� ���� ǥ������, ��� goto�� ����

	/* row�� column ������ */
	{
		/* ���蹮�� ���� */
		// 1) break�� �̿��� �� ����
		for (size_t i = 0; i < 5; i++) // �� ����
		{
			for (size_t j = 0; j < 5; j++) // ������
			{
				if (j == 2)
					break; // ����) �ϳ��� scope�� Ż��
				cout << i << "," << j << "\t";
			} cout << endl;
		} cout << endl << endl;

		// 2) break�� �̿��� �� ����
		for (size_t i = 0; i < 5; i++) // �� ����
		{
			for (size_t j = 0; j < 5; j++) // ������
			{
				if (i == 2)
					break; // ����) �ϳ��� scope�� Ż��
				cout << i << "," << j << "\t";
			} cout << endl;
		} cout << endl << endl;
	}

	system("pause");
}

//if (i == 5)
//	break; // ���� �� ��������
//if (i == 2)
//	continue; // ���� �� �Ʒ��κ��� ��ŵ�ϰ� ���� �ö� 