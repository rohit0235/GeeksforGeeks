//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    int countTriplet(vector<int>& arr) {
           int n=arr.size();
         int count = 0;
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        for(int i=0; i<n; ++i) {
               
               int start=i+1;
               int end=n-1;
               
               while (start<end){
                    int sum=arr[end]+arr[start];
                    if (sum==arr[i]){
                        count++;
                        start++;
                         end--; 
                        
                    }
                    // 
                    else if (sum<arr[i]){
                            end--;
                    }
                    else{
                          start++;
                    }
                    
                    
               }
          
        }
        return count;
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
        int res = obj.countTriplet(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends