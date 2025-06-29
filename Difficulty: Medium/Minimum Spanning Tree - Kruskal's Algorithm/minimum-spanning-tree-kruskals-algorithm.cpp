// User function Template for C++
class Solution {
  public:
      
    vector<int>rank;
       void setp(int V, vector<int>&parent){
               
                for(int i=0;i<V;i++){
                     parent[i]=i;
                   rank.push_back(0);
                }
       }
      int find(vector<int>&parent , int x){
             
               if (parent[x]==x) return x;
               
               return find(parent , parent[x]);
      }
      
      
      void Union(vector<int>&parent ,  int x , int y){
            
                 int lrep = find(parent ,x);
                 int jrep = find(parent ,y);
                 
                 if(rank[lrep]<rank[jrep])           parent[lrep]=jrep;
                 if(rank[jrep]<rank[lrep])           parent[jrep]=lrep;
                 
                 else {
                      parent[lrep]=jrep;
                      rank[jrep]++;
                 }
      }
  
    static   bool comp(vector<int>&a,vector<int>&b){
            
              if (a[2]<b[2]) return true;
              else return false;
       }
  
     
    int kruskalsMST(int V, vector<vector<int>> &edges) {
        // code here
              
            //   vector<vector<int>>adj(V,vector<int>(3,0));
      
                     vector<int>parent(V,0);
   
               setp(V,parent);
            //   for(auto i:edges){
                    
            //           int w = i[2];
            //           int u = i[0];
            //           int v = i[1];
                       
                       
            //           adj[w].push_back({u,v});
            //           adj[w].push_back({v,u});
                    
            //   }
              
              
              sort(edges.begin(),edges.end(),comp);
              int count=0;
              
              for(auto j:edges){
                               int w =j[2];
                               int x =j[0];
                               int y =j[1];
                             
                              if (find(parent,x)!=find(parent,y)){
                                    
                                    Union(parent , x, y);
                                    count+=w;
                                
                              } 
                    
                    
              }
              
              return count;
              
              
             
             
             
             
    }
};