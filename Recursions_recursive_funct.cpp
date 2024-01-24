#include<iostream>
using namespace std;

// 4 * factorial( 4-1 )
// 4 * 3 * factorial( 3-1 )
// 4* 3 * 2 * factorial( 2-1 )
// 4 * 3 * 2 * 1

int factorial(int n){                       
    if (n<=1){
       return 1;
    }
    return n * factorial(n-1);           
      
} 
// (fib)index = 0,1,2,3,4,5,6,7,8,9, 10   ---->----- 
// fib series = 1,1,2,3,5,8,13,21,34,55....... <----|

// fib(5)
// fib(4) + fib(3)
// fib(3) + fib(2) + fib(2) + fib(1)
int fib(int n){         // n is of nth term  with index = (n-1)
    if (n<2){           // user will provide index value
        return 1;
    }       
    return fib(n-2)+fib(n-1);          
}

int main(){
    int a,n;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;
    cout<<"Enter index value of fib series"<<endl;
    cin>>n;
    cout<<"The term in fibonacci sequence at position "<<n<< " is "<<fib(n)<<endl;
    return 0;
}


                               