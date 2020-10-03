#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main()
{
    int data[]={1, 2, 3, 4, 5, 6};
    // simple for loop
    for(int i=0; i<6; i++)
    {
        cout<< data[i]<< ' ';
    }
    cout<< '\n';
    // range based for loop
    for(int n : data)
    {
        cout<< n<< ' ';
        // works with STL array, C array, Vectors
        // doesn't work in function with C array..
        // ..as they forget size as they are passed as
        // ..reference (int from main--->> int* to function)
    }
}