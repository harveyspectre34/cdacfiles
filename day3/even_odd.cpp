#include<iostream>
using namespace std;
int main()
{
    int a[6]={3,4,5,6,7,8};
   int i,e[6],o[6];
   int x=0,y=0;
   for(i=0;i<=5;i++)
   {
   		if(a[i]%2==0)
   		{
   			e[x]=a[i];
			   	
   			x++;
		}
		else
		{
			o[y]=a[i];
			y++;	
		}
   }

    for(i=0;i<x;i++)
    cout<<e[i]<<"\t";
    cout<<"--------\n";
     for(i=0;i<y;i++)
    cout<<o[i]<<"\t";
   
}

