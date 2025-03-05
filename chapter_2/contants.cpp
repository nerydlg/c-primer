#include<iostream>

int main()
{
	// const int buf; // not valid constant needs to be initialized
	int cnt = 0;
	const int sz = cnt;
	++cnt;
	std::cout << cnt << std::endl;	
	// ++sz;
	std::cout << sz << std::endl;

	std::cout << "=========================" << std::endl;

	int errNum = 0;
	int *const curErr = &errNum; // currErr will always point to errNum in memory that means that if the value change that does not affect the const declaration
	const double pi = 3.14159;
	const double *const pip = &pi; // pip is a constant pointer to a constant object we cannot change its value
	// *pip = 4.33 // will result in an error
	errNum = 2;
	std::cout << errNum << " <== nonconst / const ==>  " << *curErr << std::endl;
	// we can even change the value using the pointer 
	*curErr = 0;
	std::cout << errNum << " <== nonconst / const ==>  " << *curErr << std::endl;

	std::cout << "=========================" << std::endl;

	const int i = -1, &r = 0; // valid
	const int i2 = i, &r1 = i;
	const int *p1 = &i2;
	// int *const p2 = &i2; // invalid,  because of the types
	const int *const p3 = &i2; // constant pointer to an int constant.
  // const int &const r2; // invalid, needs to be initialized
	int null = 0, *p = &null;

	constexpr int mf = 20; // this is the same as const int mf = 20 it is known as a constant expression
	
	return 0;
}
