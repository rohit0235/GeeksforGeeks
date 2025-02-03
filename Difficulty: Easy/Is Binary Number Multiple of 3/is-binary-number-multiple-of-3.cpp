//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool isDivisible(string& s) {

            int n=s.size();
            int even=0;
            int odd=0;
            for (int i=0;i<n;i++){
                if (s[i]=='1'){
                   if (i%2) odd++;
                   else even++;
              
                }
            }
            return (odd-even)%3==0;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        if (ob.isDivisible(s))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends