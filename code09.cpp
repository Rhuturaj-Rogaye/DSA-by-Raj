#include<iostream>
//Prime No. 

using namespace std;

int main() {
    int n=11;
    bool isPrime= true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            /* code */
            isPrime=false;
        } 
    }
    if(isPrime==true)
    {
        cout<<"Prime No.";
    } else{
        cout<<"Not Prime No.";
    }
    
    return 0;
    
}