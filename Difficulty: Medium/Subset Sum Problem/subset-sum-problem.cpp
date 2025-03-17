//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int n;
    
    bool solve(vector<int>&arr,int sum,int current,int i,     vector<vector<int>>&dp){
               if (current==sum){
                     return true;
               } 
            //   if (current>=)
            
            if (i>=n || current>sum) return false; 
             if (dp[i][current]!=-1) return dp[i][current];   
      return dp[i][current]=solve(arr,sum,current+arr[i],i+1,dp) || solve(arr,sum,current,i+1,dp);
                
    }
    
    bool isSubsetSum(vector<int>& arr, int sum) {
           // code here
            n=arr.size();
            vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
             return solve(arr,sum,0,0,dp);
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
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends