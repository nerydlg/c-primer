#include<iostream>

int main()
{
	// which of the following assignaments is invalid:
	int i = 0, &r1 = i; 
	double d = 0, &r2 = d;
	r2 = 3.14159; // valid it also will change the value of d
  i = r2; // valid and it will change value of i and r1
  r2 = r1; // valid and it will change value of d too
	r1 = d; // valid same as above

	std::cout << r2 << " d: "<< d << std::endl;
	std::cout << r1 << " i: "<< i << std::endl;

	// exercise 2.17
	int i1, &ri = i1;
	i1 = 5;
	ri = 10;

	std::cout << i1 << " "<< ri << std::endl;
	return 0;
}
