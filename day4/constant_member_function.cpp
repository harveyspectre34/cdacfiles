#include <iostream>
using namespace std;
 
class Demo {
    int x;
 
public:
    void set_data(int);
    int get_data() const;
};
 void Demo::set_data(int a) 
{
 x = a;
 }
int Demo::get_data() const 
{
 return x; 
}
main()
{
    Demo d;
    d.set_data(10);
    cout << d.get_data();
 
    return 0;
}


