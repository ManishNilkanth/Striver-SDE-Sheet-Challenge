double median(vector<int>& nums1, vector<int>& nums2) {

     vector<int>arr;
        arr=nums1;
        for(auto i:nums2)
        {
            arr.push_back(i);
        }
        sort(arr.begin(),arr.end());
        
        int size =arr.size();
        
          return size%2 ?  (arr[size/2.0]): (arr[size/2]+arr[(size/2)-1])/2.0;
        

}