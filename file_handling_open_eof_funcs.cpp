#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
 
    // declaring an object of the type ofstream
    ofstream out;
    string s;
    cout<<"Enter a string"<<endl;
    getline(cin,s);                  // this is to read string input given by user

    // ofstream out("sample60.txt");      // file opening      
    // OR   connecting the object out to the text file using the member function open()
    out.open("sample60.txt");

    //writing to the file
    out <<"This is me\n";               // without creating constructor i.e variable
    out <<"This is also me"<<endl;
    out<<s;                             // user input string
    //closing the file connection
    out.close();

    // declaring an object of the type ifstream
    ifstream in;
    //declaring string variable st
    string st;
    //opening the text file into in
    in.open("sample60.txt");
 
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0) 
    {
        // using getline to fill the whole line in st
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}
