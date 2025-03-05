#include<iostream>
#include"Sales_item.h"

typedef double wages; // wages is a synonim of double
typedef wages base, *p; // base is a synonim of double and p = double*
// c++ 11 intruduced 
using SI = Sales_item;

int main(){
	// the following works because both are the same type
	wages a = 2.0;
	base b = a;
	p p1 = &a;

	SI item ("qwer");	
	
	return 0;
}
