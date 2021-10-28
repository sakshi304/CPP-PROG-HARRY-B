#include<iostream>
#include<iomanip>       //library for setw()

using namespace std;

int main(){
     //int a = 34; 
    // cout<<"The value of a was: "<<a;
     

     //Constants in C++
     const int t = 3;
     cout<<"The value of t was: "<<t<<endl;
     //t = 45; // You will get an error because a is a constant
     cout<<"The value of t is: "<<t<<endl;

     //Manipulators in C++
     int a =3, b=78, c=1233; 
     cout<<"The value of a without setw is: "<<a<<endl;
     cout<<"The value of b without setw is: "<<b<<endl;
     cout<<"The value of c without setw is: "<<c<<endl;  
     cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;    // width of 4 
     cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
     cout<<"The value of c with setw is: "<<setw(4)<<c<<endl; 

     //Operator Precedence
    int x =3, y=4;
    // int c = (a*5)+b;
    int z = ((((x*5)+y)-45)+87);
    cout<<z;
    return 0;
}
