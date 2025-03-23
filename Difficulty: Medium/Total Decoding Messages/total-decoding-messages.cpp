//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int n;
    int solve(string &digits,int index , vector<int>&dp){
           
           if (index>=n) return 1;
           
           // possible way yo one figits nymber
           if (dp[index]!=-1) return dp[index];
           int ways=0;
           if (digits[index]!='0'){
                 ways=solve(digits,index+1,dp);
           }
           // two sigits number
           if (index+1<n &&( (digits[index]=='1' && digits[index+1]<='9' ) || (digits[index]=='2' && digits[index+1]<='6' ))){
               ways+=solve(digits,index+2,dp);
           }
           
           return dp[index]=ways;
          
    }
     
    int countWays(string &digits) {
        // Code here
        // 1 2 3 1 23 12 13
        if (digits[0]=='0') return 0;
        n=digits.size();
        vector<int>dp(n,-1);
        return solve(digits,0,dp);
    }
};




//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string digits;
        getline(cin, digits);
        Solution obj;
        int ans = obj.countWays(digits);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends