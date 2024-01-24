#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){                            // default constr 
        a = 0;
        b =0;
    }

    Complex(int x, float y)                // paramerterised constr
    {
        a = x;
        b = y;
    }

    Complex(int x){                      
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4,5.5);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
