// 프로그램 설명: sizeof함수와 for문 자동입력에 대한 실습
#include <iostream>
using namespace std;
typedef unsigned int UINT; // UINT: 사용자재정의, size_t: 시스템재정의

int main()
{
	/* sizeof함수 */
	{
		cout << sizeof(short int) << endl; // 2바이트
		cout << sizeof(wchar_t) << endl; // 2바이트
		cout << sizeof(char) << endl; // 1바이트
		cout << sizeof(bool) << endl; // 1바이트
		// sizeof()는 operand의 바이트수를 반환하는 함수
	} cout << endl;
	
	/* for의 자동입력방법 */
	{
		for (size_t i = 0; i < 10; i++)
		{ // Tip) 드레그 블록해서 i를 j로 바꾸면 한꺼번에 바뀜
			for (size_t j = 0; j < i; j++)
			{
				cout << j;
			} cout << endl;
		} cout << endl;
		// for문 자동입력: for를 타이핑한 후 <tab>을 누름
		// 여기서 size_t는 unsigned int의 typedef임 (재정의)
	} cout << endl;

	/* typedef의 사용법 */
	{
		// 라인 4번 참고
		for (UINT i = 65; i < 91; i++)
		{
			cout << static_cast<char>(i) << " ";
		} cout << endl;
		// unsigned int가 길어서 typedef(재정의)를 통해서 단축형으로 쓸 수 있음
	}
	
	system("pause");
}