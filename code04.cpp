#include<iostream>

using namespace std;

int decTobi(int decNum){
    int sum=0, pow=1;
    while (decNum>0)
    {
        int rem = decNum%2;
        decNum /= 2;
        sum += (rem*pow);
        pow*=10;
    }
    return sum;
}
int main() {
    int decNum =50;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout<<"Binary No.for "<<i<<" is "<<decTobi(i)<<endl;
    }
    
    
    return 0;
} 