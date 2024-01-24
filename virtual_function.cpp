#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base=10;

    virtual void Display(){
        cout<<"1.The value of var base is "<<var_base<<endl;
    }
};
class DerivedClass : public BaseClass{
    public :
    int var_derived=20;

    void Display(){
        cout<<"2.The value of var_derived is "<<var_derived<<endl;
        cout<<"2.The value of var_base is "<<var_base<<endl;
    }
};
int main(){
    BaseClass* base_class_pointer;
    BaseClass base_obj;
    DerivedClass deri_obj;
    base_class_pointer = & deri_obj;      // Pointing towards derived class object
    base_class_pointer->Display();

//------- This would present base class diplay function as it now pooints to base class object
    // base_class_pointer = & base_obj;      // Pointing towards base class object
    // base_class_pointer->Display();


    return 0;
}
