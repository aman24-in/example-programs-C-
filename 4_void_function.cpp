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
void print_pow(double base, int exponent)
{
    double myPower= power(base, exponent);
    cout<< "The "<< base<< " raisesd to "<<exponent<<" is "<< myPower<< endl;
}
int main()
{
    double base;
    int exponent;
    cout<< "What is base??"<< endl;
    cin>> base;
    cout<< "What is exponent??"<< endl;
    cin>> exponent;
    print_pow(base, exponent);
}