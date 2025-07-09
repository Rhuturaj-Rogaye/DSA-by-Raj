#include<iostream>
#include<vector>
using namespace std;

int MajorElement(vector<int>arr){
    int n= arr.size();
        for(int val: arr){
            int freq=0;
            for(int ele: arr){
                if (ele==val)
                {
                    freq++;
                }
                
            }
             if (freq>n/2)
            {
            /* code */
                return val;
            }  
        }
    return -1;
    }
            

int main() {
    vector<int> arr= {1, 2, 2, 2, 2, 1, 1, 1};
    cout<<MajorElement(arr);


    
    return 0;
}