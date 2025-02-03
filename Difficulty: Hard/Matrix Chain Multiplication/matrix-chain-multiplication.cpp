//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
 int solve(vector<int> &arr, int i, int j, vector<vector<int>> &dp) {
    if (i == j) return 0;
    if (dp[i][j] != -1) return dp[i][j];

    long long res = LLONG_MAX; // To handle large values

    for (int k = i; k < j; k++) {
        long long left = solve(arr, i, k, dp);
        long long right = solve(arr, k + 1, j, dp);
        long long cost = left + right + 1LL * arr[i - 1] * arr[k] * arr[j]; // 1LL for safe multiplication

        res = min(res, cost);
    }

    dp[i][j] = res;
    return dp[i][j];
}

int matrixMultiplication(vector<int> &arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    return solve(arr, 1, n - 1, dp);
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.matrixMultiplication(a) << endl << "~\n";
    }

    return 0;
}

// } Driver Code Ends