//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    
cout << "~" << "\n";
}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
          
          int n=S1.size(); int m=S2.size();
          int i=0;
          int j=0;
          string ans="";
          while (i<n && j<m){
                  
                  ans+=S1[i];
                  ans+=S2[j];
                  i++; j++;
                   
          }
          
         while (i<n){
                 ans+=S1[i];
                 i++;
          }
         while (j<m){
                 ans+=S2[j];
                 j++;
          }
          
          return ans;
          
          
          
}