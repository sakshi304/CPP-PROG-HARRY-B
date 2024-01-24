#include<iostream>
using namespace std;

template <class T>
class temp{
    public:
    T* arr;
    T a;
    int size;

    temp(int m){
        size= m;
        arr = new T[size];  // tumne arr ko POINTER ghoshit kr diya hai so abhi direct (arr=  ).....confuse ny honeka
        // int* arr= new int[5]  // array 
        // int* ptr= new int(5)  // bas ek integer
    }
    T dotproduct(temp v){
        T d=0;
        for(int i=0; i<size; i++){
                d+= this->arr[i] * v.arr[i];          // this pointer points towards the 1st object which is formed
        }
        return d;
    }
};
int main(){
    temp <float> v1(3),v2(3);
    v1.arr[0]= 1.1;
    v1.arr[1]= 2.2;
    v1.arr[2]= 3.3;

    v2.arr[0]= 1.1;
    v2.arr[1]= 2.2;
    v2.arr[2]= 3.3;

    float a= v1.dotproduct(v2);             // here v1 gave a function call using dot operator 
    cout<<a;                             // hence (this->)pointer points towards object v1
    return 0;
}