#include<iostream>
using namespace std;

template <class T>
class sakshi{
    public:
    T a;
    sakshi(T x){
        a=x;
    }
    void Display();
};

template <class T>
void sakshi<T> :: Display(){
    cout<<"I am display "<<a<<endl;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main(){
    sakshi<float> s1(5.54);
    s1.Display();
   
    func(4);  //Exact match takes the highest priority
     func(4.5);
    return 0;
}