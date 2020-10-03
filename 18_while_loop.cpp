#include<iostream>
using namespace std;

int main()
{
    int i=0;
    while(i<10)
    {
        cout<< i<<' ';
        i++;
    }
    //factorial
    int fact;
    cout<< "\nEnter the no: \n";
    cin>> fact;
    i= fact-1;
    while(i>1)
    {
        fact=fact*i;
        i--;
    }
    cout<< "The factorial is: "<< fact;
}