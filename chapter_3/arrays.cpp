#include <iostream>
#include <string>

using namespace std;

void initializeArray() {
	const unsigned size = 3;
	int ia1[size] = {0, 1, 2}; // {0, 1, 2}
	int a2[] = {0, 1, 2}; // {0 ,1 ,2}
	int a3[5] = {0, 1, 2}; // {0, 1, 2, 0, 0}
	string astr[3] = {"hi", "bye"}; // {"hi", "bye", ""}
	// int a5[2] = {0,1,2}; //this one will fail with error: Too many initializers

	char cha1[] = {'C',  '+', '+'}; // {c, +, +}
	char cha2[] = {'C', '+', '+', '\0'}; // explicit null 
	char cha3[]	= "C++"; 	 //{'C', '+', '+', '\0'} null terminator added automatically
	// char cha4[6] = "Daniel"; // Error: no space for null terminator 
	// char cha4 = cha1; // Error cannot initialize an array with another
}

int txt_size(){
	return 5;
}

void printArray(string arr[], unsigned size) {
	for(int i = 0; i < size; i++){
		cout << ", " << arr[i]; 
	}
	cout << endl;
	cout << "===============================" << endl;
}
void printArray(int arr[], unsigned size) {
	for(int i = 0; i < size; i++){
		cout << ", " << arr[i]; 
	}
	cout << endl;
	cout << "===============================" << endl;
}

void exercise3_5_1(){
	unsigned buf_size = 1024;
	int ia[buf_size];
	printArray(ia, buf_size);
	
	int ia2[txt_size()];
	printArray(ia2, txt_size());

	int ia3[4 * 7 - 14];
	printArray(ia3, 4 * 7 - 14);

	// char st[11] = "fundamental"; // ERROR: not space for null
}

string sa[10];
int intarray[10];

int main(){
	int input;
	string sa2[10];
	int intarray2[10];
	cout << "Choose an option:" << endl;
	cout << "1) initilization (no output)" << endl;
	cout << "2) exersice 2 (no output)" << endl;
	cout << "3) initialize arrays in main and global" << endl;
	cin >> input;
	switch(input) {
		case 1:
			initializeArray();
			break;
	  case 2:
			exercise3_5_1();
			break;
		case 3:
			cout << "global" << endl;
			printArray(sa, 10);
			printArray(intarray, 10);
			cout << "In method main" << endl;
			printArray(sa2, 10);
			printArray(intarray2, 10);
			break;
		default:
			cerr << "Input is not valid please enter a value bewteen 1-3" << endl;
			break;
	}
	return 0;
}
