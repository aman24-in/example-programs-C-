#include<iostream>
using namespace std;

double power(double base, int exponent)
{
    double result=1;
    for(int i=0; i<exponent; i++)
    {
        result=result*base;
    }
    return result;
}

int main()
{
    int base, exponent;
    cout<< "What is base??"<< endl;
    cin>> base;
    cout<< "What is exponent??"<< endl;
    cin>> exponent;
    double myPower= power(base, exponent);
    cout<< "The output is "<< myPower<< endl;
}