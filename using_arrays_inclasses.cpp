
#include <iostream>
using namespace std;

class Shop
{
private:
    int item_id[100];               // item_id ,item_price are integer array variables
    int item_price[100];            // with array size of 100
    int count;

public:
    void initcounter(void) {  count = 0; }   //here initially i hd written int count 
                                            // so it throwed a garbage value...waaah
    void setdata(void);
    void displaydata(void);
};
void Shop ::setdata(void)
{
    cout << "Enter id of " << count + 1 << " item" << endl;
    cin >> item_id[count]; // only for value of index as count value will increase 0,1,2
                           //  thus  item_id array will fill values at its indexes
    cout << "Enter price of item " << count + 1 << " item" << endl;
    cin >> item_price[count];
    count++;
}
void Shop ::displaydata(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "the id  of " << i + 1 << " item is" << item_id[i] << endl;
        cout << "the price of " << i + 1 << " item is" << item_id[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setdata();
    dukaan.setdata();
    dukaan.setdata();
    dukaan.setdata();
    dukaan.displaydata();

    return 0;
}
/*   my code
class Shop
{
private:
    int item_id[50];
    int item_price[50];

public:
    int count = 0;
    void setdata();
    void setcount(void);
   
   
};
void Shop ::setdata()
{
    for (int i = 0; i < count + 1; i++)          //every time setdata is called i=0
    { // i=0 ,count=1                           // counter is initiated but i stays i=0

        cout << "Enter item id for item " << count + 1<<endl ;
        cin >> item_id[i];
        cout << "Enter item price "<<endl;
        cin >> item_price[i];
        
    }
    count++;
}

void Shop :: display(){

}


int main()
{   
    
    Shop e1 ;        e1 will now a have a copy of array size[100]
    e1.setdata();    
    e1.setdata();
    e1.setdata();
    e1.setdata();

    return 0;
}*/