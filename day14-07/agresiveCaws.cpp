
bool isPosible(vector<int> &stalls, int k,int mid)
{
    int caws = 1;
    int LastPosition = stalls[0];

    for(int i = 0; i < stalls.size(); i++)
    {
        if(stalls[i] - LastPosition >= mid)
        {
            caws++;
            if(caws == k)
            {
                return true;
            }
            LastPosition = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    
    int s = 0;
    int e = -1;
    int ans = -1;
    int mid;

    for(int i = 0; i < stalls.size(); i++)
    {
        e = max(e,stalls[i]);
    }

    while(s <= e)
    {
       mid = s + (e - s)/2;

       if(isPosible(stalls,k,mid))
       {
           s = mid + 1;
           ans = mid;
       } 
       else
       {
            e = mid - 1;
       }
    }
    return ans;
}