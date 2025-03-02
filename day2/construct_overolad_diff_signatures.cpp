#include<iostream>
using namespace std;
class Cdate
{
	int dd,mm,yy;
	public:
		Cdate(int,int,int);
		void display()
		{
			cout<<"display today's date\n";
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};

Cdate::Cdate(int d,int m ,int y)
{
	cout<<"para constructor called\n";
	dd=d;
	mm=m;
	yy=y;
	
}
int main()
{
	Cdate d1;//error 


	
}

