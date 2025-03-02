#include <iostream>  
using namespace std;  
int main ()  
{  

	 int x = 10, y = 20;  
	const int *const ptr=&x;
		//ptr = &y; ---------->error
  	//*ptr = 15; ------------>error
	x=15;
	x=13;//allowed,thru pointer we cant change the value
	cout << " The value of ptr: " << *ptr << endl;  

}  

