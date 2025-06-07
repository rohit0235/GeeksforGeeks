class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
               
             map<int,vector<int>>adj;
            
            for(auto i :edges){
                  
                   int u =i[0];
                   int v =i[1];
                   
                   
                   adj[u].push_back(v);
                   
            }
            
            vector<int>indegree(V,0);
            for(auto i:adj){
                 
                 for(auto j:i.second){
                     
                       indegree[j]++;
                 }
            }
             queue<int>q;
             for(int i=0;i<V;i++){
                    
                    if (indegree[i]==0){
                         q.push(i);
                    }
                   
             }
             
             vector<int>ans;
             while (!q.empty()){
                   
                   int front=q.front();
                   q.pop();
                   ans.push_back(front);
                   for(int v:adj[front]){
                       indegree[v]--;
                        if(indegree[v]==0) {
                             q.push(v); 
                        }
                   }
                   
                   
             }
             
             
             return ans;
             
             
            
               
               
            
    }
};