<<<<<<< HEAD
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums={4,1,2,1,2};
     int ans=0;
    for(int val : nums){
        ans ^= val;
    }
    cout<<ans;
    return 0;
=======
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums={4,1,2,1,2};
     int ans=0;
    for(int val : nums){
        ans ^= val;
    }
    cout<<ans;
    return 0;
>>>>>>> 30ab57f1d87d31de7f0a4a46f7cc4ca245e86d27
}