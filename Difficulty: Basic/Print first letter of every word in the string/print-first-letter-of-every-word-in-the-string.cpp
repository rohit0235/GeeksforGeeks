//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	      string i="";
	      i+=S[0];
	      
	      for (int j=1;j<S.size();j++){
	          if (S[j]==' '){
	                 i+=S[j+1];  
	          }
	      }
	     return i;
	}
};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	
cout << "~" << "\n";
}

    return 0;
} 

// } Driver Code Ends