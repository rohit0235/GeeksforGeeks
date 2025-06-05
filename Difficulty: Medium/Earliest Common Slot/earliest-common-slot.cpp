#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> commonSlot(vector<vector<int>>& a, vector<vector<int>>& b, int d) {
        // Iterate through all intervals in a and b to find overlapping intervals
        for (const auto& intervalA : a) {
            for (const auto& intervalB : b) {
                // Find the overlapping interval
                int start = max(intervalA[0], intervalB[0]);
                int end = min(intervalA[1], intervalB[1]);
                // Check if the overlapping duration is at least d
                if (end - start >= d) {
                    return {start, start + d};
                }
            }
        }
        return {};
    }
};