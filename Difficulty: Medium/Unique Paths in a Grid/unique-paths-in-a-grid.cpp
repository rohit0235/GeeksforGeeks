class Solution {
  public:
    
    int n,m;
    
    // int totalways=0;
 
    
    int solve(vector<vector<int>> &grid, int i,int j,vector<vector<int>>&dp){
         
         if (i==n-1 && j==m-1){
             
              return 1;
         }
         
         
         if (i>=n || j>=m){
              return 0;
         }
         
         if (dp[i][j]!=-1){
              return dp[i][j];
         }
         int f=0,s=0;
         if (i+1<n && grid[i+1][j]!=1){
            f= solve(grid,i+1,j,dp);
         }
         if (j+1<m && grid[i][j+1]!=1){
             s=solve(grid,i,j+1,dp);
         }
         
         return dp[i][j]=f+s;
    }
    
  
    int uniquePaths(vector<vector<int>> &grid) {
         
         n= grid.size();
         m= grid[0].size();
         vector<vector<int>>dp(n,vector<int>(m,-1));
         
         if (grid[0][0]==1 || grid[n-1][m-1]==1){
               return 0;
         }
         return solve(grid, 0 ,0,dp);
              
    }
};