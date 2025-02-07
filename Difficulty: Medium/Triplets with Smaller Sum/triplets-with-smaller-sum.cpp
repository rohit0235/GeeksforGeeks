//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
           
           sort(arr,arr+n);
           long long count=0;
           for (long long i=0;i<n-2;i++){
                
                  long long j=i+1;
                  long long k=n-1;
                  
                  while (j<k){
                        
                        long long sums=arr[i]+arr[j]+arr[k];
                         
                  
                        if (sums<sum){
                           count+=(k-j);
                            j++;
                        }
                        
                        else{
                            k--;
                        }
                  }
           } 
           
           return count;
        
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long sum;
        cin >> n >> sum;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countTriplets(n, sum, arr);

        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends