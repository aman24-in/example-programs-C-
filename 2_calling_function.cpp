#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int base, exponent;
    cout<< "What is base??"<< endl;
    cin>> base;
    cout<< "What is exponent??"<< endl;
    cin>> exponent;
    cout<< "The output is "<< pow(base, exponent)<< endl; //identifier pow works in <cmath>
}