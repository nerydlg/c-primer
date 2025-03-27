#include "chapter_6.h"

using namespace std;

int sequence() {
	static int count = 0;
	return ++count;
}

void passByVal(int a) {
	a += 10;
	cout << "'a' has a new value: " << a << endl;
}
// pointers behave like as any other non ref type
void passByVal2(int *a) {
	*a = 13; // change the value only locally but not the address
	cout << "'a' has a new value: " << *a << endl;
}

void passByRef(int &a) {
	a = 4; // change the value and the address
	cout << "'a' has a new value: " << a << endl;
}

void pointerSwap(int *a, int *b) {
	int c = *a; // store int value into an aux 
	*a = *b; // copy value from b into a
	*b = c; // copu value from old a now c into b
}

void refSwap(int &a, int&b) {
	int c = a;
	a = b;
	b = c;
}

int main() {
	int a = 0;
	int b = 99;
	passByVal(a);
	passByVal2(&a);
	cout << "but original 'a' remians: " << a << endl;
	passByRef(a);
	cout << "and original 'a' also changed: " << a << endl;

	cout << "pre swap a: " << a << " b: " << b << endl;
	pointerSwap(&a, &b);
	cout << "post swap a: " << a << " b: " << b << endl;
	
	cout << "pre ref swap a: " << a << " b: " << b << endl;
	refSwap(a, b);
	cout << "post ref swap a: " << a << " b: " << b << endl;
	for(int i = 0; i < 3; ++i) {
		cout << sequence() << endl;
	}
	return 0;
}
