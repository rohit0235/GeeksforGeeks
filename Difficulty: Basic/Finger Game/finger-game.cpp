//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int fingerCount(int N)
    {
        if (N<=5) return N;
        N-=5;
        int rem=N%4;
        int cal=N/4;
        if (cal%2) return 1+rem;
        else return 5-rem;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
      
        Solution ob;
        int ans  = ob.fingerCount(N);
        cout << ans << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends