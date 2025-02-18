//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool checkValidity(int a, int b, int c) {
         
         if ((a+b)<=c) return false;
         if ((c+b)<=a) return false;
         if ((a+c)<=b) return false;
         
         return true;
         
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution obj;
        if (obj.checkValidity(a, b, c))
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends