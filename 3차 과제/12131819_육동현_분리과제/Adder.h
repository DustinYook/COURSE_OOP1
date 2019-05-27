#ifndef ADDER_H
#define ADDER_H

/* Adder module class */
class Adder 
{ 
private:
	int op1, op2; // member data
public:
	Adder(int, int); // constructor overloading
	int process();
};
#endif