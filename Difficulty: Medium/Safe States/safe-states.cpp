class Solution {
  public:
  
  void topo(vector<int>adj[], vector<int>&safe, vector<int>&indegree){
       
          
           queue<int>q;
           int n = indegree.size();
           for(int i=0;i<n;i++){
                if (indegree[i]==0) q.push(i);
           }
           
           
           while (!q.empty()){
                 int i = q.front();
                 q.pop();
                 safe.push_back(i);
                 
                 for(auto nbr:adj[i]){
                       indegree[nbr]--;
                       if (indegree[nbr]==0){
                            q.push(nbr);
                       }
                       
                 }
                 
           }
           
  }
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
             
             vector<int>safe, indegree(V,0);
             
               vector<int> adj[V];
               
             for(auto& e:edges){
                adj[e[1]].push_back(e[0]);
                indegree[e[0]]++;
            }
            
            topo(adj, safe , indegree);
            
            return safe;
    }
};