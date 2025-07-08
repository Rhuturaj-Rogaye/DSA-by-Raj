<<<<<<< HEAD
#include<iostream>

using namespace std;
void RevereArray(int arr[],int sz){
    int start=0, end=sz-1;
    while (start<end)
    {
        /* code */
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
int main() {
    int arr[]={4,2,7,8,1,2};
    int sz=6;
    RevereArray(arr,sz);
    for (int i = 0; i < sz; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
=======
#include<iostream>

using namespace std;
void RevereArray(int arr[],int sz){
    int start=0, end=sz-1;
    while (start<end)
    {
        /* code */
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
int main() {
    int arr[]={4,2,7,8,1,2};
    int sz=6;
    RevereArray(arr,sz);
    for (int i = 0; i < sz; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
>>>>>>> 30ab57f1d87d31de7f0a4a46f7cc4ca245e86d27
}