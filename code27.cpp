#include<iostream>

using namespace std;

int main() {
    int n=5,k;
    
    
    int arr[]={1,2,3,4,5};
    cout<<"Key element";
    cin>>k;

    int S;
    S=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==k)
        {
            S=i;
            break;
        }
    }
    if (S==0)
    {
        cout<<"Key element no found";
    } else {
        cout<<"Key element index"<<S;
    }
    
    
    return 0;
}