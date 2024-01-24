#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int x, y;
    public:
        Point(void);                            // default constr declaration
        Point(int a, int b){                   // parameterized constr
            x = a;
            y = b;
        }
        
        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
        
        friend void dist(Point , Point );
        void distance(Point o1 , Point o2){            // member function
            int p1 = pow((o2.x - o1.x),2);             // pow(base, power) 2^2
            int p2 = pow((o2.y - o1.y),2);
            float d=sqrt(p1+p2);
            cout<<"Distance between points ("<<o1.x<<","<<o1.y<<")" <<"("<<o2.x<<","<<o2.y<<") is "<<d<<endl;
        }
};

void dist(Point o1, Point o2){                         // friend function
     int p1 = pow((o2.x - o1.x),2);         
     int p2 = pow((o2.y - o1.y),2);
     float d=sqrt(p1+p2);
     cout<<"Distance between points  ("<<o1.x<<","<<o1.y<<")" <<"("<<o2.x<<","<<o2.y<<") using FRIEND FUNCTION is "<<d<<endl;
    
}
Point::Point(void){
    x=0;
    y=0;
}


int main(){
    Point p(4,5);
    p.displayPoint();

    Point q(5,8);
    q.displayPoint();

    Point t;             // this object needs default constr since constr are automatically invoked so if it saw no args provided it needs a default constr t(0,0)
    t.distance(p,q);

    dist(p,q);          // friend func invoked
    return 0;
   
}