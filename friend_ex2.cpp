#include <iostream>
using namespace std;

class c1;
class c2;

class c1
{
    int val1;

public:
    friend void swap(c1 &, c2 &);
    void input(int a)
    {
        val1 = a;
    }
};

class c2
{
    int val2;

public:
    friend void swap(c1 &, c2 &);           // reference object // referncing an object // directly pointing towards object address
    void input(int b)
    {
        val2 = b;
    }

};

void swap(c1 &o1, c2 &o2)                   // call by reference 
{ 
    int temp = o1.val1;                    // always access with (dot).operator
    o1.val1 = o2.val2;
    o2.val2 = temp;
    cout << "swapped value of val1 " << o1.val1 << " swapped val2 " << o2.val2;
}

int main()
{
    c1 x;
    x.input(2);

    c2 y;
    y.input(5);

    swap(x, y);
}