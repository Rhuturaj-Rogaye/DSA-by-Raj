#include<iostream>

using namespace std;
void change(int arr[],int size){
    cout<<"in funcion"<<endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        arr[i]=2*arr[i];
    }
    
}

int main() {
    int arr[]={5,7,9};
    change(arr,3);
    cout<<"in main"<<endl;
    for (int i = 0; i <3; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    

    return 0;
}