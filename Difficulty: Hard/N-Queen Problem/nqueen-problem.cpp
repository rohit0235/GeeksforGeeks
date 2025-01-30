//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
      vector<vector<int>>ans;
  bool issafe(int row,int col,vector<vector<char>> &board , int n){
      int r=row,c=col;
      for(int j=0;j<c;j++){
          if(board[r][j]=='a'){
              return false;
          }
      }
      while(r>=0 && c>=0){
          if(board[r][c]=='a'){
              return false;
          }
          r--;
          c--;
      }
      r=row;
      c=col;
      while(c>=0 && r<n){
          if(board[r][c]=='a'){
              return false;
          }
          r++;
          c--;
      }
      return true;
  }
  void solve(int col,vector<vector<char>>&board , int n,vector<int>&v){
       if(col>=n){
           ans.push_back(v);
           return;
       }
       for(int row=0;row<n;row++){
           if(issafe(row,col,board,n)){
               board[row][col]='a';
               v.push_back(row+1);
               solve(col+1,board,n,v);
               board[row][col]='_';
               v.pop_back();
           }
       }
  }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<char>>board(n,vector<char>(n,'_'));
        vector<int>v;
        solve(0,board,n,v);
        return ans;
    }
    // bool issafe(int row,int col,vector<vector<int>>&board,int n){
         
    //      int x=row;
    //      int y=col;
         
    //      while (y>=0){
              
    //           if (board[x][y]==1){
    //                 return false;
    //           }
    //           y--;
    //      }
    //       x=row;
    //       y=col;
    //      while (x>=0 && y>=0){
              
    //           if (board[x][y]==1){
    //                 return false;
    //           }
    //           y--;
    //           x--;
    //      }
    //       x=row;
    //       y=col;
    //      while (x<n && y>=0){
              
    //           if (board[x][y]==1){
    //                 return false;
    //           }
    //           y--;
    //           x++;
    //      }
         
    //      return true;
         
             
                        
        
    // }
    // void solve (int col,vector<vector<int>>&ans, vector<vector<int>>&board,int n){
          
    //       // base case 
    //       if (col==n){
    //           vector<int>temp;
    //           for (int i=0;i<n;i++){
    //                 for (int j=0;j<n;j++){
    //                     temp.push_back(board[i][j]);
    //                 }
    //           }
    //           ans.push_back(temp);
    //           return ;
    //       }
          
    //       // perform one calculation to solve 1 problem 
          
    //       for (int row=0;row<n;row++){
               
               
    //             if (issafe(row,col,board,n)){
                      
    //                   board[row][col]=1;
    //                   solve (col+1,ans,board,n);
    //                   board[row][col]=0;
    //             }
                
    //       }
          
    // }
    // vector<vector<int>> nQueen(int n) {
       
    //   vector<vector<int>>board(n,vector<int>(n,0));
        
    //   vector<vector<int>>ans;
       
    //   solve(0,ans,board,n);
       
    //   return ans;
    // }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if (ans.size() == 0)
            cout << -1 << "\n";
        else {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++) {
                cout << "[";
                for (int u : ans[i])
                    cout << u << " ";
                cout << "] ";
            }
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends