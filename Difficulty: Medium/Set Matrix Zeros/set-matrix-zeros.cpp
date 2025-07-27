class Solution {
  public:
void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    p.push_back({i,j});
                }
            }
        }    
        
        for(auto it:p){
            int r=it.first;
            int c=it.second;
            
            for(int i=0;i<n;i++){
                mat[i][c]=0;
            }
            for(int j=0;j<m;j++){
                mat[r][j]=0;
            }
        }
    }
};