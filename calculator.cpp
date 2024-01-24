
#include <iostream>
using namespace std;

int main() {
  int choice;
  float num3,num1,num2;
  cout<<"enter choice 1:sum ,2:subtract ,3: multipli, 4: division"<<endl;
  cin>>choice;
  cout<<"Enter num1:"<<endl;
  cin>>num1;
  cout<<"Enter num2:"<<endl;
  cin>>num2;
  switch (choice) {
  case 1:
    cout << "Sum :"<< num1+num2;

    break;

  case 2:
    cout << "Subtraction: "<< num1-num2;

    break;

  case 3:
    cout << "Multiplication :"<< num1*num2;

    break;

  case 4:
    
    cout <<" Division :" <<num1/num2;

    break;

    }
  return 0;
}
