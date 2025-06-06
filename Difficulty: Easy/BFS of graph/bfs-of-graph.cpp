class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
                  vector<int>result;
        unordered_map<int,bool>visited;
        
        result.push_back(0);
        
        
        queue<int>q;
        q.push(0);
        visited[0]=1;
        while (!q.empty()){
             
             int front =q.front();
             q.pop();
             for(int v:adj[front]){
               
               if (!visited[v]){          
                  q.push(v);
                  result.push_back(v);
                  visited[v]=1;
                  
                  
               }
             }
             
        }
        
        
        return result;
    }
    
};
    
    
    
    
    
    