//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(vector<int>& arr) {
          stack<pair<int,int>>st;
           int n=arr.size();
           vector<int>ans;
           for (int i=0;i<n;i++){
                 
                 int span=1;
                 
                 while (!st.empty() && st.top().first<=arr[i]){
                      span=span+st.top().second;
                      st.pop();
                 }
                 
                 st.push(make_pair(arr[i],span));
                 ans.push_back(span);
               
           }
           
           return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.calculateSpan(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends