//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        
        int n=arr.size();
        vector<int>rightmax(n,0);
        rightmax[n-1]=arr[n-1];
        for (int i=n-2;i>=0;i--){
            rightmax[i]=max(arr[i],rightmax[i+1]);
            
        }
        
        // for (int i:rightmax) cout<<i<<" ";
        // cout<<endl;
        int ans=0;
        int leftmax=arr[0];
        for (int i=1;i<n-1;i++){
            // cout<<leftmax<<" "<<rightmax[i+1]<<endl;
            int check=min(leftmax,rightmax[i+1]);
            leftmax=max(leftmax,arr[i]);
             if (check<=arr[i]) continue;
            ans+=abs(check-arr[i]);
            
        }
        
        return ans;
        
        
        
        //  3 2  3  3
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends