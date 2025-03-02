
#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int x=sizeof(a);
    int y=sizeof(a[0]);
    int len=x/y;
    cout<<"length="<<len;
    return 0;
}

