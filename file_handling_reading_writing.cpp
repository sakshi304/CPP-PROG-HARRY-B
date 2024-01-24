#include<iostream>                         // in this program two different text files are created for read and write operations
#include<fstream>                       // in eof concept i'hd created single file for operation

using namespace std;

int main(){
    string st= " This is writing in file: sample60 ";
    string st2;
    string st3;    // this string is to understand getline feature
    cout<<"Enter string for st3 "<<endl;
    cin>>st3;     

    // connecting our file with out stream     ; thus data flows from program to files 
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation  // also creates file if u didnt create one
    out<<st;

    // connecting our file with in stream     ; thus data flows from files to program
    ifstream in("sample61.txt");  // 
    //in>>st2;      // this just reads 1st word "this" it skips others after encountering sapce
    getline(in,st2 );  // read complete single line ; to read complete file use eof
    cout<<st2<<endl; 

    //cout<<st3<<endl;   // prints  single word  
    getline(cin,st3);
    cout<<st3;          // now it would print complete line
    return 0;
} 

/*
getlines task is to READ single line competely   ; it needs cout functn to print the read part on console
getline syntax:                 
getline(obj_of_ifstream , string_char)     // reads from file
cout<<string_char;                         // prints in console

getline syntax for user input (cin):
getline(cin{keyword}, string _char)            // reads user input from program
cout<<string_char;                    // prints in console

*/