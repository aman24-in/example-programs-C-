#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // using nested vectors
    vector<vector <int>> arr= {{1,2,3},{4,5,6},{7,8,9}};
    // using arrays
    // int arr[][3]={{1,2,3},{4,5,6},{7,8,9}}; //second bracket in arr[][] must always have value in it
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<< arr[i][j]<< ' ';
        }
        cout<< endl;
    }
}