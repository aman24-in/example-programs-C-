// RANDOM NUMBER GAME
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int start()
{
    cout<< "0. Quit\n1. Play Game\n";
    int choice;
    cin>> choice;
    return choice;
}
int step(int choice)
{
    if(choice==1)
    {
        cout<< "Yo let's play\n";
    }
    else if(choice==0)
    {
        cout<< "Thanks for playing!!\n";
        return 0;
    }
    else
    {
        cout<< "Please Enter a valid number: \n";
    }
    return 0;
}
int game()
{
    int random= rand()%100;
    cout<< "You have 10 chances\n";
    cout<< "Guess the number: ";
    int guess, count=0;
    
    for(int i=0; i<10; i++)
    {   
        count++;
        cin>> guess;
        if(guess==random)
        {
            cout<< "You Won\n-----Winner-----";
            break;
        }
        else if(i==9)
        {
            cout<< "Better luck next time\n";
        }
        else if(guess==random/2)
        {
            cout<< "HINT: You have won half the battle\n";
        }
        else if(guess>random)
        {
            cout<< "You have come too far\n";
        }
        else if(guess==random/4 && guess==random-4 && guess==random+4)
        {
            cout<< "HINT: May the FOURTH be with you\n";
        }
        else if(guess>random-20 && guess<random+20)
        {
            cout<< "HINT: Steave Carell got waxed in this movie\n";
        }
        else if(guess==random-7)
        {
            cout<< "You need Ariana Grande's RINGS\n";
        }
        else if(guess<random-100)
        {
            cout<< "Not even in 100 yards!\n";
        }
        else if(guess>random-21 && guess<random)
        {
            cout<< "HINT: Within length of cricket pitch\n";
        }
        else
        {
            cout<< "Not even near\n";
        }
    }
    cout << "Wanna try again??\n";
    int x=start();
    step(x);
    if(x==1)
    {
        game();
    }
    if(x==0)
    {
        return 0;
    }
    return 0;
}


int main()
{
    srand(time(NULL));
    int x=start();
    step(x);
    if(x==1)
    {
        game();
    }
    else if(x==0)
    {
        return 0;
    }
    else
    {
        cout<< "Enter Valid no: \n";
    }
    
}