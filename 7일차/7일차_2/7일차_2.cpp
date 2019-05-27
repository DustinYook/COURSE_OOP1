// �� ����� �̾���
#include <iostream>
using namespace std;

int main()
{
	// ����) ������ �켱����: postfix_++/-- > prefix_++/-- > binaryOperator_+

	/* ���յ� ����������ǥ���Ŀ� ���� �� #1 */
	{
		// 1) ��ġ�������� ���� ���� cout
		int a = 1;
		cout << "a�� �򰡰� : " << a++ + a++ << endl; // �����: 2
		// Ǯ��) a = a; -> a = a; -> ���� a�� 1�̹Ƿ� 1 + 1 = 2

		// 2) ��ġ�������� ������ ���� cout
		int b = 1;
		cout << "b�� �򰡰� : " << ++b + ++b << endl; // �����: 6
		// Ǯ��) b = b + 1; -> b = b + 1; -> ���� b�� 3�̹Ƿ� 3 + 3 = 6

		// 3) ��ġ��������� ��ġ���������� ���� cout
		int c = 1;
		cout << "c�� �򰡰� : " << c++ + ++c << endl; // �����: 4
		// Ǯ��) c = c + 1;(post) -> c = c;(pre) -> ���� c�� 2�̹Ƿ� 2 + 2 = 4

		// 4) ��ġ��������� ��ġ���������� ���� cout
		int d = 1;
		cout << "d�� �򰡰� : " << ++d + d++ << endl; // �����: 4
		// Ǯ��) d = d;(post) -> d = d + 1;(pre) -> ���� d�� 2�̹Ƿ� 2 + 2 = 4
	} cout << endl;

	/* ���յ� ����������ǥ���Ŀ� ���� �� #2 */
	{
		/* increment�� decrement�� �� */
		// 1) postfix ���� ���
		int x = 1;
		cout << "x�� �򰡰� : " << x-- + x++ << endl; // �����: 2
		// Ǯ��) x = x; -> x = x; -> ���� x�� 1�̹Ƿ� 1 + 1 = 2

		// 2) prefix ���� ���
		int y = 1;
		cout << "y�� �򰡰� : " << --y + ++y << endl; // �����: 2
		// Ǯ��) y = y - 1; -> y = y + 1; -> ���� y�� 1�̹Ƿ� 1 + 1 = 2

		// 3) postfix decrement + prefix increment
		int i = 1;
		cout << "i�� �򰡰� : " << i-- + ++i << endl; // �����: 4
		// Ǯ��) i = i; -> i = i + 1; -> ���� i�� 2�̹Ƿ� 2 + 2 = 4

		// 4) prefix decrement + postfix increment
		int j = 1;
		cout << "j�� �򰡰� : " << --j + j++ << endl; // �����: 0
		// Ǯ��) j = j; -> j = j - 1; -> ���� j�� 0�̹Ƿ� 0 + 0 = 0
	} cout << endl;

	/* ���յ� ����������ǥ���Ŀ� ���� �� #3 */
	{
		// 1) �ٸ������� ��ġ�������� ���� ���� �����ϴ� ���
		int a = 1;
		int b = a++ + a++;
		cout << "b�� �򰡰� : " << b << endl; // �����: 2
		// Ǯ��) a = a; -> a = a; -> [b = a + a <=> b = 1 + 1] -> b = 2

		// 2) �ٸ������� ��ġ�������� ���� ���� �����ϴ� ���
		int c = 1;
		int d = ++c + ++c;
		cout << "d�� �򰡰� : " << d << endl; // �����: 6
		// Ǯ��) c = c + 1; -> c = c + 1; -> [d = c + c <=> d = 3 + 3] -> d = 6

		// 3) �ٸ������� ��ġ��������� ��ġ���������� ���� �����ϴ� ���
		int e = 1;
		int f = e++ + ++e;
		cout << "f�� �򰡰� : " << f << endl; // �����: 4
		// Ǯ��) e = e;(post) -> e = e + 1;(pre) -> [f = e + e <=> f = 2 + 2] -> f = 4

		// 4) �ٸ������� ��ġ��������� ��ġ���������� ���� �����ϴ� ���
		int g = 1;
		int h = ++g + g++;
		cout << "h�� �򰡰� : " << h << endl; // �����: 4
		// Ǯ��) g = g;(post) -> g = g + 1;(pre) -> [h = g + g <=> h = 2 + 2] -> h = 4
	} cout << endl;

	/* ���յ� ����������ǥ���Ŀ� ���� �� #4 */
	{
		/* increment�� decrement�� ���� ���� */
		// 1) postfix ���� ���
		int a = 1;
		int b = a-- + a++;
		cout << "b�� �򰡰� : " << b << endl; // �����: 2
		// Ǯ��) a = a;(dec) -> a = a;(inc) -> [b = a + a <=> b = 1 + 1] -> b = 2

		// 2) prefix ���� ���
		int c = 1;
		int d = --c + ++c;
		cout << "d�� �򰡰� : " << d << endl; // �����: 2
		// Ǯ��) c = c - 1; -> c = c + 1; -> [d = c + c <=> d = 1 + 1] -> d = 2

		// 3) postfix decrement + prefix increment
		int e = 1;
		int f = e-- + ++e; 
		cout << "f�� �򰡰� : " << f << endl; // �����: 4
		// Ǯ��) e = e;(post) -> e = e + 1;(pre) -> [f = e + e <=> f = 2 + 2] -> f = 4

		// 4) prefix decrement + postfix increment
		int g = 1;
		int h = --g + g++;
		cout << "h�� �򰡰� : " << h << endl; // �����: 0
		// Ǯ��) g = g;(post) -> g = g - 1;(pre) -> [h = g + g <=> h = 0 + 0] -> h = 0;
	} cout << endl;

	/* Ȥ�� �� ������ ����� ���� */
	{
		int a = 1;
		int b = --a * a++ + a--;
		cout << "b�� �򰡰� : " << b << endl; // �����: 0
		// �����ڿ켱����: postfix > prefix > * > +
		// Ǯ��) a = a;(post) -> a = a;(post) -> a = a - 1;(pre) -> [b = a * a + a <=> b = 0 * 0 + 0] -> b = 0
	} cout << endl;

	system("pause");
}