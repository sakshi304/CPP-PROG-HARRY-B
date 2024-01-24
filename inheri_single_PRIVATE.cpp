#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
};
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1()
{
    return data1;
}

class derived : private base // now all public membs of base class will become private membs here
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    setdata(); // the public membs of base class of which are now privately derived can be acessed by public MEMBER FUNCTIONS of derived class
    data3 = data2 * getdata1();
}

void derived ::display()
{ 

    cout << "Data1 is( value accessed by member function of base class): " << getdata1() << endl;
    cout << "Data2 is: " << data2 << endl; // (MY LOGIC : VERIFY IT) yaha function ko call nhi lagaya for data2 but it is called by one of data member[process()] , its like compiler reads line by line so ye recognize ho gaya
    cout << "Data3 is: " << data3 << endl;
}

int main()
{
    derived der;
    //der.setdata();     you cannot call this function since base class is derived privately
    der.process();

    der.display();
    return 0;
}
