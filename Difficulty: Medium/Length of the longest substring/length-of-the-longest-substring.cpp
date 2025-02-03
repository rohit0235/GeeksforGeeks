//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstring(string &s) {
            int n =s.size();
            int maxlength=0;
            unordered_map<char,int>mp;
             int i=0;

             int j;
            for ( j=0;j<n;j++){
                if (mp.find(s[j])!=mp.end() && mp[s[j]]>=i){
                       i=mp[s[j]]+1;
                }
                  
                 maxlength=max(maxlength,j-i+1);
                 mp[s[j]]=j;
            }
            
             return maxlength;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.longestUniqueSubstring(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends