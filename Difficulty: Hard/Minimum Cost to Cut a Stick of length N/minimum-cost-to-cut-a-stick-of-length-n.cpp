#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
private:
    // Declare DP table for memoization
    vector<vector<int>> dp;

public:
    int solve(vector<int>& cuts, int l, int r) {
        
        // Correct Base Case: Cost is 0 if no cuts exist between indices l and r
        if (r - l <= 1) {
            return 0;
        }

        // Check if result is already computed (Memoization)
        if (dp[l][r] != -1) {
            return dp[l][r];
        }

        int mini = INT_MAX;
        
        // Try every possible index 'idx' as the *last* cut for the segment (l, r)
        for (int idx = l + 1; idx <= r - 1; idx++) {
            
            // Cost = (Length of current segment) + (Cost of left sub-problem) + (Cost of right sub-problem)
            // The length of the current segment is the cost of the first cut (cuts[r] - cuts[l])
            int cost = (cuts[r] - cuts[l]) +
                       solve(cuts, l, idx) +
                       solve(cuts, idx, r);
            
            mini = min(cost, mini);
        }

        // Store and return the result
        return dp[l][r] = mini;
    }

    int minCutCost(int n, vector<int>& cuts) {
        
        // **FIX 3: Preprocessing**
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());

        int m = cuts.size();
        
        // Initialize DP table (m x m)
        dp.assign(m, vector<int>(m, -1));

        // Call solve on the entire stick segment (from index 0 to m-1)
        // Note: The 'n' parameter is no longer needed in solve() as the length is cuts[r] - cuts[l]
        return solve(cuts, 0, m - 1);
    }
};