// User function Template for C++

class Solution {
  public:
  
  void bfs(int i ,vector<bool>&visited ,vector<vector<int>>& adj , int V){
              queue<int>q;
                 
                 q.push(i);
                 visited[i]=1;
                 
                 while (!q.empty()){
                   
                   int front = q.front();
                   q.pop();
        
                     // Iterate through all possible nodes to find neighbors
                        for (int neighbor = 0; neighbor < V; ++neighbor) {
                            // If there's an edge between frontNode and neighbor AND
                            // the neighbor has not been visited
                            if (adj[front][neighbor] == 1 && !visited[neighbor]) {
                                visited[neighbor] = true;
                                q.push(neighbor);
                            }
                        }
                    
                  
                 }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        

       int count =0;
        vector<bool>visited(V,0);
        for(int i=0;i<V;i++){
             
                if (!visited[i]){
                    
                    count++;
                    bfs(i,visited,adj, V);
             
                       
             
               }
             
             
             
             
        }
        
        return count;
              
    }
};