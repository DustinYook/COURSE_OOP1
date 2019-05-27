// 프로그램 설명: 합격과 불합격 여부를 입력받고 강사에 대한 평가내리는 프로그램
#include <iostream>
#include <stdexcept>
using namespace std;
#define MAX 10
enum RESULT { PASS = 1, FAIL = 2 };

int main()
{
	unsigned int cntPass = 0; // the number of passes
	unsigned int cntFail = 0; // the number of fails
	unsigned int result; 

	cout << "[notice] PASS: 1, FAIL: 2" << endl;
	for (int i = 0; i < MAX; i++)
	{
	LABEL:
		try
		{
			cout << "Enter result #" << (i + 1) << " : ";
			cin >> result;
			switch (result)
			{
			case PASS: cntPass++;
				break;
			case FAIL: cntFail++;
				break;
			default:
				throw exception("\n[warning] wrong input!\n\a");
			}
		}
		catch (exception ex)
		{
			cerr << ex.what() << endl;
			goto LABEL;
		}
	}
	cout << "PASS: " << cntPass << endl;
	cout << "FAIL: " << cntFail << endl;
	if(cntPass >= 8)
		cout << "Bonus to instructor!" << endl;
	system("pause");
}