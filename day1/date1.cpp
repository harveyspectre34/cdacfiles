#include<iostream>
using namespace std;
class Cdate
{
	int dd,mm,yy;
	public:
		void accept()
		{
			cout<<"accept today's date"<<endl;
			cin>>dd>>mm>>yy;
		}
		void display()
		{
			cout<<"display today's date\n";
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
int main()
{
	Cdate d1;
	cout<<"size of object is "<<sizeof(d1)<<endl;
	cout<<"size of class cdate is "<<sizeof(class Cdate)<<endl;
	d1.accept();
	d1.display();
	

	
}
