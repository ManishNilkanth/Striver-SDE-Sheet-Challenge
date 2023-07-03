#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
      vector<int>dict(256,-1);
        int maximum = 0;
        int start = -1;

        for(int i = 0; i < s.length(); i++)
        {
            if(dict[s[i]] > start)
            {
                start = dict[s[i]];
            }
            dict[s[i]] = i;
                maximum = max(maximum,i-start);
        }
        return maximum;


}