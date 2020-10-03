#include<iostream>
#include<stdlib.h>
#include<array>
using namespace std;

void print_array(array<int, 5> data)
{
    for(int i=0; i< data.size(); i++)
    {
        cout<< data[i]<< ' ';
    }
    cout<< '\n';
}
int main()
{
    array<int, 5> data={1, 2, 3};
    print_array(data);
}