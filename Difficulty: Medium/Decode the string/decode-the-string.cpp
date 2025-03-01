//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
         
           stack<int> num;
        stack<string> st;
        int n = s.size();
        string result = "";
        
        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                int numVal = 0;
                // Accumulate full number
                while (i < n && isdigit(s[i])) {
                    numVal = numVal * 10 + (s[i] - '0');
                    i++;
                }
                num.push(numVal);
                i--;  // Adjust because the for loop will increment
            } else if (s[i] == '[') {
                st.push("[");
            } else if (s[i] == ']') {
                string temp = "";
                while (!st.empty() && st.top() != "[") {
                    temp = st.top() + temp;  // Prepend to correct the order
                    st.pop();
                }
                // Remove the '[' from stack
                if (!st.empty()) st.pop();
                
                // Get the repeat count
                int times = 0;
                if (!num.empty()) {
                    times = num.top();
                    num.pop();
                }
                
                string repeated = "";
                for (int j = 0; j < times; j++) {
                    repeated += temp;
                }
                st.push(repeated);
            } else {
                // For letters, simply push as string
                st.push(string(1, s[i]));
            }
        }
        
        // Combine all elements in the stack to form the final result
        while (!st.empty()) {
            result = st.top() + result; // prepend to maintain order
            st.pop();
        }
        
        return result;
         
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
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends