int findPivot(int* arr,int n)
{
    int s = 0;
    int e = n - 1;

    while(s < e)
    {
      int mid = s + (e - s)/2;
      if(arr[mid] >= arr[0])
      {
          s = mid + 1;
      }
      else
      {
          e = mid;
      }
    }
    return s;
}
int solve(int* arr,int s,int e,int key)
{
    while(s <= e)
    {
        int mid = s + (e - s)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int search(int* arr, int n, int key) {
    
    int pivot = findPivot(arr, n);
    if(arr[pivot] <= key && key <= arr[n-1])
    {
        return solve(arr,pivot,n-1,key);
    }
    else
    {
        return solve(arr,0,pivot-1,key);
    }
}