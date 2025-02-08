//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        
        int currentsum=0;
        int maxsum=INT_MIN;
        int n=arr.size();
       int startindex=0;
        pair<int,int>p;
        for (int i=0;i<n;i++){
            
            
            if (arr[i]<0 ){
                  if (maxsum<currentsum){
                      maxsum=currentsum;
                      p={startindex,i-1};
                  }
                  
                  currentsum=0;
                  startindex=i+1;
                 
            }
            
           else  currentsum+=arr[i];
            
        }
         if (maxsum<currentsum){
                  maxsum=currentsum;
                  p={startindex,n-1};
         }
         
         vector<int>ans;
         for (int i=p.first;i<=p.second;i++){
             ans.push_back(arr[i]);
         }
         if (ans.size()==0){
                  return {-1};
         }
         return ans;
         
    }
};

//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from the input string

        Solution obj;
        vector<int> result = obj.findSubarray(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no non-negative subarray is found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << "\n~\n"; // Ensure a new line after each test case output
    }

    return 0;
}

// } Driver Code Ends