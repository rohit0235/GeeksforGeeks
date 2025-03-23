//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
           int n=arr.size();
           
           int pivot=-1;
           
           for(int i=n-2;i>=0;i--){
                   if (arr[i]<arr[i+1]) {
                       pivot=i;
                       break;
                   }
           }
           
           if (pivot==-1){
                sort(arr.begin(),arr.end());
                return ;
           }
           
           int firstg=-1;
           for(int i=n-1;i>=0;i--){
                 
                 if (arr[i]>arr[pivot]){
                      firstg=i;
                      break;
                 }

           }
        //   cout<<pivot<<firstg<<" "<<endl;;
           
           swap(arr[pivot],arr[firstg]);
           
          sort(arr.begin()+pivot+1,arr.end());
           
           return ;
           
           
           
           
          
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends