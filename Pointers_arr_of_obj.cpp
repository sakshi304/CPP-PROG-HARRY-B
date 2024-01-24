#include<iostream>
using namespace std;

class Shop{
    int id;
    float rate;
    public:
    void setdata(){
        cout<<"Enter item id"<<endl;
        cin>>id;
        cout<<"Enter item rate"<<endl;
        cin>>rate;

    }
    void getdata(){
        cout<<"Item id: "<<id<<endl;
        cout<<"Rate :"<<rate<<endl;
    }
};
int main(){
    int count;
    cout<<"Enter no of items to be entered"<<endl;
    cin>>count;
    Shop ptrTemp;
    Shop* ptr= new Shop[count];
    for(int i=0; i<count; i++){
     
        (ptr+i)->setdata();        //case1  :in this case u r just adding data to (p+i)assigned address ; 
        cout<<ptr<<endl;                            //technically pointer is not incremented(ptr++) which means its still pointing to 1st elements address of array
                                  // i.e filling data at respective position in arry
        //ptr++;
        
    }
    for(int i=0; i<count; i++){
        (ptr+i)->getdata();       //case1 : extracting data from positions(address)
        
        cout<<ptr<<endl;
    }
    return 0;
}