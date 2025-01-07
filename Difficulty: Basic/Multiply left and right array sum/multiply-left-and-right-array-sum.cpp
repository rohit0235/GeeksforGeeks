//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
class Solution {
  public:
    int multiply(vector<int> &arr) {

           int    leftsum=0;
           int    rightsum=0;
           int n =arr.size();
            for (int i=0;i<n/2;i++){
                if (arr[i]==0) return 0;
                leftsum+=arr[i];
                rightsum+=arr[n-i-1];
                
            }
            if (n%2!=0)     return leftsum*(rightsum+arr[n/2]); 
            return leftsum*rightsum; 
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.multiply(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends