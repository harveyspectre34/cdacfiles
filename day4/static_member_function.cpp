
#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	static int cnt;
	public:
	void show();
	date(int,int,int);
	static void getCnt()
	{
		//cout<<this->cnt;
		//cout<<this;
		//cout<<add;
		cout<<cnt;
	}
};
int date::cnt=0;
date::date(int d,int m,int y)
{
	
	this->dd=d;
	this->mm=m;
	this->yy=y;
}
 
 void date::show()
 {
	 cout<<"date is "<<this->dd<<"/"<<this->mm<<"/"<<yy<<endl;
 }
 int main()
{
	date d1(1,1,2000);
	d1.show();
	date::getCnt();
	
}

