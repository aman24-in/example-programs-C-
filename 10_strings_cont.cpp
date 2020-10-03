#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<< "Enter String: "<< endl;
    getline(cin, str);
    cout<< str.length()<< endl<< str<< endl;
    str.append(" How are you?"); //add at end
    cout<< str<< endl;
    str.insert(3,"**"); //insert from this index
    cout<< str<< endl;
    str.erase(3,2); //erase from this index given length
    cout<< str<< endl;
    str.erase(3);
    cout<< str<< endl;
    str.erase(str.length()-1); //erase last letter
    cout<< str<< endl;
    str.pop_back(); //erase last letter
    cout<< str<< endl;
}