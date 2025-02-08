//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// 1 2 3 4
// 1 2 6 24
class Solution {
  public:
    long long countSubArrayProductLessThanK( vector<int>& arr, int n,
                                            long long k) {
            //  sort(arr.begin(),arr.end());
      
              int i=0;

             long long count=0;
              long long prod=1;
              
              for (int j=0;j<n;j++){
                    prod*=arr[j];
                    
                    while (i<=j && prod>=k){
                         prod/=arr[i];
                         i++;
                    }
                    count+=j-i+1;
              }
              return count;
            
            
                                        
      }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends