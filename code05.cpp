#include<iostream>

using namespace std;

int biTodec(int biNum){
    int ans=0,pow=1;
    while (biNum)
    {
        /* code */
        int rem = biNum%10;
        biNum/=10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}

int main() {
    int biNum = 101;
    for (int i = 101; i <= 150; i++)
    {
        /* code */
        cout<<"Dec no. of "<<i<<" is "<<biTodec(i);
    }
    
    
    return 0;
}