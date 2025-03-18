//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int n;
    
    bool issubsetsum(vector<int>& arr, int sum, int current, int index, vector<vector<int>>& dp) {
        if (current == sum) return true;
        if (index >= n || current > sum) return false;
        
        if (dp[index][current] != -1) return dp[index][current];
        
        bool include = issubsetsum(arr, sum, current + arr[index], index + 1, dp);
        bool exclude = issubsetsum(arr, sum, current, index + 1, dp);
        
        return dp[index][current] = include || exclude;
    }

    bool equalPartition(vector<int>& arr) {
        int totalSum = accumulate(arr.begin(), arr.end(), 0);
        if (totalSum % 2 != 0) return false;

        int target = totalSum / 2;
        n = arr.size();

        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));

        return issubsetsum(arr, target, 0, 0, dp);
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
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends