//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &A) {
          int len=A.size();
           int left=0;

    int right=len-1;

    int ans =0;

    while(left<right){

        int tempwater=min(A[left],A[right])*(right-left);

        ans=max(ans,tempwater);

        if(A[left]<A[right])left++;

        else{

            right--;

        }

    }
         return ans;
         
         
         
         
         
         // o(n^2)
        //  for(int i=0;i<n;i++){
             
        //      for (int j=i+1;j<n;j++){
                 
        //          int length=j-i;
        //          int contain=min(arr[j],arr[i]);
        //          int ans=length*contain;
        //          maxi=max(ans,maxi);
        //      }
        //  }
          
         
          
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