#include<iostream>
using namespace std;

int main()
{
    string pswd= "hellopizza123";
    string guess;
    do{
        // string pswd= "hellopizza123";
        // string guess;
        // if declared inside do then it will remain..
        // ..inside do. While will not know..
        // what guess & pswd are
        // so declare in global scope
        cout<< "Guess the password: \n";
        cin>> guess;
    }while(guess!=pswd);
    cout<< "You got it";

    return 0;
}