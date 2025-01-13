//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void printTable(int n)
    {
        int multiplier=10;
        multiplier=multiplier*n;
        while(multiplier)
        {
            
             cout<<multiplier<<" ";
              multiplier-=n;
        }
        
        cout<<endl;
    }  
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Solution obj;
	    obj.printTable(n);
	    
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends