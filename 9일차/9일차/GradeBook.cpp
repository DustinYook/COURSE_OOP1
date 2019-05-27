#include "GradeBook.h"

GradeBook::GradeBook(string name)
{
	setCourseName(name);
}
void GradeBook::setCourseName(string name)
{
	if (name.size() <= 5)
		courseName = name;
	else
	{
		courseName = name.substr(0, 5);
		cerr << "[warning] The name exceeds designated length.\a" << endl;
		cerr << name << " -> " << courseName << endl;
	}
}
string GradeBook::getCourseName() const
{
	return courseName;
}
void GradeBook::displayMessage(string name) const
{
	cout << "Welcome to the Grade Book for " << getCourseName() << "!\n" << endl;
}
void GradeBook::determineClassAverage() const
{
	/* initialization */
	unsigned int gradeCounter = 0; // unsigned�� ��� �׻� ����� ǥ��
	unsigned int total = 0;

	/* input procedure */
	cout << "[Notice] Enter -1 to end an input process" << endl; // user-input prompt
	while (gradeCounter != -1) // gradeCounter: sentinel value
	{
	LABEL:
		int tempScore;
		try
		{
			cout << "Enter the grade #" << (gradeCounter + 1) << " : ___\b\b\b"; // �Է� �ʵ带 �����ϴ� ȿ��
			cin >> tempScore;
			if (tempScore == -1)
				break;
			else if (tempScore < 0 || tempScore > 100)
				throw exception("\n[warning] wrong input!\a\n");
		}
		catch (exception ex)
		{
			cerr << ex.what() << endl;
			goto LABEL;
		}
		total += tempScore;
		gradeCounter++;
	} cout << "==============================" << endl;
	/* divide-by-zero exception handling */
	if (gradeCounter != 0)
	{
		double average = static_cast<double>(total) / gradeCounter;
		cout << "Student Number: " << gradeCounter << endl;
		cout << "Total Score: " << total << endl;
		cout << "Average Score: " << fixed << setprecision(2) << average << endl;
	}
	else
		cout << "Nothing to process\a" << endl;
	cout << "==============================" << endl;
	cout << "[System] End the program" << endl;
}

/* ���� �ۼ��� �κ� */
void GradeBook::inputGrade()
{
	cout << "Enter the score." << endl;
	int num[3];
	for (int i = 0; i < 3; i++)
	{
	LABEL:
		try
		{
			cout << "Input #" << (i + 1) << " : ";
			cin >> num[i]; // �Է°� ���ÿ� ���� �ʱ�ȭ
			if (num[i] < 0 || num[i] > 100)
				throw exception("\n[Warning] wrong input!\n\a");
		}
		catch (exception ex)
		{
			cerr << ex.what() << endl;
			goto LABEL;
		}
	}
	this->maxGrade = maximum(num[0], num[1], num[2]);
	// maximum���� �μ��� actual parameter
	this->minGrade = minimum(num[0], num[1], num[2]);
	// this�� ���� ��ü�� ����Ű�� ������
}
int GradeBook::maximum(int x, int y, int z) const // �� �ȿ� ���� �Ű������� formal parameter
{
	int maxTemp = x; // ������ ���� �ִ�� ����
	if (y > maxTemp)
		maxTemp = y;
	if (z > maxTemp)
		maxTemp = z;
	return maxTemp;
}
int GradeBook::minimum(int x, int y, int z) const
{
	int minTemp = x; // ������ ���� �ּҷ� ����
	if (y < minTemp)
		minTemp = y;
	if (z < minTemp)
		minTemp = z;
	return minTemp;
}
void GradeBook::displayReport() const
{
	cout << "The maximum score is " << this->maxGrade << endl;
	cout << "The minimum score is " << this->minGrade << endl;
	return; // control�� caller���� �Ѱ���, return�� �������� (���ν���)
}