#include<iostream>

using namespace std;

int main() {
    int n=5;
    for (int i = 0; i < n; i++)
    {
        char ch='A'+i;
        for (int j = 1; j <= i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= n-i; j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    
    return 0;
}