#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;

    void Display(){
        cout<<"The value of var base is "<<var_base<<endl;
    }
};
class DerivedClass : public BaseClass{
    public :
    int var_derived;

    void Display(){
        cout<<"The value of var_derived is "<<var_derived<<endl;
        cout<<"The value of var base is "<<var_base<<endl;
    }
};
int main(){
    BaseClass* base_class_pointer;
    BaseClass base_obj;
    DerivedClass deri_obj;
    base_class_pointer = & deri_obj;      // Pointing towards derived class object

    base_class_pointer->var_base= 10;
   // base_class_pointer->var_derived= 20;       will throw an error
    base_class_pointer->Display();        // base class display gets executed  

    DerivedClass* deri_class_pointer;
    deri_class_pointer = & deri_obj;
    deri_class_pointer->var_derived =40;
    deri_class_pointer->var_base =30;
    deri_class_pointer->Display();         // 

    return 0;
}