//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// } Driver Code Ends

class Solution {
  public:
    int n;
    
    int solve(vector<int>&arr,int i,vector<int>&dp){
          
          if (i>=n) return 0;
          if (dp[i]!=-1) return dp[i];
          int chori=arr[i]+solve(arr,i+2,dp);
          int chorinahi=solve(arr,i+1,dp);
          
          return  dp[i]=max(chori,chorinahi);
    }
    int findMaxSum(vector<int>& arr) {
        // code here
          n=arr.size();
          vector<int>dp(n+1,-1);
          return solve(arr,0,dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findMaxSum(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends