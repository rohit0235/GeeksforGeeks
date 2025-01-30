//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    // bool ispalindrome(string &c){
    //      int n=c.size();
    //      for(int i=0;i<n/2;i++){
    //           if (c[i]!=c[n-i-1]){
    //               return false;
    //           }
    //      }
         
    //      return true;
    // }
    // void  solve (int i,string &s,int n,string temp,string &result){
          
    //       if (i>=n){
    //           if (ispalindrome(temp) && temp.size()>result.size()){
    //                 result=temp;
    //           }
    //           return ;
    //       }
          
        
          
    //       solve (i+1,s,n,temp+s[i],result);
    //       solve (i+1,s,n,temp,result);
          
         
    // }
    int t[1001][1001];
    // bool ispalindrome(string &check){
         
    //      int i=0;
    //      int j=check.size()-1;
    //      while (i<j){
    //          if (check[i]!=check[j]){
    //               return false;
    //          }
    //          i++;
    //          j--;
    //      }
    //      return true;
    // }
    
    bool solve (int i,int j,string &check){
        
        if (i>=j) return 1;
        
        if (t[i][j]!=-1) return t[i][j];
        if (check[i]==check[j]) return t[i][j]=solve (i+1,j-1,check);
        
        return t[i][j]=0;
        
    }
    string longestPalindrome(string s) {
          int n=s.size();
          int maxlen=0;
          int start=0;
          memset(t,-1,sizeof(t));
          for (int i=0;i<n;i++){
               
               for (int j=i;j<n;j++){
                    // string find=s.substr(i,j-i+1);
                    if (solve(i,j,s)==true){
                          
                       if (maxlen<j-i+1){
                            maxlen=j-i+1;
                            start=i;
                       }    
                         
                    }
               }
          }
          
          return s.substr(start,maxlen);
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends