class Solution {

  vector<int>getRow(int row)
  {
      long long ans = 1;
      vector<int>rowElements;
      rowElements.push_back(ans);
     // here just we want to print the element for the given row so row is not gonna change  but the col will get change.
      for(int col = 1; col < row; col++)
      {   // this is the formula of calculating the factorial of n-1 C r-1.(ans = ans*(row-col/col)
          ans = ans* (row - col);
          ans = ans/col;
          rowElements.push_back(ans);
      }
      return rowElements;
  }
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>ans;

        for(int i = 1; i <= numRows; i++)
        {
            ans.push_back(getRow(i));
        }
     return ans;
    }
};