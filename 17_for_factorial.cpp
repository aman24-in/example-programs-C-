#include<iostream>
using namespace std;

int main()
{
    int fact;
    cout<< "Enter number: \n";
    cin>> fact;
    for(int i=fact-1; i>0; i--)
    {
        fact= fact*i;
    }
    cout<< "The factorial of given no is: "<< fact;
    return 0;
}