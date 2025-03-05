#include<iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r; // a in an int (r is an alias for i which has type int)
	std::cout << "A value is : " << a << std::endl;
	// ================================
	int b = 3, c = 4;
	decltype(b) d = b; // int
  decltype((c)) e = d; // error cannot bind int& to 
	++d;
	++e;
	return 0;
}
