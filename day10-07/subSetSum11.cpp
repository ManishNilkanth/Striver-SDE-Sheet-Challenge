#include <bits/stdc++.h> 
void powerSet( vector<int> &arr, set<vector<int>>&ans,vector<int>set,int i)
{
    if(i == arr.size())
    {   sort(set.begin(),set.end());
        ans.insert(set);
        return;
    }
    set.push_back(arr[i]);
    powerSet(arr,ans,set,i+1);
    set.pop_back();
    powerSet(arr,ans,set,i+1);

}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    set<vector<int>>ans;
    vector<int>set;
    powerSet(arr,ans,set,0);
    vector<vector<int>>res;

    for(auto it : ans)
    {
      res.push_back(it);
    }
    return res;

}