class Solution {
  public:
    int minDifference(vector<string> &arr) {
        int n = arr.size();
        if (n < 2) {
            return 0;
        }

        vector<int> timesInMinutes(n);
        for (int i = 0; i < n; i++) {
            int hours = stoi(arr[i].substr(0, 2));
            int minutes = stoi(arr[i].substr(3, 2));
            int seconds = stoi(arr[i].substr(6, 2));
            timesInMinutes[i] = hours * 3600 + minutes * 60 + seconds;
        }

        sort(timesInMinutes.begin(), timesInMinutes.end());

        int minidiff = INT_MAX;

        for (int i = 1; i < n; i++) {
            minidiff = min(minidiff, timesInMinutes[i] - timesInMinutes[i - 1]);
        }

        int lastToFirstDiff = (timesInMinutes[0] + 24 * 3600) - timesInMinutes[n - 1];
        minidiff = min(minidiff, lastToFirstDiff);

        return minidiff;
    }
};