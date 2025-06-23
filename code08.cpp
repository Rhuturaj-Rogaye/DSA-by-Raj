#include<iostream>

using namespace std;
int linearArr(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        /* code */
        if (arr[i]==target)
        {
            /* code */
            return i;
        }
        
    }
    return -1;
}
int main() {
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    int target=6;
    cout<<linearArr(arr,size,target);
    return 0;
}