#include <iostream>
#include <vector>
#include <string>

using namespace std;


int presedence() {
	return 5 + 10 * 20 / 2; // 25
}

void pointers() {
	vector<string> v1(5);
	auto iter = v1.begin();
	*iter++; // valid will move iter one ahead 
	iter->empty(); // valid will call the empty method of string
	// (*iter)++; // error no operator ++ 	
	// ++*iter; // invalid similar to above  
	// *iter.empty(); //invalid no member empty
	iter++->empty(); // valid will call empty method over current string and then move to the next one
}

int main() {
	// exercise 1 operator presedence:
	cout << presedence();
	
}


