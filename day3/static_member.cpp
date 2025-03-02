#include <iostream>
using namespace std;

class Complex {
public: // Added public access specifier for cnt and show()
    static int cnt; // Declared cnt as static
    int real, img;

    Complex();
    Complex(int r, int i);
    void show();
    static int getCnt(); // Declared getCnt() as static
};

int Complex::cnt = 100; // Initialized cnt outside the class

int Complex::getCnt() {
    return cnt;
}

void Complex::show() {
    cout << "complex no is " << real << "+" << img << "i" << " " << cnt << endl;
}

Complex::Complex() {
    cout << "in default constructor\n";
    real = 10;
    img = 20;
    cnt++;
}

Complex::Complex(int r, int i) {
    cout << "in parametrized constructor\n";
    real = r;
    img = i;
    cnt++;
}

int main() {
    Complex c1, c2;
    Complex c3(5, 6);
    cout << "no of obj created is " << Complex::getCnt() << endl;
    cout << "sizeof obj is     " << sizeof(c1) << endl;
    cout << Complex::cnt << endl; // Possible because cnt is now public
    return 0; // Added return 0;
}

