class Solution {
  public:
       int row,col;
      int t[501][501];
    int solve(int i , int j ,vector<vector<int>>& mat ){
          
            if (i>=row || j>= col || i<0 || j<0) return 0;
            if (t[i][j]!=-1) return t[i][j];
            
         int first =mat[i][j] + solve(i,j+1,mat);
         int second = mat[i][j] + solve(i-1,j+1,mat);
         int third= mat[i][j] +solve(i+1,j+1,mat);
             
             
          return   t[i][j]=max(first,max(second, third));
   
           
    }
  
  
  
    int maxGold(vector<vector<int>>& mat) {
          
                  row = mat.size();
                  col = mat[0].size();
                  memset(t,-1,sizeof(t));
                   
                   int ans=0;
                   for(int i=0;i<row;i++){
                        
                       int check = solve(i,0,mat);
                       ans= max(ans, check);
                       
                   }
                   
                   return ans;
    }
};