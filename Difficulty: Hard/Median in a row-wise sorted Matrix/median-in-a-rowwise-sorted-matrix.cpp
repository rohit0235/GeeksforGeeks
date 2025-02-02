//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int median(vector<vector<int>> &mat) {
            
            vector<int>check;
            int row=mat.size();
            int col=mat[0].size();
            
            for (int i=0;i<row;i++){
                
                for (int j=0;j<col;j++){
                    check.push_back(mat[i][j]);
                    
                }
            }
            
            sort(check.begin(),check.end());
            
            int total=row*col;
            
            if (total%2==1){
                return check[total/2];
            }
          
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                cin >> matrix[i][j];
        Solution obj;
        int ans = -1;
        ans = obj.median(matrix);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends