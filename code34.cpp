<<<<<<< HEAD
#include<iostream>

using namespace std;
int LinearArray(int arr[],int sz, int target){
    for (int i = 0; i < sz; i++)
    {
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[]={4,2,7,8,1,2,5};
    int sz = 7;
    int target = 5;
    
    cout<<LinearArray(arr,sz,target);

    
    
    return 0;
=======
#include<iostream>

using namespace std;
int LinearArray(int arr[],int sz, int target){
    for (int i = 0; i < sz; i++)
    {
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[]={4,2,7,8,1,2,5};
    int sz = 7;
    int target = 5;
    
    cout<<LinearArray(arr,sz,target);

    
    
    return 0;
>>>>>>> 30ab57f1d87d31de7f0a4a46f7cc4ca245e86d27
}