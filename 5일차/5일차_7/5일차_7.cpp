#include <iostream>
using namespace std;

int main()
{
	/* while문 */
	int product = 3;
	int cnt = 0;
	while (product <= 100)
	{
		product = 3 * product;
		cout << "product #" << (cnt+1) << " : " << product << endl; // 루프 4번 돌고 5번째에 나감
		cnt++;
	}
	cout << "product: " << product << endl;
	system("pause");
}