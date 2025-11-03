class Solution {
  public:
   
   int solve(vector<int>&height, vector<int>&dp ,int n ,int i){
         
          if (i==n-1) return 0;
          if (i>=n) return INT_MAX;
          if (dp[i]!=-1) return dp[i];  
          int f,s=INT_MAX;
     if (i+1<n )f = solve(height, dp , n , i+1)+abs(height[i]-height[i+1]);
     if (i+2<n)     s =solve(height, dp , n , i+2)+ abs(height[i]-height[i+2]);
        //   cout<<f<<" "<<s<<endl;
          return dp[i]= min(f,s);
          
   }
  
    int minCost(vector<int>& height) {
        // Code here
           int n = height.size();
           
           vector<int>dp(n,-1);
           return solve(height, dp , n , 0);
           
    }
};