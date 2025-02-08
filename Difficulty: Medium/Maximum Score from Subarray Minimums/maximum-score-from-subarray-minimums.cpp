//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
          int n=arr.size();
          int first=-1;
          int second=-1;
          int maxsum=0;
          
          for (int i=0;i<n-1;i++){
                
                maxsum=max(maxsum,arr[i]+arr[i+1]);
          }
        //   for (int i=0;i<n;i++){
        //     //   cout<<first<<" "<<second<<" "<<endl;
        //       maxsum=max(maxsum,first+second);
        //       if (first==-1){
        //           first=arr[i];
        //       }
              
        //       else if (second==-1){ 
        //           if (first>arr[i]){
        //               second=first;
        //               first=arr[i];
                    
                      
        //           }
        //           else{
        //               second=arr[i];
        //           }
                   
        //       }
        //       else{
                  
        //         //   if (arr[i]<second){
                      
        //         //       if (arr[i]<first){
                          
        //         //           second=first;
        //         //             first=arr[i];
        //         //       }
                      
        //         //       else{
        //         //           second=arr[i];
        //         //       }
        //         //   }
                  
        //         //   int sum=first+second;
        //         //     maxsum=max(maxsum,sum);
        //         //   if (maxsum>sum){
        //         //       first=-1;
        //         //       second=-1;
        //         //   }
                  
                

        //       }
        //   }
        //   maxsum=max(maxsum,first+second);
          return maxsum;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends