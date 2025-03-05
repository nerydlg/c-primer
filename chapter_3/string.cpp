#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void exercise3_1(){
	string input; // define default string
	while(getline(cin, input)) { // will read a whole line until it reach EOF
		cout << input  << endl; 
	}
}

void exercise3_2(){
	string input; // define default string
	while(cin >> input){ // reads a word at a time
		cout << input  << endl; 
	}
}

void exercise3_3() {
	string input1, input2;
	cout << "write string one: " << endl;
	cin >> input1;
	cout << "write string two: " << endl;
	cin >> input2;
	cout << "the biggest string is: ";
	if(input1 >= input2){
		cout << input1 << endl;
	} else {
		cout << input2 << endl;
	}
}

void exercise3_5() {
	string input;
	getline(cin, input);
	if(input.begin() != input.end()) { // validate string is not empty
		auto it = input.begin(); // get the iterator first
		*it = toupper(*it); // dereference iterator and change it.
	}
	cout << input << endl;
}

void exercise3_4(){
	string input;
	string acc;
	while(getline(cin, input)){
		acc+= " " + input;
	}
	cout << acc;
}

int main()
{
	cout << "What exercise do you want to run:(default: 5) " << endl;
	cout << "	1) Read a whole line" << endl; 
	cout << "	2) Read word by word" << endl; 
	cout << "	3) Compare strings" << endl; 
	cout << "	4) Concatenate strings" << endl; 
	cout << "	5) Capitalize first letter" << endl; 
	cout << "	6) exit" << endl; 
	
	int input = 5;
	cin >> input;
	switch(input) {
		case 1:
			cout << "Read Line"	<< endl;
			exercise3_1();
			break;
		case 2: 
			cout << "Read by word "<< endl;
			exercise3_2();
			break;
		case 3: 
			cout << "compare strings " << endl;
			exercise3_3();
			break;
		case 4:
			cout << " collect strings" << endl;
			exercise3_4();
			break;
		case 5: 
			cout << "Capitalize first letter of a string " << endl;
			exercise3_5();
			break;
	  default: 
			cout << "bye";
			break;
	}
	return 0;
}
