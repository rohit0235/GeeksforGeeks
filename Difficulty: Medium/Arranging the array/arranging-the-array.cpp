//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
               int i=0;
               int j=n-1;
               vector<int>neg;
               vector<int>pos;
               
               for (int i=0;i<n;i++){
                     if (arr[i]<0) neg.push_back(arr[i]);
                     else pos.push_back(arr[i]);
               }
               
               vector<int>result;
               for (int i:neg) result.push_back(i);
               for (int i:pos) result.push_back(i);
               
                 for (int i=0;i<n;i++){
                      arr[i]=result[i];
                 }
              
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends