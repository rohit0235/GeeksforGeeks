//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
            // if (n==1) return false;
            stack<char>st;
             unordered_map<char,char>mp = {
              {'}', '{'},
              {')', '('},
              {']', '['}
            };
            st.push('-1');
            int n=s.size();
            for (int i=0;i<n;i++){
                  
                  if (s[i]=='(' || s[i]=='[' || s[i]=='{'){
                      st.push(s[i]);
                  }
                  
                  else if (mp[s[i]]!=st.top()){
                         return false;
                  }
                  
                  else{
                      st.pop();
                  }
                   
            }
            
            return st.size()==1;
            
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends