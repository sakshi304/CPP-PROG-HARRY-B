#include<iostream>
using namespace std;

class students{
    protected:
    int roll_no;
    public:
    void set_rollno(int roll_no);
    void get_rollno();

};

void students :: set_rollno(int r){
    roll_no = r;
}
void students :: get_rollno(){
    cout<<"Students roll no : "<<roll_no<<endl;
}

class exam : public students{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float m1, float m2);
    void get_marks();
};

void exam :: set_marks(float m1, float m2){
    maths= m1;
    physics= m2;
}

void exam:: get_marks(){
    cout<<"marks in maths :"<<maths<<endl;
    cout<<"marks in physics :"<<physics<<endl;

}
class result : public exam{
   
    public:
    void display_result(){
        get_rollno();
        get_marks();
        cout<<"Percentage of students :"<<(maths+physics)/2<<"%"<<endl;
         
    }
};
int main(){
    result sakshi;
    
    sakshi.set_rollno(38);
    sakshi.set_marks(94.5,90.8);
    sakshi.display_result();
    cout<<".......YIPEEEEE.........";
    return 0;
}