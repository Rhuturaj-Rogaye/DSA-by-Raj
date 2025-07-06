#include<iostream>

using namespace std;

int main() {
    int n=4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*"; 
            break;  
        }
        for (int j = i; j > 0; j--)
        {
            cout<<" ";
            
        }
        for (int j = i-1; j > 0; j--)
        {
            cout<<" ";
            
        }
        for (int j = i; j > 0; j--)
        {
            cout<<"*";
            break;
            
        }
        
        cout<<endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout<<" ";
            
        }
        for (int j = i+2; j > 0; j--)
        {
            cout<<"*";
            break;  
        }
        for (int j = i; j < n-i-1; j++)
        {
            cout<<" ";
        }
        
        for (int j = i; j < n-i; j++)
        {
            cout<<"*"; 
            break;  
        }
        cout<<endl;
    }
    
    
    return 0;
}