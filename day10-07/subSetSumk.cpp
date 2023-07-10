
void solve(int i, int target, vector<int> arr, vector<vector<int>>&ans, vector<int>v)
{
    if(i == arr.size())
    {
        if(target == 0)
        {
            ans.push_back(v);
        }
        return;
    }
    
    
       v.push_back(arr[i]);
        solve(i+1,target-arr[i],arr,ans,v);
        v.pop_back();
    

    solve(i+1,target,arr,ans,v);
    
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
     vector<vector<int>>ans;
     vector<int>v;
     solve(0,k,arr,ans,v);
     return ans;
     
}