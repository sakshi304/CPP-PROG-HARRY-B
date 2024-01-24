#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
        float salary, account_no;
    public:
        int age, id;
        char name[20];
        void setData(float s, int a);
        void getData(){
            cout<<"Employee name: "<<name<<endl;
            cout<<"Employee id: "<<id<<endl;
            cout<<"Employee age: "<<age<<endl;
            cout<<"Employee salary: "<<id<<endl;
            cout<<"Employee account no : "<<account_no<<endl;

        }
};
void Employee :: setData(float s, int a){
    salary= s;
    account_no = a;
}
int main(){
    Employee a1;
    a1.name='BABURAO';       // cannot write chaar in int main()
    a1.age= 40;
    a1.id= 121;
    a1.setData(23444.56, 355698);
    a1.getData();
    return 0;
}