#include<iostream>
using namespace std;

class subtraction {
   int c;
public:
   
   }
   subtraction() {    

       cout << "Subtraction is:";
   }

   subtraction(int a, int b) {
       c = a - b;
   }

   void display() {
       cout << c;
   }
};

int main() {

   int a, b;

   cout << "Enter two numbers:";
   cin >> a>>b;

   subtraction t;
   subtraction tt(a,b);
   tt.display();

   return 0;
}