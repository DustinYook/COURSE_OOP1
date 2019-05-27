// Adder.cpp : Implememtation of member functions (for "Adder.h")
#include "Adder.h"

Adder::Adder(int a, int b) 
{
	op1 = a; // set member data as variable, a
	op2 = b; // set member data as variable, b
}

int Adder::process() 
{
	return op1 + op2; // execute add operation
}