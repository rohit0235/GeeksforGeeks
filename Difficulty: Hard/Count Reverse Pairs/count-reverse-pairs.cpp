class Solution {
public:
    int merge(vector<int>& arr, int l, int mid, int r) {
        int countr = 0;
        int i = l;
        int j = mid + 1;

        // Step 1: Count reverse pairs using two pointers
        int k = mid + 1;
        while (i <= mid) {
            while (k <= r && arr[i] > 2LL * arr[k]) {
                k++;
            }
            countr += (k - (mid + 1));
            i++;
        }

        // Step 2: Merge the two sorted halves
        vector<int> temp;
        i = l;
        j = mid + 1;
        
        while (i <= mid && j <= r) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
            }
        }
        
        while (i <= mid) {
            temp.push_back(arr[i++]);
        }
        
        while (j <= r) {
            temp.push_back(arr[j++]);
        }
        
        // Copy merged elements back to the original array
        i = l;
        int temp_idx = 0;
        while (i <= r) {
            arr[i++] = temp[temp_idx++];
        }

        return countr;
    }

    int solve(vector<int>& arr, int st, int end) {
        if (st >= end) return 0;
        
        int mid = st + (end - st) / 2;
        
        int left = solve(arr, st, mid);
        int right = solve(arr, mid + 1, end);
        int current = merge(arr, st, mid, end);
        
        return left + right + current;
    }

    int countRevPairs(vector<int>& arr) {
        int n = arr.size();
        return solve(arr, 0, n - 1);
    }
};