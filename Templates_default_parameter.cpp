#include<iostream>
using namespace std;

template<class T1, class T2, class T3>
class sakshi{
    public:
    T1 a;
    T2 b;
    T3 c;
  
    sakshi(T1 x, T2 y, T3 z){
        a= x;
        b=y;
        c=z;

    }
    void display(){
        cout<<"the value of a "<<a<<endl;
        cout<<"the value of b "<<b<<endl;
        cout<<"the value of c "<<c<<endl;
    }
};

int main(){
    sakshi s1(4,4.5,'s');
    s1.display();
    cout<<endl;
    sakshi<char, int , float> s2('g', 4 ,6.6);
    s2.display();
   
    return 0;
}