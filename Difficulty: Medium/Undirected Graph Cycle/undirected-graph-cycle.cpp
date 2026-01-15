class Solution {
  public:
  
  
      
    vector<int>parent;
    
    void unite(int i, int j ){
          int lrep = find(i);
          int jrep = find(j);
          
          parent[lrep] = jrep;
    }
    
    int find(int i){
        
         if(parent[i]==i) return i;
         
         return parent[i] = find(parent[i]);
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
           parent.resize(V);
           
           for(int i=0;i<V;i++){
                parent[i]=i;
           }
           
           for(auto i:edges){
                 
                  int findx = find(i[0]);
                  int findy = find(i[1]);
                  
                  if(findx==findy){
                       return true;
                  }
                  unite(findx , findy);
           }
           
           return false;
          
    }
};