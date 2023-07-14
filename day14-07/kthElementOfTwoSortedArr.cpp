 
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {

   int i = 0;
   int j = 0;
   int count = 1;
   int ans = -1;

   while(i < m && j < n && count <= k)
   {
       if(row1[i] < row2[j])
       {
            ans = row1[i++];
       }
       else
       {
          ans = row2[j++];
       }
       count++;
   }
   while(i < m && count <= k)
   {
       ans = row1[i++];
   }
   
   while(j < n && count <= k)
   {
       ans = row2[j++];
   }
   return ans;


}


//optimized on using binary search
#include<bits/stdc++.h>
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {

   if(m > n) {
        return ninjaAndLadoos(row2, row1, n, m, k); 
    }
        
    int low = max(0,k-m), high = min(k,n);
        
    while(low <= high) {
        int cut1 = (low + high) >> 1; 
        int cut2 = k - cut1; 
        int l1 = cut1 == 0 ? INT_MIN : row1[cut1 - 1]; 
        int l2 = cut2 == 0 ? INT_MIN : row2[cut2 - 1];
        int r1 = cut1 == n ? INT_MAX : row1[cut1]; 
        int r2 = cut2 == m ? INT_MAX : row2[cut2]; 
            
        if(l1 <= r2 && l2 <= r1) {
            return max(l1, l2);
        }
        else if (l1 > r2) {
            high = cut1 - 1;
        }
        else {
            low = cut1 + 1; 
        }
    }
    return 1; 


}