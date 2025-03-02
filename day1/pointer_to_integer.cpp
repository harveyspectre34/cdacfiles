#include<iostream>
using namespace std;
int main()
{
       int x=10,y=20;
      int * const ptr=&x;
    // ptr=&y;//error because ptr is constant
   *ptr=200;
   cout << "Value of x: " << x << endl; // Added to show the change.
   return 0;
}

