class Solution {
  public:
    


    int res=0;
     int solve(string &s1 , string &s2 , int i, int j,  vector<vector<int>>&dp){
            
            if (i<=0  || j<=0 ) return 0;
   if (  dp[i][j] !=-1){
        return dp[i][j];
   }
            if (s1[i-1]==s2[j-1]){
               dp[i][j] = 1+  solve(s1,s2,i-1,j-1,dp);
               res = max(res,  dp[i][j] );
            //   return curr;
            }
      
            else{
              
             dp[i][j] = 0;
            }
               solve(s1,s2,i-1,j,dp);
                 solve(s1,s2,i,j-1,dp);
                 return   dp[i][j] ;

            
     }
    int longestCommonSubstr(string& s1, string& s2) {
        // your code here
        
      int  n = s1.size();
        int m = s2.size();
         vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
     solve(s1, s2 ,n , m ,dp);
     return res;
        //     int res = 0;
        //  vector<vector<int>>ls(n+1,vector<int>(m+1,0));
        //   for(int i=1;i<=n;i++){
               
        //         for(int j=1;j<=m;j++){
                     
        //               if (s1[i-1]==s2[j-1]){
        //                     ls[i][j]= ls[i-1][j-1]+1;
                            
        //                     res = max(res , ls[i][j]);
        //               }
        //               else{
        //                       ls[i][j]=0;
        //               }
        //         }
        //   }
          
        //   return res;
        
    }
};