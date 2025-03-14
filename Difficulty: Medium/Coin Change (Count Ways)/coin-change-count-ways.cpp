//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int n;
   int solve(vector<int>& coins, int sum,int index,  vector<vector<int>>&dp){
              
              if(index==0) {
                   return sum%coins[0]==0;
              }
              if (dp[index][sum]!=-1) return dp[index][sum];
              
              int nottake=solve(coins,sum,index-1,dp);
              int take=0;
              if (coins[index]<=sum)
              take=solve(coins,sum-coins[index],index,dp);
              
              return dp[index][sum]=take+nottake;
                    
     }
    int count(vector<int>& coins, int sum) {
          n=coins.size();
          vector<vector<int>>dp(n,vector<int>(sum+1,-1));
          return solve(coins,sum,n-1,dp);
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
        int sum;
        cin >> sum;
        cin.ignore();
        Solution ob;
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends