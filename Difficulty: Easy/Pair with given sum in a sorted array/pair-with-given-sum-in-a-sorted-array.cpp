//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
      
          int n =arr.size();
          
          int count=0;
          int i=0;
          int j=n-1;
          
          while (i<j){
              int sum=arr[i]+arr[j];
              if (sum<target){
                  i++;
              }
              if (sum>target){
                  j--;
              }
              
              if (sum==target){
                   
                   count++;
                   
                   int checkforothers=i+1;
                   while (checkforothers<j && arr[checkforothers]==arr[checkforothers-1]){
                        count++;
                        checkforothers++;
                   }
                   
                   j--;
                   
              }
              
              
              
          }
          return count;
          
        //   unordered_map<int,int>mp;
        //               int count=0;
                      
        //   for (int i:arr){
        //      if (mp.find(target-i)!=mp.end()){
        //         count+=mp[target-i];
        //      }
        //       mp[i]++;
        //     }
        //           return count;
       
      
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends