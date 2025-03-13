//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity.
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        
        // 2 10 15 15.
        // 0.25  0.4  3
        // 0.25  0.4  3
        
        //   0.2 4.5 0.67 2.25 0.44 0.67 
        
        // priority_queue<pair<double,pair<int,int>>>pq;
        // int n =val.size();
        // for(int i=0;i<n;i++){
        //     double ratio=(double)val[i]/wt[i];
        //     pq.push({ratio,{val[i],wt[i]}});
        // }
        
        // int currentw=0;
        // int totalval=0;
        
        // while (!pq.empty() && currentw<=W){
           
        //       currentw+=pq.top().second.second;
               
        //       if (currentw<=W){
        //              totalval+=pq.top().second.first;
        //       }
               
        //       else{
        //           currentw-=pq.top().second.second;
        //       }
               
        //       pq.pop();
        // }
        
        // return totalval;
         int n = val.size();
    vector<int> dp(W + 1, 0);

    for (int i = 0; i < n; i++) {
        for (int w = W; w >= wt[i]; w--) {
            dp[w] = max(dp[w], val[i] + dp[w - wt[i]]);
        }
    }

    return dp[W];
        
        
    }
};


//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapsack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends