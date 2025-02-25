//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     
     
     
     
    int getMaxArea(vector<int> &arr) {
             
            int n=arr.size();
            stack<int>st;
            vector<int>prev(n,-1) , ans(n,n);
            int maxarea=0;
            
            for (int i=0;i<n;i++){
                     
                while (!st.empty() && arr[st.top()]>=arr[i]){
                    // int index=st.top();
                       ans[st.top()]=i;
                       st.pop();
                       
                }     
                
                if (!st.empty()){
                  prev[i]=st.top();
                }
                
                st.push(i);
            }
            
            for (int i=0;i<n;i++){
                  
                  maxarea=max(maxarea,(ans[i]-prev[i]-1)*arr[i]);
                  
            }
            return maxarea;
            // int maxarea=0;
            // for (int i=0;i<n;i++){
            //      int mini=INT_MAX;
            //      for (int j=i;j<n;j++){
            //           mini=min(mini,arr[j]);
            //           int area=mini*(j-i+1);
            //           maxarea=max(maxarea,area);
            //      }
            // }
             
            // return maxarea;
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
        int res = obj.getMaxArea(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends