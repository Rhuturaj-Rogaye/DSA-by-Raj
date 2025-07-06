#include<iostream>

using namespace std;

int main() {
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            if (currSum > maxSum)
            {
                maxSum = currSum; // Update maxSum if current sum is greater
            }
            if (currSum < 0)
            {
                currSum = 0; // Reset current sum if it becomes negative
            }
            
        }

        
        
    }
    cout << "Maximum subarray sum is: " << maxSum << endl;
    return 0; // This line is incorrect; it should not return currSum
}