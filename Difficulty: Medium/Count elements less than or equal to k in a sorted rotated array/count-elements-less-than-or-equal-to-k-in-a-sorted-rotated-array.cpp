class Solution {
public:
    int countLessEqual(vector<int>& arr, int x) {
        int n = arr.size();
        if (n == 0) return 0;

        int second = n - 1;
        int l = 0;
        int r = n - 1;

        if (arr[0] > arr[n - 1]) {
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (mid < n - 1 && arr[mid] > arr[mid + 1]) {
                    second = mid;
                    break;
                }
                if (arr[mid] >= arr[l]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }

        auto countInRange = [&](int start, int end) {
            int low = start, high = end;
            int ans = 0;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] <= x) {
                    ans = (mid - start + 1);
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            return ans;
        };

        if (second == n - 1) {
            return countInRange(0, n - 1);
        }

        int countFirstPart = countInRange(0, second);
        int countSecondPart = countInRange(second + 1, n - 1);

        return countFirstPart + countSecondPart;
    }
};