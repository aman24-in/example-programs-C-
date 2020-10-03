#include<iostream>
#include<string>
#include<limits>
using namespace std;

int main()
{
    const int SIZE=100;
    int count=0, arr[SIZE];
    cout<< "ENTER ELEMENTS: \n";
    for(int i=0; i<SIZE; i++)
    {
        if(cin>> arr[i])
        {
            count++;
        }
        else
        {
            {
                break;
            }
        }
        
    }
    for(int i=0; i<count; i++)
    {
        cout<< arr[i]<< ' ';
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}