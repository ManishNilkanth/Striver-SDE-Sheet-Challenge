void solve(int i,int sum,vector<int>&num,vector<int>&ans)
{
    if(i < 0)
    {
       ans.push_back(sum);
       return; 
    }
    
     solve(i-1,sum,num,ans);
    solve(i-1,sum+num[i],num,ans);
    
}
vector<int> subsetSum(vector<int> &num){
	// Write your code here.
    vector<int>ans;
    solve(num.size()-1,0,num,ans);
    sort(ans.begin(),ans.end());
    return ans;	
}