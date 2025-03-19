//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxProfit(vector<int>& prices, int k) {
        // code here
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,(vector<vector<int>>(2,vector<int>(k+1,0))));
         
         
        for(int i=n-1;i>=0;i--){
               
               for(int buy=0;buy<2;buy++){
                     
                     for(int cap=1;cap<=k;cap++){ 
                            
                            if (buy){
                                  
                                  dp[i][buy][cap]=max(-prices[i]+dp[i+1][0][cap],dp[i+1][1][cap]);
                                  
                                  
                            }
                            else{
                                
                                   dp[i][buy][cap]=max(prices[i]+dp[i+1][1][cap-1],dp[i+1][0][cap]);
                            }
                         
                         
                     }
                     
                     
                     
               }
        }
        
        return dp[0][1][k];
        
        
    }
};


//{ Driver Code Starts.

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        istringstream iss(input);
        vector<int> arr;
        int num;

        // Read integers from the input string
        while (iss >> num) {
            arr.push_back(num);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << ob.maxProfit(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends