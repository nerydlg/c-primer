#include<iostream>

int main()
{
	// referencing pointers
	int i = 42;
	int *pi = 0; // pi is initialized but points to nothing
	int *pi2 = &i; // pi2 is pointing to the address of i 
  int *pi3; // pi3 is created but not initialized
	pi3 = pi2; // now pi3 is pointing to i same as p2
	pi2 =0; // now pi2 is pointing to nothing.

	// ========== exercises 1  ========
	// Write code to change the value of a pointer
	int *p = 0; // pointer starts pointing to nothing
	int mil = 1000;
	p = &mil; // now pointer p is pointing to the address of mil
	std::cout << p << " points to: " << *p << std::endl;
	// to change the value to where the pointer points but address keeps the same 
	*p = 10;

	std::cout << p << " points to: " << *p << std::endl;

	//========== exercise 2 ==============
	int ii = 42;
	int *p1 = &ii;
	*p1 = *p1 * *p1; // multiply 42 times 42 
	std::cout << *p1;

	//======== exersice 3 ===============
	int iii = 0;
	// double* dp = &i; // invalid pointer most be same type as reference.
	// int *ip = iii; // invalid 
	int *iip = &iii;
  //======= exercise 4 ================
	if(iip){ // only because iip is initialized it evaluates as true;
		std::cout << "iip is initialized";
	}
	if(*iip) { // this one evaluates to false
		std::cout << "*iip evaluates as true";
	}
	//======= exercise 5 ===============
	void* vp = &iii; // this is valid because vp is a void pointer 
	// long* lp = &iii; // this is not valid because lp and iii are from different types
	return 0;
}
