#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// using Boyer Moore's votting algo

	int count = 0;
	int element = INT_MIN;
	
	//finding the majority element
	for(int i = 0; i < n; i++)
	{
		if(count == 0)
		{
			count++;
			element = arr[i];
		}
		else if(element == arr[i])
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	count = 0;
	//validate an element if it's occorance is > n/2
	for(int i = 0; i < n; i++)
	{
		if(element == arr[i])
		{
			count++;
		}
	}
	if(count > n/2)
    {
		return element;
	}
	return -1;
}