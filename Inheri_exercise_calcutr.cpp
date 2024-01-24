#include<iostream>
#include<cmath>
using namespace std;

class input{
    protected:
    float num1;
    float num2;
    float x;
    public:
     void get_simple(float a, float b){
         num1=a;
         num2=b;
     }
     
     void get_scientific(float a){
       x= a* (0.01744444);
                   // x* pi/180
     }
};

class simple : public virtual input{
    public:
  
    float addition(){
      
        return num1+ num2;
     }
    
    int subtraction(){
        
        return num1- num2;
    }

    int division(){
      
        return num1/num2;
    }

   
};

class scien :public virtual input{

    //All the functions take input in radians and not degrees
    protected:
    float sin_fun(){
        return float(sin(x));
    }
    float cos_fun(){
        return float(cos(x));
    }
    float tan_fun(){
        return float(tan(x));
    }
    float cot_fun(){
        return float(1/tan(x));
    }

    
};

class show : public simple, public scien{
     public:
     int display(int x){
       
         if(x==1){
              
              cout<<"ADDITION : "<<addition()<<endl;
              cout<<"SUBTRACTION : "<<subtraction()<<endl;
              cout<<"DIVISION : "<<division()<<endl;
         }

         if(x==2){
              cout<<"sin func "<<sin_fun()<<endl;
              cout<<"cos func "<<cos_fun()<<endl;
              cout<<"tan func "<<tan_fun()<<endl;
              cout<<"cot func "<<cot_fun()<<endl; 
         }
         return 0;
     }
};
int main(){
    show t;
    simple s;
    int x;
    float num1,num2,a;
    cout<<"\nenter simple=1 , scien=2\n";
    cin>>x;

    switch(x){
        case 1:
        cout<<"enter num1";
        cin>>num1;
        cout<<"enter num2";
        cin>>num2;
        t.get_simple(num1,num2);      
        t.display(x);
        break;

        case 2:
        cout<<"ENTER TRIGNO ANGLE IN THETA";
        cin>>a;
        t.get_scientific(a);
        t.display(x);
        break;
        


    }
     
    
    return 0;
}

// A-->B,C--->D  hierarchical // made A(input) as virtaul base class
// B(simple) C(scien)  D(display)
