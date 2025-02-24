//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(vector<int>& arr) {
            
           // 
           stack<int>s;
           int n=arr.size();
            vector<int>ans(arr.size(),0);
           for (int i=0;i<n;i++){
                   
                   while (!s.empty() && arr[s.top()]<=arr[i]){
                       s.pop();
                   }  
                   
                   if (s.empty()){
                       ans[i]=i+1;
                   }
                   else{
                       ans[i]=i-s.top();
                   }
                   
                   s.push(i);
                      
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