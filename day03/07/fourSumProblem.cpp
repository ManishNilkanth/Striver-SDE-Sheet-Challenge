#include <bits/stdc++.h>
string fourSum(vector<int> nums, int target, int n) {
       
       // sort the array  
        sort(nums.begin(),nums.end());
        
        // making pointers pointing to the first, second ,third ,and the last value
        for(int i = 0; i < n-3; i++)
        {
            for(int j = i+1; j < n-2; j++)
            {  
                int mid = j+1 , high = n-1;
                //here mid and high will move 
                while(mid < high )
                {
                  // as we know that the array is sorted so if the target is greater then sum, we will increament the mid  
                if((long long)nums[i] + (long long)nums[j] + (long long)nums[mid] + (long long)nums[high] < target)
                {
                    mid++;
                }
                // else if the target is smaller then the sum then we will decrease the high
                else if((long long)nums[i] + (long long)nums[j] + (long long)nums[mid] + (long long)nums[high] > target)
                {
                    high--;
                }
                else{
                    // it shows that the 4 sum pair exists in the given array
                    return "Yes";
                }
               }
            }
        
        }
        return "No";
}
