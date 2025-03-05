#include<iostream>
#include "Sales_item.h"

int main()
{
	Sales_item a, b;
	
	std::cout << "enter a sales item:" << std::endl;
	std::cin >> a;
	
	std::cout << "enter another sales item:" << std::endl;
	while(std::cin >> b)
 	{
		if(b.isbn() == a.isbn())
	 	{
			a += b;
		} 
		std::cout << "enter another sales item:" << std::endl;
	}

	std::cout << "the sum is: " << a << std::endl;
	
	return 0;
}
