//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
             sort(arr,arr+n);
             int minDiff=INT_MAX; 
             int i=0;
             int j=n-1;
             while (i<j){
                  
                  int temp=arr[i]+arr[j];
                  
                  if (abs(temp)<abs(minDiff) || abs(temp)==abs(minDiff) && temp>minDiff ){
                       minDiff=temp;
                  }
                  if (temp<0) i++;
                  else j--;
             }
             return minDiff;
             
            
            //   sort(arr,arr+n);
            //   int maxi=INT_MAX;
            //   int ans=-1;
            //   for (int i=0;i<n-1;i++){
            //       int diff=arr[i]+arr[n-i-1];
            //       if (maxi>(0-diff)){
            //           ans=diff; 
            //           maxi=min(maxi,abs(0-diff));
            //       }
                
            //   }
              
            //   return ans;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends