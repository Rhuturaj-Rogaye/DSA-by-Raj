#include<iostream>

using namespace std;
int DecToBi(int n){
    int ans=0, pow=1;
    while (n>0)
    {
        int rem = n%2;
        n= n / 2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main() {
    // int n=123456789;
    // cout<<DecToBi(n);
    for (int i = 1; i <= 10; i++)
    {
        cout<<DecToBi(i)<<endl;
    }
    
    return 0;
}