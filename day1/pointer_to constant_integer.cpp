#include <iostream>  
using namespace std;  
int main ()  
{  

	int x = 10, y = 20;  
	const int* ptr = &x; 
  	ptr = &y; 
  	cout << ptr<< endl; 
  	ptr=&x;
  	cout << ptr<< endl; 
//	*ptr = 15; 
	x=15;
	cout << " The value of ptr: " << *ptr << endl;  

}   

