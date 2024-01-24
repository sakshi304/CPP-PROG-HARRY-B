#include <bits/stdc++.h>
using namespace std;

// base class
class Parent
{
    // protected data members
protected:
    int id_protected;
};

// sub class or derived class
class Child : public Parent
{

public:
    void setId(int id)
    {

        // Child class is able to access the inherited
        // protected data members of base class

        id_protected = id;            // directly accessed inside derived class member function
    }      // whereas in private you cannot access , it can only be accessesd by member fuctions of base class iss case me hume member fuction of base class ko call krna padta hai 

    void displayId()
    {
        cout << "id_protected is (value accessed by member functon of derived class): " << id_protected << endl;
    }
};

// main function
int main()
{

    Child obj1;

    // member function of the derived class can access the protected data members of the base class

    obj1.setId(81);
    obj1.displayId();
    return 0;
}
