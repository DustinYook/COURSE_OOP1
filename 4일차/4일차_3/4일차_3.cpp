// ���α׷� ����: Ŭ������ �������� ������ ����
#include <iostream>
#include <string>
using namespace std;

/* Class Definition */
class GradeBook
{
private: // �ʵ带 public���� ��ġ�ϴ� ���� convention
	string courseName;
public: 
	// GradeBook() {} // implicit default constructor: ��ü����, �Ķ���� ���� 
	// �����ڰ� ���ǵ��� ���� ��� �����Ϸ��� ���� �ڵ����� ����
	explicit GradeBook() { courseName = "courseName"; } 
	// explicit default constructor: ����ڿ� ���� ��������� �ۼ�, ��������� �ʱ�ȭ����
	GradeBook(string n) :courseName(n) { cout << "������ ȣ��" << endl;  } 
	// GradeBook(string n) { courseName = n; } // �� ���� ǥ������ �� ǥ���İ� ����
	// :courseName(n)�� member-initializer������� �ʱ�ȭ�ϴ� ���
	// ���� explicit GradeBook�� ������ ��Ī�� �������� �Ķ�������������� �ٸ� ������ -> �����ڿ����ε�
	void displayMessage(string) const;
	void setName(string);
	string getName() const;
}; 
void GradeBook::displayMessage(string name) const
{
	// �Լ��̿�: �ð��� �� �ɸ� (�ܺ����ٽ� �ʼ���)
	cout << "Welcome to the Grade Book for " << getName() << endl; 
	// �����������: �ð��� ª�� �ɸ� (�ܺ����ٽ� �Ұ�)
	cout << "Welcome to the Grade Book for " << courseName << endl;
}
void GradeBook::setName(string n) 
{
	courseName = n;
}
string GradeBook::getName() const
{
	return courseName;
}

int main()
{
	GradeBook myGradeBook; // Default Constructor Call
	// GradeBook myGradeBook(); 
	// �����߻�(�ƹ��͵� �ʱ�ȭ ���� ����)
	cout << myGradeBook.getName() << endl;
	GradeBook gb("c++"); // Parameterized Constructor Call
	string courseName;
	cout << "����� �Է� : "; 
	getline(cin, courseName); // <string>�� ���ǵ� ���̺귯���Լ�
	myGradeBook.setName(courseName);
	myGradeBook.displayMessage(courseName);
	system("pause");
}