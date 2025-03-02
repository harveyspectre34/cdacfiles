#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		void accept()
		{
			cout<<"enter real and img\n";
			cin>>real>>img;
		
		}
		void display()
		{
			cout<<"complex no is "<<real<<"+"<<img<<"i"<<endl;
		}
		void setReal(int r)
		{
			real=r;
		}
		int	getReal()
		{
			return real;
		}
		
};
int main()
{
	
	Complex c1;
//	c1.real=100;-------->error
	c1.accept();
	c1.display();
	c1.setReal(10);
	c1.display();
	cout<<"complex no is "<<c1.getReal();
}

