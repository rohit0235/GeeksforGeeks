//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
           
           int n =arr.size();
           int sum=0;
      
           int i=0;
           while (i<n && sum<target){
              sum+=arr[i];
              i++;
           }
           
           if (sum==target) return {1,i};
           
           int j=0;
           while (i<n+1 && j<n ){

                sum-=arr[j];
                j++;
                // int startindex=i;
          
                
                while (i<n && sum<target){
                    sum+=arr[i];
                
                    i++;
                }
                   if (sum==target){
                    return {j+1,i};
                }
                // cout<<j+1<<" "<<i<<" ";
              
                // i++;
                
                
               
           }
           
           return {-1};
           
           
           
           
           
           
           
           
           
           
        //   int i=0;
        //   while (i<n &&sum<target){
        //       sum+=arr[i];
        //       i++;
        //   }
           
        //   if (i==n && sum!=target) return {-1};
        //   if (sum==target) return {1,i+1};
        //   int startindex=0;
        //   for (int j=i;j<n;j++){
               
        //       sum+=arr[j];
        //       if (sum==target) return {startindex+1,j+1};
        //       if (sum>target) {sum-=arr[n-i-1]; startindex++;}
        //   }
           
        //   return {-1};
           
           
           
           
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends