//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        //   if (arr[0]==9) arr.resize(N+1);
          int carry=1;
         
          for (int i=N-1;i>=0;i--){
               
               if (arr[i]==9 && carry==1){
                   arr[i]=0;
                   carry=1;
               }
               else{
                   arr[i]+=carry;
                   carry=0;
               }
             
          }
          
         
          if (carry==1){
              arr.resize(N+1);  arr[0]=1;
          }
        
          return arr;
          
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends