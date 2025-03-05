#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void FirstWordUpperCase() {
	string myStr("Hello World!!!");
	// we use decltype to define index as string::size_type
	for(decltype(myStr.size()) index = 0; index < myStr.size() && !isspace(myStr[index]); index++) {
		myStr[index] = toupper(myStr[index]);
	}
	cout << myStr << endl;
}

int main() {
	cout <<  " What method do you want to execute: " <<  endl;
		cout << "1) FirstWorldUppercase" << endl;
		cout << "2) ConvertToHex" << endl;
		cout << "3) " << endl;
	int option = 0;	
	cin >> option;
	switch(option) {
		case 1: 
			FirstWordUpperCase();
			break;
		case 2: 
		case 3:
		default:
			cerr << "option " << option << " is not a valid input" << endl;  
			break;	
	}
	return 0;
}

