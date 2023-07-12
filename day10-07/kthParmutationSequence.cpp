
 

string kthPermutation(int n, int k) {
    
    int fact = 1;
    vector<int> elements;
    
    for(int i = 1; i < n; i++)
    {
        fact = fact * i;
        elements.push_back(i);
    }
    elements.push_back(n);
    string ans = "";
    //for o based indexing
    k = k - 1;
    
    while(true)
    {
        ans = ans + to_string(elements[k / fact]);
        elements.erase(elements.begin() + k /fact);
        
        if(elements.size() == 0)
        {
            break;
        }
         
        k = k % fact;
        
        fact = fact / elements.size();
    }
    return ans;
}
