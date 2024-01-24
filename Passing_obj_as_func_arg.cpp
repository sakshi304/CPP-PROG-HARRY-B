#include<iostream>
#include<math.h>
using namespace std;

class complex{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2; 
        }

        int setDataBySum(complex o1, complex o2){    //(inside bracket) this means take arguments
            a = o1.a + o2.a;                         // of class complex as argument
            b = o1.b + o2.b;                         // associating values with membership operator
            return 0;       // initialliy i'hd written return type as void ;;; pr int likha then u have to mention a return type------>return a,b; return a; return b; return 0; (charo ne same answer diya  :-) )

        }
        void distance( complex b1, complex b2){        // I  DID THIS  !!!!!!!!!!!!
            float dist;
            a = b2.a - b1.a;
            b = b2.b - b1.b;

            dist = sqrt(pow(a,2) + pow(b,2));           // pow( base, power)
            cout<<"Distance between points is "<<dist;
         
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
           
        }

        void display(){
            cout<<" point coordinate "<< a<<","<<b<<endl;
        }
};

int main(){
    complex c1, c2, c3 , b1, b2 ,b3;   //every object has its own variables , YEH SOCHNA BAND KARO KI VALUE MODIFY HOGAYI!!!
    c1.setData(1, 2);                   // EVERY OBJECT MADE ITS OWN CALL 
    c1.printNumber();                   // YOU CAN USE C1 AND C2 AS POINT CORDINATES VALUE JUST AFTER THAT FOR C3 CALL DISTANCE = c3.distance

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    b1.setData(4,2);
    b1.display();

    b2.setData(10,4);
    b2.display();

    b3.distance(b1, b2);


    return 0;
}
