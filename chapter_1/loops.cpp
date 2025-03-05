#include<iostream>

int main()
{
	// Excercise 1.9
	int sum = 0, val = 50;
	for(int val = 50; val <= 100; val++)
	{
		sum += val;
	}
	std::cout << "the sum of number from 50 - 100 is:" << sum << std::endl;

	// Excercise 1.10
	int i = 10;
	while(i >= 0) 
	{
		std::cout << i << std::endl;
		i--;
	}
	// Exercise 1.11
	std::cout <<  "Please enter two numbers" << std::endl;
	int start, end;
	std::cin >> start >> end;
	while(start < end) {
		std::cout << start << std::endl;
		start++;
	}
	return 0;
}
