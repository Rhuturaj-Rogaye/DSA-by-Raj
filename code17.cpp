#include<iostream>

using namespace std;

int main() {
    char ch='A';
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch+=1;
    }
    
    return 0;
}