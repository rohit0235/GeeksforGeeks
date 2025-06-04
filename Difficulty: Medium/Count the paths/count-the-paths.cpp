class Solution {
  public:
   

 
    int solve(map<int,vector<int>>&mp, int src, int dest,      vector<bool>&visited,      vector<int>&dp ){
           
            
           if (src==dest) return 1;
           if (dp[src] !=-1) return dp[src];
           visited[src] = true;
           
          int f1=0;
           for(auto i : mp[src]){
                
                 if (!visited[i]){
                      
                     f1 +=solve(mp,i,dest,visited,dp);
                     
                 }
                
                
                
           }
           visited[src] = false;
           
           return dp[src]=f1;
    }  
  
    
    int countPaths(vector<vector<int>>& edges, int V, int src, int dest) {
        // Code here 
  
         
          map<int,vector<int>>mp;
          
          for(auto i:edges){
                
                int u =i[0];
                int v =i[1];
                
                mp[u].push_back(v);
          }
           
          vector<bool>visited(V,false);
           vector<int>dp(V,-1);
          return solve(mp, src ,dest,visited,dp);
        
        
         
    }
};