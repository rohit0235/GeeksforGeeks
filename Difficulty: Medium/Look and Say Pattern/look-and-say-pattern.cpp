//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string countAndSay(int n) {
        // code here
             
            if (n == 1) return "1";

        string check = "1";  // Starting from "1"
        for (int round = 2; round <= n; round++) {
            string news = "";
            int count = 1;

            for (int i = 1; i < check.size(); i++) {
                if (check[i] == check[i - 1]) {
                    count++;
                } else {
                    news += to_string(count);
                    news += check[i - 1];
                    count = 1;
                }
            }

            // Add the last group
            news += to_string(count);
            news += check.back();

            check = news;
        }

        return check;
          
         
         
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.countAndSay(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends