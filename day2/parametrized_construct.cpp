#include<iostream>
using namespace std;
class Cdate
{
	int dd,mm,yy;
	public:
		Cdate(int d,int m,int y):dd(d),mm(m),yy(y) {}
		
		
		void display()
		{
			cout<<"display today's date\n";
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};


int main()
{
	Cdate d1(1,2,2025);
	d1.display();
	return 0;	
}


