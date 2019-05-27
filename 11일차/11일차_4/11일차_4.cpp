// 프로그램 목적: 배열을 이용한 성적분포그래프 작성프로그램
#include <iostream>
#include <array> // array class template - ★ 시험
#include <cstddef> // size_t 정의
using namespace std;
const int SIZE = 11; // Named Constant

int main()
{
	array<size_t, SIZE> arry = { 1, 2, 3, 4 ,5 ,6, 5, 4, 3, 2, 1 }; // 배열 초기화
	for (size_t i = 0; i < arry.size(); i++) // 배열 크기만큼 반복
	{
		/* 자료를 그래프화 하는 처리 */ // ★ 중요!!
		for (size_t j = 0; j < arry.at(i) ; j++) // 배열명.at(i)는 i번째 인덱스에 저장된 원소
			cout << " * "; // 'ㅁ'을 쓰고 한자키 누르면 특수문자 입력가능
		cout << endl;
	} cout << endl;
	// 중요) 배열의 첨자는 점수의 급간을 의미, 배열의 원소내용은 분포인원을 의미!
	system("pause");
}
