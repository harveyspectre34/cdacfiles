#include<iostream>
using namespace std;
class Cdate
{
	int dd,mm,yy;
	public:
		Cdate(int,int,int);
		Cdate()//no argument constructor
		{
			cout<<"default constructor called\n";
			dd=26;
			mm=2;
			yy=2025;
			
		}

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
	Cdate d1;
	Cdate d2(27,2,2025);
	d1.display();
	d2.display();

	
}

