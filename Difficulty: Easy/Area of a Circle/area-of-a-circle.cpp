//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    double calculateArea(double r) {
      return M_PI*r*r;
    }
};

//{ Driver Code Starts.

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double number;
        cin >> number;

        Solution ob;
        double ans = ob.calculateArea(number);
        cout << ans << endl;
        // cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends