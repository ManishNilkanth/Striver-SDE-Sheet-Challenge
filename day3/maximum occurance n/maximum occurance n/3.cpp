#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &v)
{
    //using Boyer Moore's voting algo

    //for n/3 there can only be 2 element with > n/3 occorance

    int n = v.size();  
    int cnt1 = 0, cnt2 = 0;  
    int el1 = INT_MIN;  
    int el2 = INT_MIN;  

    // applying the Extended Boyer Moore's Voting Algorithm:
    for (int i = 0; i < n; i++) {
        
        if (cnt1 == 0 && el2 != v[i]) {
            cnt1++;
            el1 = v[i];
        }
        else if (cnt2 == 0 && el1 != v[i]) {
            cnt2++;
            el2 = v[i];
        }
        else if (v[i] == el1) cnt1++;
        else if (v[i] == el2) cnt2++;
        else {cnt1--, cnt2--;}
    }

    vector<int> ans;  
    cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == el1) cnt1++;
        if (v[i] == el2) cnt2++;
    }

    int mini = int(n / 3) + 1;
    if (cnt1 >= mini) ans.push_back(el1);
    if (cnt2 >= mini) ans.push_back(el2);

    return ans;


}