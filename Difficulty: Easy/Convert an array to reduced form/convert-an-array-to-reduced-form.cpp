//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    
	       int temp[n];
	       copy(arr,arr+n,temp);
	       sort(arr,arr+n);
	       
	       unordered_map<int,int>mp;
	       for (int i=0;i<n;i++){
	             mp[arr[i]]=i;
	       }
	       
	       for (int i=0;i<n;i++){
	            arr[i]=mp[temp[i]];
	       }
	       
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends