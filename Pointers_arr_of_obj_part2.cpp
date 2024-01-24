#include<iostream>
using namespace std;

class ShopItem{
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
    ShopItem* ptr= new ShopItem[count];
    ShopItem* ptrTemp= ptr;
    for(int i=0; i<count; i++){
        cout<<"Enter details for "<<i+1<<endl;
         ptr->setdata();
         ptr++;

    }
    for(int i=0; i<count; i++){
            ptrTemp->getdata();
            ptrTemp++;
    }
    return 0;
}