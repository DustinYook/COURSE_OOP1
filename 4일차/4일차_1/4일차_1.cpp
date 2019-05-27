// ���α׷� ����: Ŭ������ ��ü������ ���� ���ʿ���
#include <iostream>
#include <string> // getline ���̺귯�� �Լ� ���� (istream���� �ִ°� �ƴԿ� ����!)
using namespace std;

/* Class Definition */
class GradeBook // User-defined type (Abstract Data Type)
{
private: // Member Data - private keyword is Omissible (default value)
public: /* Member Function */
	void displayMessage(string) const; // execute operations
	void printTest() const; // can access private data through member functions
}; // ����) Ŭ������ �����ݷ����� ������ - ���ڵ��� ����!

/* Member Function Implementation */
void GradeBook::displayMessage(string name) const // ����Լ� -> formal parameter(���ĸŰ�����)
{
	cout << "Welcome to the Grade Book for " << name << endl;
	// string�� ���� �����ڴ� <iostream>�� ���ǵǾ� ���� �ʾ� <string>�� �߰��ؾ� �� -> �Լ������ε�
}
void GradeBook::printTest() const // function header
{ // function body start
	cout << "TEST" << endl;
} // function body end

int main() // Automatically called by Operating System
{
	/* ��ü������� #1 */
	GradeBook myGradeBook; // stack�� ��ü����	
	/* ��ü������� #2 */
	GradeBook* gPtr = new GradeBook(); // heap�� ��ü����(�����Ҵ�) - �̸����� ������ ����
	
	string courseName;
	/* space�� delimiter�� �ƴ� �Է��Լ� */
	cout << "����� �Է� : "; // user input prompt
	getline(cin, courseName); // ����) �� �Լ��� <string>�� ���̺귯���Լ��� 
	// Tip) ���⸦ �����ϴ� �Է¿� ���� ����
	/* space�� delimiter�� �Ǵ� �Է��Լ� */
	cout << "����� �Է� : "; // user input prompt
	cin >> courseName; // cin�� space�� delimiter
	// Point) �� �Լ��� �������� ���ؼ� ��Ȯ�� �˾Ƶξ�� ��!
	
	/* ��ü������� #1�� ���� ����Լ�ȣ�� */
	myGradeBook.displayMessage(courseName); // ��Ʈ�����ڸ� ���� ȣ��
	/* ��ü������� #2�� ���� ����Լ�ȣ�� */
	gPtr->displayMessage(courseName); // �������� ��� ȭ��ǥ�����ڸ� ���� ȣ��
	(*gPtr).displayMessage(courseName); // �����������ڸ� ���̸� ������ü�� �ǹǷ� ��Ʈ������ ��밡��
	// Point) �� ��ü��������� �������� ���ؼ� ��Ȯ�� �˾Ƶξ�� ��!
	
	system("pause");
}
// Actual Parameter(�ǸŰ�����): �Լ�ȣ��ο� �ִ� �Ķ������������
// Formal Parameter(���ĸŰ�����): �Լ������� �ִ� �Ķ������������
// �ǸŰ������� ���ĸŰ������� �Ķ�������������� �ݵ�� ��ġ�ؾ� syntax error�� �߻����� �ʴ´�.
// Point) Data Type is a range of value and a set of operations 
// ex) int�� %operator�����ϳ� double�� �׷��� ����