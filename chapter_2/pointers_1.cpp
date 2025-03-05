#include<iostream>

int main()
{
	// Test1 
	int ival = 1.01; // valid but will lose the decimal part
	int &rval2 = ival; // valid and holds the same value as ival
	// int &rval1 = 1.01; // invalid: cannot asign value directly to a reference.
	// int &rval3; // invalid it needs to be initialized
	std::cout << ival << std::endl;
	std::cout << &rval2 << std::endl;
	return 0;
}
