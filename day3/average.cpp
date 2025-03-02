#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i,sum=0;
    float avg;
    cout<<"accept elements\n";
    for(i=0;i<=4;i++)
    cin>>a[i];
    for(i=0;i<=4;i++)
    sum=sum+ *(a+i);
    avg=(float)sum/5;
    cout<<"average "<<avg;
}

