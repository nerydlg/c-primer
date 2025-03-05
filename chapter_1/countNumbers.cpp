#include<iostream>

int main()
{
	int currVal = 0, val = 0, count=0;
	if(std::cin >> currVal) {
		count = 1;
		while(std::cin >> val) {
			if(val == currVal){
				count++;
			} else {
				std::cout << currVal << " occurs " << count << std::endl;
				currVal = val;
				count = 1;
			}
		}
		std::cout << currVal << " occurs " << count << std::endl;
	}
	return 0;
}
