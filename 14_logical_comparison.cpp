#include<iostream>
#include<string>
using namespace std;

int main()
{
    string ans="Aman";
    string guess;
    int age;
    int guess_age;
    age= 20;
    cout<< "Guess my name!\n";
    cin>> guess;
    cout<< "Guess my age!\n";
    cin>> guess_age;

    if(guess==ans && guess_age==age)
    {
        cout<< "You get it right!\n";
    }
    return 0;
}