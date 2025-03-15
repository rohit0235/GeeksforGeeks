//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int n;
    int solve(vector<int>& coins, int sum,int index, vector<vector<int>>&dp){
               if (sum == 0) return 0;
              if(index==0) {
                   if (sum % coins[0] == 0) return sum / coins[0];
                 else{
                     return INT_MAX;
                 }
               
              }
              if (dp[index][sum]!=-1) return dp[index][sum];
              
              int nottake=solve(coins,sum,index-1,dp);
              int take=INT_MAX;
              if (coins[index]<=sum){
              int subResult = solve(coins, sum - coins[index], index,dp);
            if (subResult != INT_MAX) take = 1 + subResult;
        
              }
            //   return dp[index][sum]=take+nottake;
            
            return dp[index][sum]=min(take,nottake);
                    
     }
     
    int minCoins(vector<int> &coins, int sum) {
        // code here
        n=coins.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
     int ans = solve(coins, sum, n - 1,dp);
        return (ans == INT_MAX ? -1 : ans);
        
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends