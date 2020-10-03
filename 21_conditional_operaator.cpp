#include<iostream>
using namespace std;

int main()
{
    int guess,ans=5;
    cout<< "Guess the number: \n";
    cin>> guess;
    int points= guess == ans ? 10 : 0;// conditional operator
    cout<< points;
}