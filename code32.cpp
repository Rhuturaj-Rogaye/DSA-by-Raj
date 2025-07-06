#include<iostream>

using namespace std;
int BiNumDec(int BiNum){
    int ans=0,pow=1;
    while(BiNum>0){
        int rem = BiNum%10;
        ans+=(rem*pow);
        BiNum/=10;
        pow*=2;
    }
    return ans;
}
int main() {
    int BiNum=101;
    cout<<BiNumDec(BiNum);
    return 0;
}