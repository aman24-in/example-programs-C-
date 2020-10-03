#include<iostream>
using namespace std;

int main()
{
    string str= "Hello";
    // (starting index of inputing string, no of char to......
    // ..... delete from existing string, new string to add....
    // from starting index )
    str.replace(1,2,"Heaven");
    cout<< str<< endl;
    // gives starting index of found value( if found )
    cout<< str.find("Heaven")<< endl;
    // extract particular part of string
    cout<< str.substr(0,3)<< endl;
    // give index of fist value found after searching from input
    cout<< str.find_first_of("aeiou")<< endl;
    cout<< str.find_first_of("!")<< endl;
    // gives -1 as o/p if not found but since
    // find_first_of() is unsigned long prints
    // value corresponding size
    cout<< str.compare("HHeavenlo")<< endl; //if equal return 0
    cout<< str.compare("Hello")<< endl; // if != return -1 
}