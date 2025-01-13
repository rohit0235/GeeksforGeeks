//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int differenceSeries(int N)
    {
    
        // 3 10 21 36 55 78 
        // 7 11 15 19
        // 2*7+(number-1)*4
        if (N==1) return 3;
        int number=N-1;
        long long sum= (number*(10+4*number))/2;
        return 3+sum;
        
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
        int ans = ob.differenceSeries(N);
        cout << ans << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends