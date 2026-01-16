#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMen(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int, int>> intervals;

        // 1. Create valid intervals
        for (int i = 0; i < n; i++) {
            if (arr[i] != -1) {
                intervals.push_back({i - arr[i], i + arr[i]});
            }
        }

        // 2. Sort intervals by starting point
        sort(intervals.begin(), intervals.end());

        int count = 0;
        int currentEnd = 0;  // Rightmost point covered
        int i = 0;
        int numIntervals = intervals.size();

        // 3. Greedy interval coverage
        while (currentEnd < n) {
            int maxReach = -1;

            // Find interval starting within range and extending farthest
            while (i < numIntervals && intervals[i].first <= currentEnd) {
                maxReach = max(maxReach, intervals[i].second);
                i++;
            }

            // If no interval can extend coverage
            if (maxReach < currentEnd || maxReach == -1) {
                return -1;
            }

            count++;
            currentEnd = maxReach + 1;

            if (currentEnd >= n) return count;
        }

        return count;
    }
};
