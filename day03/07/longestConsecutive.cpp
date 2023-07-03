#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    //using unordered set
    unordered_set<int>s;
    int longest = 1;
    
    // storing all the elements  in unordered set which single occurrence 
    for(int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    for(auto it : s)
    {   /* now checking if we have the consecutive element or not 
          basically it is for saving the operations 
          we want the smallest element in consecutive sequence
        */
        // it says that we don't have smaller then this
        if(s.find(it - 1) == s.end())
        {
            int count = 1;
            int num = it;
            
            //now counting the number of consecutive elemelements 
            while(s.find(num + 1) != s.end())
            {
                num += 1;
                count += 1;
            }
            //the longest subarray.
            longest = max(longest,count);
            
        }
        
    }
    return longest;
    
}


