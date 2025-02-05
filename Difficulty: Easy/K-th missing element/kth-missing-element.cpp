//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int KthMissingElement(vector<int> &arr, int &k) {
        // Complete the function
        // if (k==0) return -1;
        int n =arr.size();
            int count=0;
        if (k==0) {
           for (int i=0;i<n-1;i++){
               
               int diff=arr[i+1]-arr[i]-1;
               if (diff>0){
                     
                     count+=diff;
               }
               
               if (count>k){
                    return  k-(count-diff)+arr[i];
               }
        }
        return -1;
              
        }
         count=0;
        for (int i=0;i<n-1;i++){
               
               int diff=arr[i+1]-arr[i]-1;
               if (diff>0){
                     
                     count+=diff;
               }
               
               if (count>=k){
                    return  k-(count-diff)+arr[i];
               }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.KthMissingElement(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends