#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    ifstream file("hello.txt");

    // vector <string> name;
    // string input;
    // while(file>> input)
    // {
    //     name.push_back(input);
    // }
    // for(string S : name)
    // {
    //     cout<< S<< ' ';
    // }
    char temp= file.get();
    cout<< temp;
    string line;
    getline(file, line);
    cout<< line;
}