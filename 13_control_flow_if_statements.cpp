#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<< "Enter your age: "<< endl;
    cin>> age;
    if(age<17)
    {
        cout<< "You are not old enough\n";
        return 0;
    }
    else if(age==17)
    {
        cout<< "You are just about there\n";
        return 0;
    }
    else
    {
        cout<< "You are old enough\n";
    }
    cout<< "-------WelCome------";
    return 0;
}