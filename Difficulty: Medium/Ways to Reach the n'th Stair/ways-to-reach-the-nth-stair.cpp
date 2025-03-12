//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
  
     int solve(int i,int n,vector<int>&dp){
              if (i == n) return 1; 
           if (i>n) return 0;
            
           if(dp[i]!=-1) return dp[i];
           
           return dp[i]=(solve(i+1,n,dp)+solve(i+2,n,dp));
           
     }
    
    int countWays(int n) {
        
        vector<int>dp(n,-1);
        return solve(0,n,dp);
        
        
        // your code here
        //       int prev1 = 1;
        // if(n == 1) return 1;
        // int prev2 = 2;
        // for(int i = 3; i <= n; i++) {
        //     int next = prev1 + prev2;
        //     prev1 = prev2;
        //     prev2 = next;
        // }
        // return prev2;
        
        
        
    }
};



//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends