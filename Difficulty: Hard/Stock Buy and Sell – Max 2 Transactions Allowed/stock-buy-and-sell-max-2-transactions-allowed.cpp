//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
          vector<vector<vector<int>>>dp(n+1,(vector<vector<int>>(2,vector<int>(3,0))));
        
        for(int i=n-1;i>=0;i--){
              
               for(int buy=0;buy<=1;buy++){
                     
                     for(int cap=1;cap<=2;cap++){
                           
                           if (buy){
                                
        dp[i][buy][cap]=max(-prices[i]+dp[i+1][0][cap],dp[i+1][1][cap]);    
                        
                           }
                           
                           else{
                   dp[i][buy][cap]=max(prices[i]+dp[i+1][1][cap-1],dp[i+1][0][cap]);                    
                                
                                
                                
                           }
                           
                           
                           
                           
                     }
               }
        }
        
        return dp[0][1][2];
        
        
        
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxProfit(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends