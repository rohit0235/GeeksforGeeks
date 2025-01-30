//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        
    
    int n =arr.size();
    if (n<k) return {0};
    vector<int>result(n-k+1,0);
    queue<int>q;

    
    for (int i=0;i<k;i++){
        
        if (arr[i]<0) q.push(arr[i]);
        
    }
    if (!q.empty()) result[0]=q.front();
    // int negative=q.front();
    for (int i=k;i<n;i++){
         
         if (arr[i]<0) {
             q.push(arr[i]);
         }
         
         if (!q.empty() && arr[i-k]==q.front()){
             q.pop();
         }
         if (q.empty())   result[i-k+1]=0;
        else  result[i-k+1]=q.front();
    }
    
    return result;
        
        
        
        
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends