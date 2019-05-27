// ���α׷� ����: default argument�� function overloading�� ���� �ǽ�
#include <iostream>
using namespace std;

/* default argument�� ���� ���ǻ��� */
int cube(int x = 1, int y = 1, int z = 1); 
// 1) default argument must start at the end of parameter list (rigthmost)
//    int cube(int x = 1, int y, int z); // �̷��� leftmost�� �ϸ� syntax error
//    int cube(int x, int y = 1, int z); // �̷��� �߰��� ���Ƶ� syntax error
//    <�߿�> �ݵ�� rightmost�κ��� �����Ͽ� ���ʹ������� ä�������� ��
// 2) default argument�� function prototype(definition)�� ����ؾ� ��
//    <�߿�> function definition(implementation)���� ����ϸ� syntax error�� �߻�
// 3) function overloading���� collision �߻��� ����
//    int cube(int x, int y, int z);�� ���� function overloading�� int cube(int x, int y);�� ��� 
//    int cube(int x, int y = 1, int z = 2);�� ���� default argument ��İ� ���� ���α׷����� ����ϸ�
//    �����Ϸ��� ��� �Լ��� ȣ���ؾ� �� �� �Ǵ��� �� ���� ������ syntax error�� �߻���
int powThree(int x, int y = 1, int z = 2); // 4) �Ʒ��� �����Ǵ� ������� ������ ��! 

/* function overloading */
void fun(int i) { cout << "AAA" << endl; }
void fun(double i) { cout << "BBB" << endl; }

int main()
{
	/* default argument */
	cout << cube(10, 10, 10) << endl;
	cout << cube(10, 10) << endl;
	cout << cube(10) << endl;
	cout << cube() << endl;
	// default argument�� ����ϸ� ��ġ �Լ������ε��� �� �Ͱ� ����� ȿ��

	/* �����ؾ� �� �κ� */
	cout << powThree(10, 10, 10) << endl; // �����: 10 * 10 * 10 = 1000
	cout << powThree(10, 10) << endl;     // �����: 10 * 10 * <2> = 200
	cout << powThree(10) << endl;         // �����: 10 * <1> * <2> = 20

	/* function overloading */
	fun(1);
	fun(3.14);
	// ���� void fun(double);�� �ִ� ��� fun(1)�� ȣ���ϸ� int���� double�� parameter promotion�� ����
	// ���� fun(1.000000)�� ȣ���
	// ���� void fun(int);�� �ִ� ��� fun(3.14)�� ȣ���ϸ� 3.14���� truncation(Narrowing Conversion)�� ����
	// ���� fun(3)�� ȣ��� -> JAVA���� �̷� ����� syntax ����!

	// ����� �ٸ��� function overloading ����� ���
	// ���� �ٸ��� default argument ����� ���
	system("pause");
}

int cube(int x, int y, int z)
{
	return x * y * z;
}
int powThree(int x, int y, int z) 
{
	return x * y * z;
}
// <����> function header�� default argument�� ����ϸ� syntax error
// int powThree(int x, int y = 1, int z = 2)
// {
//	 return x * y * z;
// }