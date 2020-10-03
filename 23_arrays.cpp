#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<< "Enter number of elements: \n";
    cin>>x;
    int y[x];
    cout<< "Enter the elements: \n";
    for ( int i = 0; i < x; i++)
    {
        cin>> y[i];
    }
    for ( int i = 0; i < x; i++)
    {
        cout<< y[i]<< ' ';
    }
}