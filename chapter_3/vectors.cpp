#include <iostream>
#include <string>
#include <vector>

using namespace std;

void vectorInitialization() {
	// define empty vector
	vector<string> vstring;
	// define vector with values
	vector<string> vector2 = { "str1", "str2", "str3" };
	// initialize vector with values
	vector<string> vector3 { "str1", "str2", "str3" };
	// initialize a vector holding 10 zeros
	vector<int> vint (10, 0);
	// default vector of vectors
	vector<vector<int>> ivec;
	// will create 10 strings with "null" value
	vector<string> vstr(10, "null");
}

void addElementsToVector(){
	vector<int> vint;
	for(int i = 0; i < 100; i++) {
		vint.push_back(i);
	}
	cout << "size of vint: " << vint.size() << endl;
}

void addElementsToVector2(){
	vector<int> vint;
	for(int i = 0; i < 100; i++) {
		vint.push_back(i);
	}

	//print data using iterator
	for(auto it = vint.begin(); it != vint.end(); it++){
		cout << *it << endl;
	}
}

void addInputInt() {
	int input;
	vector<int> vint;
	// read data from standard input
	while(cin >> input){
		vint.push_back(input);
	}
	// print values
	for(const int& val : vint) {
		cout << val << endl;
	}
}

// count clusters using index
void countClusters() {
	int input;
	int index = 0;
	vector<int> vint(11, 0);
	while(cin >> input) {
		index = input / 10;
		vint[index]++;
	}

	for(auto &val : vint) {
		cout << " " << val  << " ";
	}
	cout << endl;
}
// cunt clusters using iterators.
void countClusters2(){
	int input;
	vector<int> vint(11, 0);
	auto it = vint.begin();
	while(cin >> input) {
		it = vint.begin() + input/10;
		*it = (*it) + 1;
	}

	for(auto ite = vint.begin(); ite != vint.end(); ite++){
		cout << " " << *ite << endl;
	}
}

void duplicateValue(){
	vector<int> vint;
	for(int i = 0; i < 10; i++) {
		vint.push_back(i);
	}

	//duplicate values
	for(auto it = vint.begin(); it != vint.end(); it++){
		*it = (*it) * 2;
		cout << *it << endl;
	}

}

void binarysearch() {
	int input;
	vector<int> vint;
	for(int i = 0; i < 100; i++) {
		vint.push_back(i);
	}

	cout << "insert the number you are looking for ";
	cin >> input;
	// binary search 
	auto start = vint.begin(), end = vint.end();
	auto mid = vint.begin() + (end - start)/2;
	while(mid != end && *mid != input){
		if(*mid < input) {
			start = mid;
		} else {
			end = mid;
		}
		mid = start + (end - start)/2;
	}

	cout << *mid << endl;
}

int main() {
	int input = 0;
	cout << "Choose what you want: " << endl;
	cout << "1) vectorInitialization (no input or output)" << endl;
	cout << "2) addElementsToVector " << endl;
	cout << "3) read input and insert to vector" << endl;
	cout << "4) count segments" << endl;
	cout << "5) duplicate values in a vector" << endl;
	cout << "6) binary search between 0 and 100" << endl;
	cin >> input;
	switch(input) {
		case 1: 
			vectorInitialization();
			break;
		case 2:
			addElementsToVector2();
			break;
		case 3:
			cout << "Start adding data: " << endl;	
			addInputInt();
			break;
		case 4:
			cout << "start entering numbers: " << endl;
			countClusters2();
			break;
		case 5:
			cout << "duplicate value" << endl;
			duplicateValue();
			break;
		case 6:
			cout << "binary search " << endl;
			binarysearch();
			break;
		default:
			cout << "input is not valid" << endl;
			break;
	}
	return 0;
}
