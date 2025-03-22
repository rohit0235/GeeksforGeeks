//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int n;
    
    int solve(vector<int>&arr,int i,int end,vector<int>&dp){
          
          if (i>end) return 0;
         if (dp[i]!=-1) return dp[i];
      
          int chorikiya=arr[i]+solve(arr,i+2,end,dp);
          int chorinahikiya=solve(arr,i+1,end,dp);
          
          return dp[i]=max(chorikiya, chorinahikiya);
         
         
    }
    int maxValue(vector<int>& arr) {
               n=arr.size();
               vector<int>dp(n,-1);
               vector<int>dp2(n,-1);
          return max(solve(arr,0,n-2,dp),solve(arr,1,n-1,dp2));
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        int res;
        res = ob.maxValue(arr);
        cout << res << "\n"
             << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends