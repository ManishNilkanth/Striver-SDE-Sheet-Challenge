class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       //using the two pass hash map
        unordered_map<int,int>m;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            m[nums[i]] = i;
        }

        for(int i = 0; i < n; i++)
        {   // we know that  target = nums[i] + num2  so num2 = target - nums[i]
            int secondEl = target - nums[i];
            // check wether the num2 is present in map or not and the index should not same
            if(m.count(secondEl) && m[secondEl] != i)
            {  //if yes then return the index
                return {i,m[secondEl]};
            }
        }
        // if pair is not present then return empty arr or vector
        return {};

    }
};