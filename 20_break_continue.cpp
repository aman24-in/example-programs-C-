#include<iostream>
using namespace std;
// program to print string vertically
int main()
{
    string sen= "Hello Ladies!!";
    for(int i=0; i<sen.length(); i++)
    {
        cout<< sen[i]<< '\n';
        if(sen[i]=='o')
         {
            cout<< "Found it!";
            break; // breaks loop once codn achieved
         }
    }
    for(int i=0; i<sen.length(); i++)
    {
        if(sen[i]==' ')
        {
            // will skip iteration for spaces
            continue;
        }
        cout<< sen[i]<< '\n';
    }   
}