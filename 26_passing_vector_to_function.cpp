#include<iostream>
#include<vector>
using namespace std;

// pass by value
// values from vector in main copied to vector in function
// so changing values of vecto in function will not...
// ..change values of vector in main
void print_vector(vector<int> data)
{
    cout<< "---Pass by Value---\n";
    data.pop_back();
    cout<< "pop_back() function performed\n";
    for(int i=0; i<data.size(); i++)
    {
        cout<< data[i]<< ' ';
    }
    cout<< '\n';
}
// pass by reference
// address of vector from main copied to function vector
// change in vector in function will change vector in main
void refprint_vector(vector <int> &data)
{
    cout<< "---Pass by reference---\n";
    data.pop_back();
    cout<< "pop_back() function performed\n";
    for(int i=0; i<data.size(); i++)
    {
        cout<< data[i]<< ' ';
    }
    cout<< '\n';
}

int main()
{
    vector <int> data={1, 2, 3,};
    print_vector(data);
    cout<< "==--MAIN--==\n";
    for(int i=0; i<data.size(); i++)
    {
        cout<< data[i]<< ' ';
    }
    cout<< '\n';
    refprint_vector(data);
    cout<< "==--MAIN--==\n";
    for(int i=0; i<data.size(); i++)
    {
        cout<< data[i]<< ' ';
    }
    cout<< '\n';
}