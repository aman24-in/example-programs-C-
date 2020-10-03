#include<iostream>
//#include<string>
using namespace std;

int main()
{
    //using <string> from c++ header

    string str="Hello There!";
    string ful=" How are you??"; //don't use new as variable name
    cout<< str<< endl;
    cout<< str+ful<< endl; // string concatanation
    //if wan to use function with concatanated string put
    //those strings in bracket
    cout<< (str+ful).length()<< endl;
    str+="!"; //append string
    cout<< str<< endl;

    // from cstring // From C
    // strings created using char array with terminating character
    char name[]= "Caleb"; // 5 characters entered
    cout<< sizeof(name)<< endl; //actual characters in name = 6
    /*
    C       a       l       e       b       \0= terminating character
    1       2       3       4       5       6
    INDEX VALUES
    0       1       2       3       4       5

    \0 is displayed as null on output
    */
   cout<< name[4]<< endl;
}