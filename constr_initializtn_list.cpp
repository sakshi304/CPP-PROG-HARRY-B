/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : b(i), a(j)   this also works
    // Test(int i, int j) : b(j), a(i+b)    this  will throw error 
    // Test(int i, int j) : a(i), b(a + j)   works
    {
        // b=i;     this works properly  means though a is declared 1st and value is 1st assigned to b
        // a=j;

        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
