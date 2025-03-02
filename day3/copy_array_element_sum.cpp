#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5];
    int i,sum=0;
    cout<<"accept elements\n";
    for(i=0;i<=4;i++)
    cin>>a[i];
    for(i=0;i<=4;i++)
    {
    	b[i]=a[i];
	}
	cout<<"display copied elements\n";
	 for(i=0;i<=4;i++)
	 {
    cout<<b[i]<<"\t";
	}
    for(i=0;i<=4;i++)
    {
    	sum=sum+b[i];
	}
	cout<<"summation= "<<sum;
    
   
}

