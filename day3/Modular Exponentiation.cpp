#include <bits/stdc++.h>
//codeStudio
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int ans = 1;

    while(n)
    {
      if(n&1)
      {
          ans = (1LL*ans*x)%m;
      } 
      x = (1LL*x*x)%m;
      n = n>>1; 
    }
    return ans;
}
//leedcode
class Solution {
public:
    double myPow(double x, int n) {

       long long pw = n;
       double ans = 1;
       //It is another one solution using the bit wise operators. approach is same as previous but the operators are different 
       if(pw < 0)
       {
           pw = (-1)*pw;
       } 
       
       while(pw > 0)
       {
           if(pw&1)
           {
               ans *= x;
               pw--;
           }
           x *= x;
           pw = pw>>1;
       }
       if(n < 0)
       {
           return 1/ans;
       }
       return ans;
    }
};