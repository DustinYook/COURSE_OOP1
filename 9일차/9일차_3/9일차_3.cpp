// ���α׷� ����: �̸����(Named Constant)�� ���� �ǽ�
#include <iostream>
using namespace std;

/* ù��° ���: #define�� �̿��� ��� */
#define PI 3.14 

int main()
{
	/* ������ ��� */
	int var = 10;
	var = 20; 
	// ����(variable)�� ��� ���� ������ ����

	/* ����� ��� */ 
	// Named Constant�� �����ϴ� 3���� ���
	// 1) #define �̿� 
	// 2) Ű���� const �̿� 
	// 3) ����ü/������(enum) �̿�
	//
	// PI = 3.141592; (sytnax error)
	// ���(constant)�� ��� ���� ������ �Ұ�
	//
	/* �ι�° ���: Ű���� const�� �̿��� ��� */
	const int NUM = 10; // Ư¡1_����� �ݵ�� �ʱ�ȭ �ؾ���
	// NUM = 20;        // Ư¡2_����� ���� ������ �Ұ�
	//
	/* ����° ���: ����ü enum�� �̿��� ��� */
	// ����) ����ü�� ������� ���� ��� 0���� ���� / JAVA, C#������ ���� ��� / ����� �̸� ����
	//
	// ����ü�� ����1_Ÿ���� �����Ͽ� �Է¿����� ������ �� ����
	enum Status { ONE, TWO = 2, THREE }; // ����) ONE�� 0, THREE�� 3 
	Status s = ONE; // ������� �Է� ������ ����
	switch(s)
	{
	case ONE: cout << "1�� �Է��ϼ̽��ϴ�." << endl;
		break;
	case TWO: cout << "2�� �Է��ϼ̽��ϴ�." << endl;
		break;
	case THREE: cout << "3�� �Է��ϼ̽��ϴ�." << endl;
		break;
	default: cerr << "�߸��Է��ϼ̽��ϴ�." << endl;
	}
	cout << s << endl; // 0�� ���
	cout << s + 1 << endl; // C++�� ����, �ٸ� Ÿ�԰� ������ ��; ������ (JAVA�� �����Ͽ���)
	//
	// ����ü�� ����2_����� �̸��� �ٿ� �������� ������
	enum Week { SUN, MON, THUR, WED, THU, FRI, SAT };
	cout << Week::SUN + 1 << endl; // scope resolution operator�� ���� �����ǥ�� ����
	//                             // ����) enum class Week�� �� ��� Week::SUN�ϸ� �����Ͽ���
	//							   // ��°��� ���Ƶ� �ǹ̰� �ٸ��� ���� �ľǰ��� (35�� ���ΰ� ��)
	//
	// ����ü�� ����3_�ڵ��� ���������� ��������
	enum Game { WIN = 10, DRAW = 20, LOSE = 30}; // �� ��������
	Game g = WIN;
	if (WIN == 0)
		cout << "�̰���ϴ� : " << Game::WIN << endl;
	// ���� WIN�� 10�� �ƴ϶� 0���� �ٲٰ� ������ �ڵ��� WIN�� ������ �ٲ� �ʿ����
	// enum Game { WIN, DRAW = 20, LOSE = 30};���� ���Ǹ� �ٲ��ָ� ��
	
	// #define�� enum�� Ÿ������ �Ұ�, const����� ���� Ÿ���� ����� �� �ִ� ����!

	system("pause");
}