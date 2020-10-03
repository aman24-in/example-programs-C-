#include<iostream>
#include<vector>
using namespace std;

void print(const int arr[], int &n) //constant variable //cannot change values in function // change value of n will change value of x in main()
{
    for(int i=0; i<n; i++)
    {
        // arr[i]++;    it will not execute as array has type constant
        cout<< arr[i]<< ' ';
    }
    n=15;
    cout<< '\n'<<n<<'\n';
}
int main()
{
    int arr[5]= {1, 2, 3 ,4, 5};
    int x=5;
    print(arr,x);
    for(int i=0; i<5; i++)
    {
        cout<< arr[i]<< ' ';
    }
    cout<< '\n'<< x;
}