#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)             // parametrise constr
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}                       // default constr is neccesary bc when derived class object is created 
};                                   // constructor of base class is invoked first

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee                     
{
public:
    int languageCode;
    
    Programmer(int inpId)
    {
        id = inpId;                           // id inherited from employee class           
        languageCode = 9;
        salary= 55;                           // salary also
        
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);              // parameter consttrr
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    cout << skillF.salary<<endl;
    skillF.getData();
    return 0;
}

