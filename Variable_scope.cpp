# include<iostream>  

using namespace std;

int glo=7;           // global variable  // varib len range= 1- 255
void sum(){          // function
    int a;
    cout<<"value of glo: "<<glo;
}

int main(){          // from here execution starts
    int glo= 10;     // local variable
    glo= 78;         // updation of local variable
    int a=9,b=8;
    float c=9.8;
    char t= 'u';
    bool is= false;  // = 0
    sum();           // function call it will execute glo=7
    cout<<"\nthe value of a is "<<a<<"\nvalue of char is "<<c;
    cout<<"\nvalue of glo in int main() funct: "<<glo<<"\nbool value: "<<is;
    
    return 0;
}
//endl     // shit+Alt+ mouse drag = long cursor
//endl
//endl
//endl
//endl
//endl
//endl
//endl
//endl