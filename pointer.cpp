// this is me changes
#include <iostream>
using namespace std;
int main()
{
	int a=98;
	int*b = &a;
    /* A Pointer is a datatype which bolds address of other datatypes 
     here b is pointer which is holding address of a */
	                        
	cout<<"Address of a is "<<b<<endl;
	cout<<"Address of a is "<<&a<<endl;
	cout<<"Value at this address is "<<*b<<endl;
	
	
	/* Pointer of the pointer */
			
	int**c = &b;
	cout<<"the address of b is"<<&b<<endl;
	cout<<"the value at c is"<<*c<<endl;
	cout<<"the value of b is"<<**c<<endl;
	return 0;
	
}
