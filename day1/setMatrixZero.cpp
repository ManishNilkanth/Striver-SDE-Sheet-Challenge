class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n  = matrix.size();
    int m = matrix[0].size();  
    set<int>v1,v2;
    
    //just marking the rows & colom which cantains 0
	 for(int i = 0; i < n; i++)
	 {
		 for(int  j = 0; j < m; j++)
		 {
			 if(matrix[i][j] == 0)
			 {  
				v1.insert(i);
                v2.insert(j);
			 }
		 }
	 }
     // mark as 0 that row & colom;
	  for(int i = 0; i < n; i++)
	 {
		 for(int  j = 0; j < m; j++)
		 {
			 if( v1.count(i) || v2.count(j) )
			 {
				matrix[i][j] = 0;
			 }
		 }
	 }
       
    }
};