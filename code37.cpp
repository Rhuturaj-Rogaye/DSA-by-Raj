#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    cout<<"At 1st Size is= "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"after push back size is "<<vec.size()<<endl;
    cout<<"1st value in it"<<vec.front()<<endl;
    cout<<"Last value in it"<<vec.back()<<endl;
    vec.pop_back();
    cout<<"after pop back size is "<<vec.size()<<endl;
    cout<<"value at specific index no. "<<vec.at(1)<<endl;
    
    return 0;
}