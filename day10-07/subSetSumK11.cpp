#include<bits/stdc++.h>
void solve(int index, int target, vector<int>&arr, vector<vector<int>>&ans, vector<int>&v)
{
    
     if(target == 0)
	 {
		 ans.push_back(v);
		 return;
	 }
    
	
	for(int i = index; i < arr.size(); i++)
	{
		if(i > index && arr[i] == arr[i-1])
		{
			continue;
		}
		if(arr[i] > target)
		{
			break;
		}
		v.push_back(arr[i]);
		solve(i+1, target - arr[i], arr, ans, v);
		v.pop_back();
	}
    
     
    
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	vector<int>v;
	solve(0,target,arr,ans,v);
	 return ans;

	 
}
