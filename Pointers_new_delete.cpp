#include<iostream>
using namespace std;

int main(){
    // Basic Example  // POinter revise
    int a=4;                                   //float a = 4.4;  will throw error 
    int* ptr = &a;
    
    cout<<"The value of a is "<<*(ptr)<<endl;           //dereferencing pointer
  
    // new is here used to dynamically allot memory...i.e to alot available memory at runtime
    // its like without creating a  new varaible you alot a memory 
    float *p = new float(40.78);
    delete[] p;        
    cout << "The value at address p is " << *(p) << endl;

    //We created an integer pointer “arr” and dynamically created an array of size three which is assigned to the pointer “arr”
    int *arr = new int[3];     // contiguous memory  // array 
                                // ITS LIKE POINTING NEW MEMORY LOCATION 
                                // int type array of size 3
    arr[0] = 10;
    arr[1] = 20;    // can also be written as *(arr+1) = pointing to next address of block in arr
    
    arr[2]= 30;            //*(arr+2)

    delete[] arr;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    //we get the garbage value in the output instead of “10”, “20”, and “30”
   //  because we have used “delete” keyword before printing the values
   // due to which the space used by an array gets free and we get the garbage value in return.
   
    return 0;
}
