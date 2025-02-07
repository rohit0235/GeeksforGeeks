//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
             
             int count=0;
             unordered_map<int,int>mp;
              for (int i:arr){
                   mp[i]++;
              }
              for (int i=0;i<N;i++){
                   
                   if (mp.find(1)!=mp.end()){
                       if (mp[1]>1) return N;
                       else return N-1;
                   }
                   
             for(int j=1;j<=sqrt(arr[i]);j++){
                        
                         if (arr[i]%j==0){
                           if (mp.find(j)!=mp.end() || mp.find(arr[i]/j)!=mp.end()){
                             
                             if (arr[i]/j==arr[i]){
                                     
                                     if (mp[arr[i]]>1){
                                         count++;
                                            break;
                                         
                                     }
                                }
                                else {
                                      count++;
                                     break;
                                }
                           
                           }
                           
                        }
                   }
                   
                   
                //   for (int j=0;j<N;j++){
                        
                //         if (j!=i) {
                            
                //             if (arr[i]%arr[j]==0){
                //                   count++;  
                //                   break;
                //             }
                     
                //         }
                        
                //   }
              }
              return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends