class Solution {
  public:
    // Function to detect cycle using DSU in an undirected graph.
    
    
    
    
   int find (vector<int>&parent, int x){
         
            
             if (parent[x]==x) return x;
             
             return parent[x]=find(parent,parent[x]);
    };
    
    void unions(int x , int y , vector<int>&parent){
         
               
                int lrep = find(parent,x);
                int jrep = find(parent,y);
               
                parent[lrep]=jrep;
                
                return ;
            
              
    };
    
    
    
    int detectCycle(int V, vector<int> adj[]) {
        // Code here
        
             vector<int>parent(V,0);
             for(int i=0;i<V;i++){
                  parent[i]=i;
             }
             
             
             for(int i=0;i<V;i++){
                  
                   
                     for( auto p :adj[i]){
                          
                         if (i<p)  {
                           int f1 =find(parent, i);
                           int f2 =find(parent, p);
                          
                           if (f1==f2) return true;
                           
                           unions(i,p,parent);
                          
                          }
                          
                     }
                    
             }
             
             return false;
             
             
        
        
        
    }
};