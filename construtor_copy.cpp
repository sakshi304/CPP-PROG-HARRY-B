#include<iostream>
using namespace std;


class Number{
    int a;
    public:
        Number(){                         // default constr
            a = 0;
        }

        Number(int num){                           
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        // BELOW IS COPY CONSTRUCTOR
        Number(Number &obj){       //the “number” class is defined which takes its own reference object as a parameter and assigns values to the data members “a”.                 
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};
 int main(){
     Number x(1), y(2), z(35), z3;
     x.display();
     y.display();
     z.display();

     Number z1(z);                // even though if u dont declare a copy constr ; the compiler here will supply its own copy constr
     z1.display();

    //  Number z2=z;         can also be written like this
    //  z2.display();

     z3 =x;                 // here value is assigned to z3 and COPY CONSTR IS NOT INVOKED 
     z3.display();



    
 }