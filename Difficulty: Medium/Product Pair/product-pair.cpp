//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        // code hereunordered_map<long long, long long> mp;
    unordered_map<long long, long long> mp;
    int n = arr.size();
    
    if (n == 1) return false;
    
    // Store frequency of each element
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    
    // Special case: x = 0
    if (x == 0) {
        if (mp[0] > 1) return true;  // At least two zeros exist
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0 && mp[0] > 0) return true; // At least one zero and another number exist
        }
        return false;
    }
    
    // Checking if product pair exists
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) continue; // Avoid division by zero
        
        if (x % arr[i] == 0) { // Ensure x is divisible by arr[i]
            long long result = x / arr[i];
            
            if (mp.find(result) != mp.end()) {
                // If result is same as arr[i], ensure there's another occurrence
                if (result != arr[i] || mp[result] > 1) {
                    return true;
                }
            }
        }
    }
    
    return false;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        long long x;
        cin >> x;
        cin.ignore(); // To discard any leftover newline characters

        Solution ob;
        auto ans = ob.isProduct(arr, x);
        cout << (ans ? "true\n" : "false\n");
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends