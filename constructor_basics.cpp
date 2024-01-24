#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    Complex(void); //Constructor declaration//same name as class to initalise automatically

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
{                       // constr has no data type, isliye void complex::complex(void)nhi likha
    a = 10;
    b = 0;
    // cout<<"Hello world";
}
int main(){
    Complex a;
    a.printNumber();

}