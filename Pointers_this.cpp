#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
        void setData(int a, int b){        
                                          // this is a pointer // never dedclared like int x; int &y=x
            this->a=a;      //OR  (*this).a=a
            this->b=b;      //    (*this).b=b
            cout<<"Address of object "<<this<<endl; 
               
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};
int main(){
    A a,b;

    a.setData(4,4); 
    a.getData();
    b.setData(5,5);
    b.getData();
    return 0;
}
