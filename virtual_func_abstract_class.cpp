#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string tit, float rate)
    {
        title = tit;
        rating = rate;
    }
    virtual void display()=0;      // DO NOTHING FUNCTION ---->PURE VIRTUAL FUNCTION
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
// ----------------------------WILL THROW ERROR IF DISPLAY IS NOT REDINED IN DERIVED CLASS------------------------
//-----------------------------AS PURE VIRTUAL FUNCTION IS INTRODUCED--------------------------------------
//     void display()
//     {
//         cout << "-------------VIDEO-----------" << endl;
//         cout << "Title of the video is " << title << endl;
//         cout << "Rating: " << rating << endl;
//         cout << "Videolength: " << videolength << " hrs" << endl;
//     }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "---------------TEXT------------------" << endl;
        cout << "Title of the Text is " << title << endl;
        cout << "Rating: " << rating << endl;
        cout << "Words: " << words << endl;
    }
};
int main()
{
    CWH *ptr[1];
    CWHVideo objVideo("Code With Harry", 5, 4);
    CWHText objText("CODE WITH HARRY", 4.5, 500);
    ptr[0] = &objVideo;
    ptr[1] = &objText;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}

//----------PROGRAM EXECUTED WITH ERROR AS VOID DISPLAY IS COMMENTED--------------