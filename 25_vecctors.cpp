#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> data= {1, 2, 3};
    data.push_back(12);
    cout<< data[3]<< '\n'<< data[data.size()-1]<< '\n';
    data.pop_back();
    cout<< data[data.size()-1];
}