#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  
  // map to store the prefix sum as key and index as value
   map<int,int>m;
   // It is for the prefix sum.
   int sum = 0;
   // maximum lenth of of the subarray that have the sum 0.
   int maxLen = 0;

   for(int i = 0; i < arr.size(); i++)
   {
      sum += arr[i];
      
      if(sum == 0)
      {
        maxLen = i + 1;
      }
      else
      {
        if(m.find(sum) != m.end())
        {
          maxLen = max(maxLen,i - m[sum]);
        }
        else
        {
          m[sum] = i;
        }
      }
   }
   return maxLen;
}