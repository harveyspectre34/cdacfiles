#include <iostream>
using namespace std;
 void demo()
{
    static int count = 0,sum=0;
     sum=sum+count;
     cout<<sum<<"\n";
     count++;
}
 int main()
{
    for (int i = 0; i < 5; i++)
        demo();
    return 0;
}

