#include <iostream>  
using namespace std;  
#include<string.h>
class Student
{
	int rollno;
	char name[10];
	public:
		void display(int r,char* ptr)
		{
			rollno=r;
			name=ptr;----------->error
			strcpy(name,ptr);
			cout<<r<<endl;
			cout<<name;
		}
};

int main()
{
	Student s1;
	s1.display(101,"rahul");
}

