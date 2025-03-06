//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int n=0;
    int m=0;
               
    int solve(string &s1, string &s2,int i,int j, vector<vector<int>>&dp){
           
            if (i==n || j==m) {
                 return 0;
            }
            
            if (dp[i][j]!=-1){
                 return dp[i][j];
            }
            if (s1[i]==s2[j]){
                  
                  return dp[i][j]= 1+solve(s1,s2,i+1,j+1,dp);
            }
            
            int length=solve(s1,s2,i,j+1,dp);
            // swap(s1[i],s2[j]);
            int length2=solve(s1,s2,i+1,j,dp);
            
            return dp[i][j] =max(length,length2);
            
    }
    int lcs(string &s1, string &s2) {
            
             n=s1.size();
             m=s2.size();
             vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
            return solve(s1,s2,0,0,dp);
            
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; // Take both the strings as input
        Solution ob;
        cout << ob.lcs(s1, s2) << endl; // Call the lcs function
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends