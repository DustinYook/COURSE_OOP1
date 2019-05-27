// 프로그램 설명: Hello World 출력 및 기본설명
#include <stdio.h> // printf를 이용하기 위한 전처리기
#include <iostream> // cout을 이용하기 위한 전처리기 
using namespace std; // namespace: 자바 package와 비슷 (파일경로)
// #include는 preprocessor 

int main(void)
{
	cout << 123 << 456 << '\n';
	cout << 123 + 456 << '\n';
	printf("%s", "Hello World!\n"); // C언어 출력 
	cout << "Hello World!" << endl; // C++ 출력
	cout << "객체지향프로그래밍1" << endl;
	system("pause");
	return EXIT_SUCCESS; // named constant를 사용함 (#define)
}
