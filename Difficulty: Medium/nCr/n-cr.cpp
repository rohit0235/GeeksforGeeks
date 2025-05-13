//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int nCr(int n, int r) {
        // code here
             
             if (r==1) return n;
             if (r==0) return 1;
             
             if(n<r) return 0;
             if (n==r) return 1;
             if (n-r<r) r=n-r;
             long long number =n;
             long long result=1;
             for(long long i=1;i<=r;i++){
                    
                    result=((long long ) result*(number))/i;
                    number =number -1;
             }
             
             return result;
             
             
             
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends