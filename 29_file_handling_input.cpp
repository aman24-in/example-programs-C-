#include<iostream>
#include<vector>
#include<array>
#include<fstream>
using namespace std;

int main()
{
    // string filename;
    // cout<< "Enter filename: \n";
    // cin>> filename;
    // ofstream got(filename, ios::app);
    ofstream file("hello.txt", ios::app);
    /*
    or
    ofstream file;
    file.open("hello.txt");
    it will create fle if not present
    */
    // if(got.is_open())
    // {
    //     cout<< "Success\n";
    // }
    if(file.is_open())
    {
        cout<< "Success\n";
    }
    file<< "Aman\n"<< "Aniket\n";
    file.close();
    return 0;
}