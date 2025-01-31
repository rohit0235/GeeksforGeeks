//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a solved Sudoku.
    bool  safe(int row,int column,int number,vector<vector<int>> &mat){
            
            for (int i=0;i<=8;i++){
                  if (mat[i][column]==number){
                       return false;
                  }
            }
            for (int i=0;i<=8;i++){
                  if (mat[row][i]==number){
                       return false;
                  }
            }
            int startRow = row - row % 3, startCol = column - column % 3;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (mat[startRow + i][startCol + j] == number) {
                        return false;
                    }
                }
            }
            
            return true;
    }
    bool sudoku(vector<vector<int>> &mat){
         
        int n=mat.size();
        
        for (int i=0;i<n;i++){
             
             for (int j=0;j<n;j++){
                  
                  if (mat[i][j]==0){ 
                       
                      for (int k=1;k<=9;k++){
                           if (safe(i,j,k,mat)){
                                 mat[i][j]=k;
                                 if (sudoku(mat)) return true; 
                                 mat[i][j]=0;
                           }
                        
                      }
                      
                      return false; 
                      
                  }
                  
                  
                  
             }
        }
        return true;
        
       
    }
    void solveSudoku(vector<vector<int>> &mat) {
        sudoku(mat);
        
    
    }
};

//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<vector<int>> grid;
        for (int i = 0; i < 9; i++) {
            vector<int> v = inputLine();
            grid.push_back(v);
        }

        Solution ob;

        ob.solveSudoku(grid);

        for (auto v : grid) {
            for (auto elem : v) {
                cout << elem << " ";
            }
            cout << endl;
        }

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends