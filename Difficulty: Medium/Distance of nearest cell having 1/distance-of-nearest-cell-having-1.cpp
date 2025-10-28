class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
            int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> visited (n, vector<int> (m, 0));
        vector<vector<int>> distance(n, vector<int> (m, 0));
        queue<pair<pair<int, int>, int>> q;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    visited[i][j] = 1;
                    q.push({{i, j}, 0});
                } else {
                    visited[i][j] = 0;
                }
            }
        }
        
        while(!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dist = q.front().second;
            q.pop();
            distance[row][col] = dist;
            
            for (int i = 0; i < 4; i++) {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];
                
                if (nrow >= 0 && nrow < n && ncol >=0 && ncol < m
                    && visited[nrow][ncol] != 1 && grid[nrow][ncol] != 1) {
                    visited[nrow][ncol] = 1;
                    q.push({{nrow, ncol}, dist + 1});
                }
            }
        }
        return distance;
        
    }
};