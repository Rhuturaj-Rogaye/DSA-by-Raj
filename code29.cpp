//sum of digits
#include<iostream>

using namespace std;
int SumOfDig(int num){
    int DigSum=0;
    while(num>0){
        int lastDig = num%10;
        num/=10;
        DigSum += lastDig;
    }
    return DigSum;
}
int main() {
    cout<<SumOfDig(1234);
    return 0;
}