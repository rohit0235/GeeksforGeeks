class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
    
          vector<int>parent(V,-1);
          vector<int>mst(V,false);
          vector<int>key(V,INT_MAX);
          
          
          parent[0]=-1;
          key[0]=0;
        //   mst[0]=true;
          
          
          for(int i=0;i<V;i++){
               
                       
                    int mini =INT_MAX;
                    int u;
                    
                    for(int v=0;v<V;v++){
                           
                            if (mst[v]==false && key[v]<mini){
                                   
                                   u=v;
                                   mini=key[v];
                            }
                          
                    }
                    
                    mst[u]=true;
                    for(auto v:adj[u]){
                          
                           int dest = v[0];
                           int w = v[1];
                           
                           if (mst[dest]==false && w<key[dest]){
                                   
                                   parent[dest]=u;
                                   key[dest]=w;
                                   
                                  
                           }
                          
                            
                    }
                    
                    
                    
                    
                    
                    
                  
                     
          }
          
          
          int total =0;
          
          for(int i=0;i<V;i++){
              if (key[i]!=INT_MAX) total+=key[i];
          }
          
          return total;
          
          
          
          
          
        
    }
};