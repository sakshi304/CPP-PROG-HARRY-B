#include<iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex a;
    Complex* ptr1=&a;
    (*ptr1).setData(1,2);
    (*ptr1).getData();

    Complex *ptr= new Complex;  //dynamic initialization of odject
    (*ptr).setData(4,5);        // two ways  1) dot operator
    (*ptr).getData();
    ptr->setData(4,5);          // 2) arrow operator
    ptr->getData();

    //Array of objects
    Complex* ptr2=new Complex[4];
    ptr2->setData(5,8);
    ptr2->getData();
    (ptr2+1)->setData(5,8);
    (ptr2+1)->getData();
    
 
    return 0;
}