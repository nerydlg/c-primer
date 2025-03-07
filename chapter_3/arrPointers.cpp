#include <iostream>
#include <string>
#include <iterator>

using namespace std;

void arraysAsPointers() {
	// the following expressions are equivalent.
	string nums[] = {"one",  "two"};
	string *p = &nums[0]; // this points to the first element of the array
	string *p1 = nums; // and can be also written in this way
	
	int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ia is an array of 10 ints
	auto ia2 (ia); // in this case the real type of ia2 is int*
	// but this not happen when we use decltype
	decltype(ia) ia3 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//  ia3 = p; // error cannot assign int* to an array	
}

void operationsWithPointers() {
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p = arr; // points to the first element in the array;
	cout << "first element: " << *p << endl;
	++p; // now it points to arr[1]
	cout << "after increment: " << *p << endl;
}

void pointersAsIterators() {
	int data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *start = begin(data); // returns the first element
	int *last = end(data); // returns one element after the last
	auto distance = end(data) - begin(data); // the type here is prtdiff_t and it is defined in the cstddef header
	cout << "distance: " << distance << endl;
	last--;
	cout << "begin: " << *start << endl;
	cout << "end: " << *last << endl;
	
}

void subscriptsWithPointers(){
	int data[] = {1, 2, 3, 4, 5, 6};
	int *p = data;
	for(int i = 0; i < 6; i++) {
		cout << *(p + i) << endl; // this expression is equivalent to data[i]
	}
}

int main() {

	int input;
	cout << "Choose an option: " << endl;
	cout << "1) Arrays as pointers (no output)" << endl;
	cout << "2) Operations with arrays" << endl;
	cout << "3) Pointers as Iterators" << endl;
	cout << "4) Subscript with pointers" << endl;
	cin >> input;
	switch(input) {
		case 1:
		arraysAsPointers();
		break;
		case 2:
		operationsWithPointers();
		break;
		case 3:
		pointersAsIterators();
		break;
		case 4: 
		subscriptsWithPointers();
		break;
		default:
			cout << "Invalid input please try again";
			break;
	}
	return 0;
}
