#include <bits/stdc++.h>
 bool isPosible(vector<int> pages, int n, int b,int mid)
 {
	 int students = 1;
	 int pageCount = 0;

	 for(int i = 0; i < n; i++)
	 {
		 if(pageCount + pages[i] <= mid)
		 {
			 pageCount += pages[i];
		 }
		 else
		 {
			 students++;
			 if(students > b || pages[i] > mid)
			 {
				 return false;
			 }
			 pageCount = pages[i];
		 }
	 }
	 return true;
 }
int allocateBooks(vector<int> &pages, int n, int b)
{ 
	if(b > n)
	{
		return -1;
	}
	int s = 0;
	int e = 0;
	int mid;
	int ans;

	for(int i = 0; i < n; i++)
	{
		e += pages[i];
		s = min(s,pages[i]);
	}

	while(s <= e)
	{
	   mid = s + (e - s)/2;

	   if(isPosible(pages,n,b,mid))
	   {
		   ans = mid;
		   e = e - 1;
	   }
	   else
	   {
		   s = mid + 1;
	   }
	}
	return ans;
}