#include<iostream>
using namespace std;
class Test
{
    int count=0;
    static int scount;            // static variable
    public:
        void data(void)
    {

        count++;
        cout<<count<<endl;
    }
    static void sdata()           // static function
    {
        
        scount++;
        cout<<scount<<endl;
    }
};
int Test :: scount;
int main(){
    Test c,c1,c2,c3;
    c.data();
    c1.data();
    c2.data();
    c3.data();
    c.sdata();         
    c1.sdata();
    c2.sdata();
    c3.sdata();
   

}

