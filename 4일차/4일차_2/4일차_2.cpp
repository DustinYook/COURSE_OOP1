// ���α׷� ����: Ŭ������ ��ü������ ���� ���ʿ���
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14

/* Class Definition */
class Circle
{
	// public, private, �׸��� protected�� ���������ڶ�� ��
private:
	// 1) �������: ������ �ִ� Ư�� (attribute) 
	// private�� ���� Information Hiding ����: ������ ��(public)�� ���� ��(private)�� ����
	// �߿��� �ڷ��� ���ȼ����� 
	int r;
public: 
	// 2) ����Լ�: �� �� �ִ� ���� (behavior)
	// get, set�Լ��� getters, setters - ��ǥ���� public �Լ�
	int getR() const; // function prototype
	void setR(int);
	double getArea() const;
};
/* Member Function Implementation */
int Circle::getR() const // Circle::�� �ش� Ŭ���� �Ҽ����� �˷��� (�������)
{
	return r;
}
void Circle::setR(int input) // ::(Scope resolution operator)
{
	r = input;
}
double Circle::getArea() const
{
	return PI * pow(r, 2);
}

int main()
{
	Circle c; // ��ü����
	cout << "�������� �Է����ֽʽÿ� : ";
	int r;
	cin >> r;
	c.setR(r);
	cout << "�ش� �������� �ش��ϴ� ���� ���̴� " << c.getArea() << "�Դϴ�." << endl;
	system("pause");
}
// ���α׷�: �������Է� -> �� ����(setters) -> ������ó�� -> �� ��ȯ(getters) - >������