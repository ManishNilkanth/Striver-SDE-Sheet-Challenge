#include <bits/stdc++.h> 
// using dynamic programming
 
 int find(int i,int j,int row,int col,vector<vector<int>>&dp)
 {
	 if(i == row-1 && j == col-1) return 1;
	 
	 if(i >= row || j >= col) return 0;
	 
	 if(dp[i][j] != -1) return dp[i][j];
	 else return dp[i][j] = find(i+1,j,row,col,dp)+find(i,j+1,row,col,dp);
 }
int uniquePaths(int m, int n) {
 
  vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
  
  return find(0,0,m,n,dp);
  
 
}