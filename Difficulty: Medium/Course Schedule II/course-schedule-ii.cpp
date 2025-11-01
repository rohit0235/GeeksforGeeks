class Solution {
  public:
   
    vector<int>solve(vector<int>&indegree , unordered_map<int,vector<int>>&adj, int n){
            
             queue<int>q;
             vector<int>res;
             int count =0;
             for(int i=0;i<n;i++){
                  if (indegree[i]==0){
                       q.push(i);
                       res.push_back(i);
                       count++;
                  }
             }
             
             while (!q.empty()){
                   
                    int f = q.front();
                    q.pop();
                    
                    for(auto v:adj[f]){
                           
                         indegree[v]--;
                         if (indegree[v]==0){
                               count++;
                               res.push_back(v);
                               q.push(v);
                         }
                    }
                   
             }
             
             if (count==n) return res;
             else return {};
           
    }
   
    vector<int> findOrder(int n, vector<vector<int>> &pre) {
                  
             
                    vector<int>indegree(n,0);
                    unordered_map<int,vector<int>>adj;
                    for(auto i:pre){
                          int u  =i[0];
                          int v  =i[1];
                          adj[v].push_back(u);
                          indegree[u]++;
                    }
                    
                    return solve(indegree , adj , n );
                    
                    
    }
};