#include<iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b){
    T temp= a;
    a=b;
    b=a;
}

template <class T1, class T2>
float average(T1 a, T2 b){
     float x= (a+b)/2.0;
     return x;
}

int main(){
    int x=2, y= 5;
    swapp(x,y);
    cout<<"swap: "<<x<<","<<y<<endl;
    
    float a= average(5,10.25);
    cout<<a<<endl;
    float b= average(5,10);
    cout<<b<<endl;

    return 0;
}