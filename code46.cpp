#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int MajorityEle(vector<int> nums){
    int n= nums.size();
    sort(nums.begin(), nums.end());
    int freq=1; 
    int ans= nums[0];
    for (int i = 0; i < n; i++)
    {
        
        if (nums[i]==nums[i-1])
        {
            freq++;
        }else{
            int freq=1;
            ans=nums[i];
            
        }
        if (freq>n/2)
        {
            return ans;
        }
        
    }
    return ans;
}

int main() {
    vector<int> nums= {1, 2, 1, 2, 1, 1, 2, 2, 2, 2};
    cout<<MajorityEle(nums);
    return 0;
}