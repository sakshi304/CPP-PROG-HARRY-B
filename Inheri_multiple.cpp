#include<iostream>
using namespace std;

class base1{
    protected:
    int base1int;
    public:
    void set_base1(int a){
        base1int= a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2(int b){
        base2int = b;
    }
};

// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class derived : public base1, public base2{
    public:
    void show(){
    cout<<"The value of base1 is "<<base1int<<endl;
    cout<<"The value of base2 is "<<base2int<<endl;
    cout<<"Thw sum of values  is "<<base1int+base2int<<endl;
    }
};
/*
the inherited derived class will look something like this:
Data members:
    base1int----->protected
    base2int----->protected

Member function:
    set_base1int()------>public
    set_base2int()------>public
    show()-------------->public
*/
int main(){
    derived tom;
    tom.set_base1(45);
    tom.set_base2(45);
    tom.show();
    return 0;
}

/*
int main(){
    // simple user;
    // scien t;
    show s;
    float num1,num2,a;
    int x;
    cout<<"enter simple=1, scien=2";
    cin>>x;
    display(x);
    switch(x){
        case 1:
            cout<<"Enter num1 : "<<endl;
            cin>>num1;
            cout<<"Enter num2 : "<<endl;
            cin>>num2;
            s.get_simple(num1,num2);
            s.display();
            break;
        case 2:
            cout<<"Enter value for trig"<<endl;
            cin>>a;
                t.get_scientific(a);
            t.show();
             break;
    
        default:
             cout<<"Invalid choice";
              break;
    }




    return 0;
    


}

 // void show(){
    //     cout<<"ADDITION : "<<addition()<<endl;
    //     cout<<"SUBTRACTION : "<<subtraction()<<endl;
    //     cout<<"DIVISION : "<<division()<<endl;
    // }

//public:
   
    // void show(){
    //     cout<<"sin func "<<sin_fun()<<endl;
    //     cout<<"cos func "<<cos_fun()<<endl;
    //     cout<<"tan func "<<tan_fun()<<endl;
    //     cout<<"cot func "<<cot_fun()<<endl;

    // }