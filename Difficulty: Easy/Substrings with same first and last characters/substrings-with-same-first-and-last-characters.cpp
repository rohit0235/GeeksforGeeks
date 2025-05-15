//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countSubstring(string &s) {
        // code here
        
            int n =s.size();
            vector<int>ch(26,0);
            
            for(auto i:s){
                 int index= i-'a';
                 ch[index]++;
            }
             
            int answer=0;
            for(auto i:ch){
                  
                
                       
                       answer+= ((i)*(i+1))/2;
                 
                  
            }
            
            return answer;
             
             
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.countSubstring(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends