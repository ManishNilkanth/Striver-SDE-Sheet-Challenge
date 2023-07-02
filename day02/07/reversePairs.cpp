#include <bits/stdc++.h> 
 void merge(int low, int mid, int high, vector<int>&arr)
 {   
	 // To store the sorted elements
	 vector<int>temp;
	 int left = low;
	 int right = mid + 1;

	 while(left <= mid && right <= high)
	 {
		 if(arr[left] < arr[right])
		 {
			 temp.push_back(arr[left++]);
		 }
		 else
		 {
			temp.push_back(arr[right++]); 
		 }
	 }
	 
	 while(left <= mid)
	 {
	    temp.push_back(arr[left++]); 
	 }
	 
	 while(right <= high)
	 {
		 temp.push_back(arr[right++]);
	 }

	 for(int i = low; i <= high; i++)
	 {
		 arr[i] = temp[i - low];
	 }
	
 }
 
 int remainPairs(int low, int mid, int high, vector<int>&arr)
 {
	 int right = mid + 1;
	 int count = 0;
	 for(int i = low; i <= mid; i++)
	 {
		 while(arr[i] > 2*arr[right] && right <= high) right++; 
		  count += (right - (mid + 1));
	 }
	 return count;
 }
 int mergeSort(int low ,int high,vector<int>& arr)
 {
	 int count = 0;
	 if(low >= high) return count;

	 int mid = low + (high - low)/2;
	 
	 //left part
	 count += mergeSort(low,mid,arr);
	 
	 // right part
	 count += mergeSort(mid + 1,high,arr);
	 
	 // count the remaining pairs
	 count += remainPairs(low,mid,high,arr);
	 
    // merge the parts	 
	 merge(low ,mid , high, arr);

	 return count;
	 
 }
int reversePairs(vector<int> &arr, int n){
	 	
		 return mergeSort(0,n-1,arr);
}