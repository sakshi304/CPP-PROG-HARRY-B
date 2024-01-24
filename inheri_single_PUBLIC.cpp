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

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    data3 = data2 * getdata1(); // since data1 is private data of base class so to access data1 u need to get thru its MEMBER FUNCTION
}

void derived ::display()
{
    cout << "Data1 is: " << getdata1() << endl; // since data1 is private data of base class so to access data1 u need to get thru its MEMBER FUNCTION
    cout << "Data2 is: " << data2 << endl;      // data 2 is public memb of BASE CLASS
    cout << "Data3 is: " << data3 << endl;      // data 3 is private memb of this class(derived class) but display is the member function of this class
}
int main()
{
    derived der;
    der.setdata();
    der.process(); // isko call lagao vrna data3  ki value display data me nhi jaegi
    der.display();
    return 0;
}