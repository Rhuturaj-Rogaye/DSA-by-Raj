#include<iostream>

using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT8_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for (int end = st; end < n; end++)
        {
            currentSum += arr[end];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            } 
        }
    }
    cout << "Maximum subarray sum is: " << maxSum << endl;
    return 0;
}