#include<iostream>

using namespace std;

int main() {
    int marks[]={279,59,6,3,91};
    int size=6;
    int smallest=INT16_MAX;
    int largest=INT16_MIN;

    for(int i = 0; i < size; i++)
    {
        /* code */
       smallest=min(marks[i],smallest);
       largest=max(marks[i],largest);
    }
    cout<<"Smallest = "<<smallest<<endl;
    cout<<"Largest= "<<largest<<endl;
    return 0;
}