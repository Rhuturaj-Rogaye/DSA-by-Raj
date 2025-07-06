#include<iostream>
#include<vector>
using namespace std;

int main() {
    //SYNTAX
    //1. 
    vector<int>vec1;
    //2.
    vector<int>vec2={1,2,3,4,5};
    //3.
    vector<int>vec3(6,0);
    for(int i : vec2){
        cout<<i<<endl;
    }
    return 0;
}