//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
              // g-0     e-1  e-1   
             
              
               int n=s.length();
                
               int l=0;
               int r=0;
               int maxi=0;
               vector<int>mp(256,-1);
               while (r<n){
                   
                    if (mp[s[r]]!=-1){
                        l=max(mp[s[r]]+1,l);
                    }
                    maxi=max(maxi,r-l+1);
                    mp[s[r]]=r;
                    r++;
                   
               }
                
                return maxi;
               
              
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends