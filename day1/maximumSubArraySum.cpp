#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long currSum = 0;
    long long maxi = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxi = max(currSum,maxi);

        if(currSum < 0)
        {
            currSum = 0;
        }
    }
    if(maxi < 0)
    {
        return 0;
    }
    return maxi;
}