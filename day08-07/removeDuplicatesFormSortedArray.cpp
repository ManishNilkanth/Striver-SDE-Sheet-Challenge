int removeDuplicates(vector<int> &arr, int n) {
	 
	 int ans = 1;

	 for(int i = 0; i < n; i++)
	 {
		 if(i+1 < n && arr[i] != arr[i+1])
		 {
			 ans++;
		 }
	 }
	 return ans;
}