class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
                
                int v = adj.size();
                vector<int>result(v,INT_MAX);
                queue<int>q;
                result[src]=0;
                q.push(src);
                
                 
               while (!q.empty()){  
                    
                     int u =q.front();
                     q.pop();
                     
                     for(auto v:adj[u]){ 
                         
                        //  cout<<result[v]<<" "<<result[u]<<endl;
                        
                                if (result[v]>result[u]+1){
                                      result[v]=result[u]+1;
                                             q.push(v);
                                }   
                            
                            
                     }
                 
                 
               } 
               
               for(int i=0;i<result.size();i++){
                    if (result[i]==INT_MAX){ 
                                      result[i]=-1;
                    }
               }
               
               return result;
        
        
        
    }
};