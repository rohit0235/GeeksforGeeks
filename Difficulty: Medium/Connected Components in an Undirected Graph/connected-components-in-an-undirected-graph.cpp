
class Solution {
  public:
  
  void solve(vector<int>&temp,  vector<vector<int>>&adj, int u, vector<bool>&visited){
        
        visited[u]=true;
        temp.push_back(u);
        for(int& v:adj[u]){
               
               if (!visited[v]){
                    solve(temp,adj,v,visited);
               }
               
              
        }
        
       
  }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
             
             vector<vector<int>>adj(V);
             
             for(auto i:edges){
                   
                   int u =i[0];
                   int v =i[1];
                   
                   adj[u].push_back(v);
                   adj[v].push_back(u);
             }
             
              vector<vector<int>>result;
              
              vector<bool>visited(V,0);
             for(int i=0;i<V;i++){
                 
                 if (!visited[i]){
                   vector<int>temp;
                   solve(temp,adj,i,visited);
                   result.push_back(temp);
                 }
                   
                 
             }
             
             return result;
             
             
             
             
    }
};
