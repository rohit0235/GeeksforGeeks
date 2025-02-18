//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int maxConsecutiveCount(vector<int> &arr) {
          int maxi=0;
          int count=1;
          int n=arr.size();
          for (int i=1;i<n;i++){
              
              if (arr[i]!=arr[i-1]) {
                   maxi=max(maxi,count);
                   count=1;
              }
              else{
                  count++;
              }
          }
             maxi=max(maxi,count);
          return maxi;
          
          
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
        int ans = ob.maxConsecutiveCount(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends