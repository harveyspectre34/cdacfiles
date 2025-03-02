#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i,max;
    cout<<"accept elements\n";
    for(i=0;i<=4;i++)
    cin>>a[i];//2 4 7 1 0
   max=*(a+0); //a[0]
   for(i=1;i<=4;i++)
   {
   		if(max<a[i])
   		{
   			max=a[i];
		}
   }
   cout<<"maximum no ="<<max;
   
   
}

