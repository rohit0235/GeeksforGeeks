class Solution {
  public:
    void swapDiagonal(vector<vector<int>> &mat) {
        // code here
        
         int n = mat.size();
         int j =0;
         for(int i=0;i<n;i++){
                  swap(mat[i][j],mat[i][n-j-1]) ;      
                  j++;
         }
      
 
    }
};
