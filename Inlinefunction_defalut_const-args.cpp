#include<iostream>
using namespace std;

inline product(int a ,int b){          // reduces compilation time 
    return a*b;                        // replaces func call with func body

}

float totalmoney(int currentmoney, float factor=1.04){     // default arg
    return currentmoney*factor;

}

int currencyValue(const int value=90){       // constant arg

    return value;                          // isme gadbad hai
}



int main(){
    int a,b;
    int money=100000;
    int value=45;
    cout<<"value of a  ";
    cin>>a;
    cout<<"\nvalue of b  ";
    cin>>b;
    cout<<"the product of a and b "<<product(a,b);
    
    cout<<"money recieved after applying factor "<<totalmoney(money);
    cout<<"\nmoney recieved by VIP after applying factor "<<totalmoney(money,1.1)<<endl;  //default value changed
    cout<<currencyValue()<<endl;
    cout<<currencyValue(value);


    return 0;
}
