#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	Sales_data data1, data2;
	double price = 0;
	// Set value for sales1
	std::cout << "Enter data for sale1: "<< std::endl;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	// we use price to calculate revenue
	data1.revenue = data1.units_sold * price;
	// Set value for sales2
	std::cout << "Enter data for sale2: "<< std::endl;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	// we use price to calculate revenue
	data2.revenue = data2.units_sold * price;

	//calculate the sum
	// first we need to validate if both come from the same book
	if(data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data2.units_sold + data1.units_sold;
		double totalRevenue = data2.revenue + data1.revenue;
		std::cout << "Average sale price: " << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if(totalRevenue != 0) {
			std::cout << totalRevenue/totalCnt << std::endl;
		} else {
			std::cout << "No Sales" << std::endl;
		}
		return 0;
	} else {
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}
