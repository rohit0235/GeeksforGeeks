//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    bool check(int num){
          
          while (num>0){
               
               int he=num%10;
               
               if (he!=1 && he!=2 &&  he!=3){
                    return false;
               }
               
               num=num/10;
          }
          
          return true;
    }
    vector<int> filterByDigits(const vector<int>& arr) {
                  
           
           vector<int>ans;
           
           for (int i:arr){
                
                if (check(i)) ans.push_back(i);
           }
           
           return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> result = ob.filterByDigits(arr);
        for (int x : result) {
            cout << x << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends