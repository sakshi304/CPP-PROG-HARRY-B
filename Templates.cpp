#include<iostream>
using namespace std;
template<class T>
class vector{
    T arr;
    public:
    vector(T arr){
        this->arr=arr;
        cout<<arr<<endl;
    }
};
int main(){
    vector<int> myvec1(34);
    vector<float> myvec2(34.10);
    return 0;
}