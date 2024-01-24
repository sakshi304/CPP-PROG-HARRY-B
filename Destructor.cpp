#include<iostream>
using namespace std;


class num
{
    public:
        static int count ;

    num(){
        count++;
        cout<<"This is the time when constructor is called for object number"<<count<<endl;
    }

    ~num(){
        cout<<"This is the time when my destructor is called for object number"<<count<<endl;
        count--;
    }
};
int num:: count;
int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;          
    {                                           // this is a block of code ; after exiting this :objects will immediately get destroyed, i.e destructor is invoked
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;

        num n2,n3;                      

        cout<<"Exiting this block"<<endl;   

    }                               // n2, n3 are destroyed 

    cout<<"Back to main"<<endl;     // after this if compiler doesnt find need or work of object n1 ; destroyed is invoked
    
    return 0;
}