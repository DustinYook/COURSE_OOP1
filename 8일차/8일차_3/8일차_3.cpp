// 프로그램 설명: break, continue 심화문제 시험출제!
#include <iostream>
using namespace std;

int main()
{
	// 주의) break와 continue는 scope하나만 벗어남/스킵함
	// 여러 scope 벗어나려면 goto를 사용, 또는 break를 여러번 사용

	/* break 심화 */
	for (size_t i = 0; i < 5; i++) // 행 제어
	{
		for (size_t j = 0; j < 5; j++) // 열제어
		{
			if (i == 2)
				break; // 하나의 scope만 탈출
			cout << i << "," << j << "\t";
		} cout << endl;
	} cout << endl << endl;

	/* continue 심화 */
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (i == 2)
				continue;
			cout << i << "," << j << "\t";
		} cout << endl;
	} cout << endl << endl;

	/* goto문과 LABEL */
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
	// 주의) LABEL밑에 반드시 실행가능코드가 있어야 함 (아니면 컴파일에러)
	// 주의) goto는 블록 안에서 밖으로는 되나, 밖에서 안으로는 안됨!
	// 참고) JAVA는 break L1;과 같이 표현가능, 대신 goto문 없음

	/* row와 column 제어방법 */
	{
		/* 시험문제 출제 */
		// 1) break를 이용한 열 제어
		for (size_t i = 0; i < 5; i++) // 행 제어
		{
			for (size_t j = 0; j < 5; j++) // 열제어
			{
				if (j == 2)
					break; // 주의) 하나의 scope만 탈출
				cout << i << "," << j << "\t";
			} cout << endl;
		} cout << endl << endl;

		// 2) break를 이용한 행 제어
		for (size_t i = 0; i < 5; i++) // 행 제어
		{
			for (size_t j = 0; j < 5; j++) // 열제어
			{
				if (i == 2)
					break; // 주의) 하나의 scope만 탈출
				cout << i << "," << j << "\t";
			} cout << endl;
		} cout << endl << endl;
	}

	system("pause");
}

//if (i == 5)
//	break; // 만날 시 빠져나감
//if (i == 2)
//	continue; // 만날 시 아래부분은 스킵하고 위로 올라감 