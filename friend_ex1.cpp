#include<iostream>
using namespace std;

class c1;
class c2;


class c1
{
    int val1;
    public:
    friend void add(c1 ,c2);
    void input(int a){
        val1=a;
     
    }
};

class c2
{
    int val2;
    public:

    friend void add(c1 ,c2);
    void input(int b){
        val2 = b ;
                                       
    }
};

void add(c1 o1, c2 o2){
    cout<<"adiition : "<<o1.val1 + o2.val2 <<endl;

}

int main(){
   c1 x;
   x.input(2);

   c2 y;
   y.input(5);

   add(x,y);
   return 0;

}