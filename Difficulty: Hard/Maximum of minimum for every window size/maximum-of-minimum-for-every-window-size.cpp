//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
  int n = arr.size();
    vector<int> ans(n, 0);
    vector<int> prev(n, -1);
    vector<int> next(n, n); // Initialize with 'n' for valid subtraction

    stack<int> st;

    // Find previous smaller element indices
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            prev[i] = st.top();
        }
        st.push(i);
    }

    while (!st.empty()) st.pop();

    // Find next smaller element indices
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            next[i] = st.top();
        }
        st.push(i);
    }

    // Compute the answer for each window size
    for (int i = 0; i < n; i++) {
        int size = next[i] - prev[i] - 1; // Corrected window size
        ans[size - 1] = max(ans[size - 1], arr[i]); // Store max of min
    }

    // Fill remaining elements
    for (int i = n - 2; i >= 0; i--) {
        ans[i] = max(ans[i], ans[i + 1]); // Maintain non-increasing order
    }

    return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        vector<int> res = ob.maxOfMins(arr);
        for (int i : res)
            cout << i << " ";
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends