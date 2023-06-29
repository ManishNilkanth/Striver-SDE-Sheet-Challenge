bool searchMatrix(vector<vector<int>>& mat, int target) {

      //apply binary search to search the target element
       int row = mat.size();
       int col = mat[0].size();

       int s = 0;
       int e = row*col-1;
       int mid = s + (e-s)/2;

      //To calculate the row and col by mid is row = mid/col, col = mid%col;
       while(s <= e)
       {   //storing mid element 
          int midElement = mat[mid/col][mid%col];

           //simply apply binary seach technique
           if(midElement == target)
           {
               return true;
           }
           else if(midElement < target)
           {
               s = mid+1;
           }
           else
           {
               e = mid-1;
           }
           mid = s + (e-s)/2;
       } 
       return false; 
}