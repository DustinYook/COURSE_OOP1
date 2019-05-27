#include <iostream>
using namespace std;

template <typename T>
void Swap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp; 
}

int main()
{
	int x = 10, y = 20;
	Swap(x, y);
	
	system("pause");
}