class Solution {
  public:
    
    int n,m;
    map<tuple<int,int,int>, int>mp;
    int solve(vector<int>&a, vector<int>&b, int i , int j, int prev){
          if (i>=n || j>=m) return 0;
     
          tuple<int,int,int>state = {i,j,prev};
             if (mp.count(state)) return mp[state];
          int first =0;
          if (a[i]==b[j] && a[i]>prev){
                first = 1+ solve(a, b, i+1,j+1,a[i]);
          }
          
          int second = solve(a, b, i+1,j,prev);
          int third = solve(a, b, i,j+1,prev);
    
         return mp[state]=max(first , max(second , third));
    }
   
  
    int LCIS(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size(), m=b.size();
      vector<int> dp(m+1, 0);
      
      for(int &x: a){
        int c=0;
        for(int i=0;i<m;i++){
          if(b[i]==x)
            dp[i] = (dp[i], c+1);
          if(b[i] < x)
            c = max(dp[i], c);
        }
      }
      
      
      int ans = 0;
      for(int &x: dp)
        ans = max(ans, x);
      
      return ans;
    }
};