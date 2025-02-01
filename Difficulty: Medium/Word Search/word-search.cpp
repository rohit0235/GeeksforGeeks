//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool dfs(vector<vector<char>>& mat, int x, int y, string& word, int index, vector<vector<bool>>& visited) {
    if (index == word.size()) return true;  // All characters matched

    int n = mat.size();
    int m = mat[0].size();

    if (x < 0 || y < 0 || x >= n || y >= m || mat[x][y] != word[index] || visited[x][y]) {
        return false;
    }

    visited[x][y] = true;

    // Directions: up, right, down, left
    vector<int> dx = {-1, 0, 1, 0};
    vector<int> dy = {0, 1, 0, -1};

    for (int dir = 0; dir < 4; dir++) {
        int newX = x + dx[dir];
        int newY = y + dy[dir];

        if (dfs(mat, newX, newY, word, index + 1, visited)) {
            return true;
        }
    }

    visited[x][y] = false;  // Backtrack
    return false;
}

bool isWordExist(vector<vector<char>>& mat, string& word) {
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == word[0]) {
                if (dfs(mat, i, j, word, 0, visited)) {
                    return true;
                }
            }
        }
    }
    return false;
}

};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends