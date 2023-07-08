#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	
	sort(arr.begin(),arr.end());
	set<vector<int>>s;
	vector<vector<int>>ans;

	for(int i = 0;i < n-2; i++)
	{
		int low = i+1, high = n-1;

		while(low < high)
		{
			if(arr[i] + arr[low] + arr[high] < K)
			{
				low++;
			}
			else if(arr[i] + arr[low] + arr[high] > K)
			{
				high--;
			}
			else
			{
				s.insert({arr[i],arr[low],arr[high]});
				low++;
				high--;
			}
		}
	}

	for(auto it:s)
	{
      ans.push_back(it);
	}
	return ans;
}