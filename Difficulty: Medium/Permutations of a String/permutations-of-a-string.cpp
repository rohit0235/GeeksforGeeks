//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     
     void permutation(int  index,vector<string>&ans,string &s){
           
           if (index==s.size()){
                ans.push_back(s);
           }         
           
           unordered_set<char>seen;
           
           for (int i=index;i<s.size();i++){
                 
                 if (seen.find(s[i])!=seen.end()) continue;
                 
                 seen.insert(s[i]);
                 
                 swap(s[i],s[index]);
                 
                permutation(index+1,ans,s);
                 
                 swap(s[i],s[index]);
                 
                 
           }
     }
    vector<string> findPermutation(string &s) {
        
        vector<string>ans;
        permutation(0,ans,s);
      return ans;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends