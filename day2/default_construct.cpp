#include<iostream>
using namespace std;
class Cdate
{
	int dd,mm,yy;
	public:
		void display()
		{
			cout<<"display today's date\n";
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};

int main()
{
	Cdate d1;
	d1.display();

	
}

