#include<iostream>
using namespace std;

int main()
{
    enum season{summer, spring, fall, winter};
    season now=winter;
    
    switch(now)
    {
        case summer:
            cout<< "Time to go to Hillstation\n";
            break;
        case winter:
            cout<< "Keep Warm\n";
            break;
        case fall:
            cout<< "Reborn Relive\n";
            break;
        case spring:
            cout<< "Go OUT!! Have Fun!!\n";
            break;
    }
    return 0;
}