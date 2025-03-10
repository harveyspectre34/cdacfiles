

#include <iostream>

using namespace std;

class Operator {
private:
    int num1;
    int num2;

public:
    Operator(int n1 = 0, int n2 = 0) : num1(n1), num2(n2) {}

    
    int findMax() const {
        return (num1 > num2) ? num1 : num2;
    }
};

int main() {
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    Operator op(n1, n2);

    cout << "Maximum number: " << op.findMax() << endl;

    return 0;
}
