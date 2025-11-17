class Solution {
  public:

    int n;
    // map<tuple<int,int>,int>mp;
    // int solve(vector<int>&arr , int prev , int i){
    //       if (i>=n) return 0;
    //       tuple<int,int>state = {prev, i};
    //       if (mp.count(state) )return mp[state];     
    //       int first = 0;
    //       int second =0;
    //       int third =0;
    //       if (arr[i]>prev){
    //           first = arr[i]+ solve(arr, arr[i],i+1);
    //           second = solve(arr, prev,i+1);
    //       }
    //       else{
    //           third = solve(arr, prev,i+1);
    //       }
         
    //       return mp[state]=max(first , max(second , third));
    // }  
    
    int solve(vector<int>&arr , int prev , int i,   vector<vector<int>>&dp){
          if (i>=n) return 0;
        //   tuple<int,int>state = {prev, i};
        //   if (mp.count(state) )return mp[state];     
        if (prev!=-1 && dp[i][prev+1]!=-1) return dp[i][prev+1];
          int first = 0;
          int second =0;
          int third =0;
          if (prev==-1  ||  arr[i]>arr[prev]){
              first = arr[i]+ solve(arr, i,i+1,dp);
              second = solve(arr, prev,i+1,dp);
          }
          else{
              third = solve(arr, prev,i+1,dp);
          }
         
          return dp[i][prev+1]=max(first , max(second , third));
    }  
    

    
    int maxSumIS(vector<int>& arr) {
               
                      n = arr.size();
                        vector<vector<int>>dp(n+1,vector<int>(n+1,-1)) ;
                    return solve(arr,-1,0,dp);
                            
    }
};