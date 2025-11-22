class Solution {
  public:
  
    int find(int x , vector<int>&parent){
            if (parent[x]==x) return x;
            
            return find(parent[x],parent);
    }
    void unite(int x , int y , vector<int>&parent){
            
            int lrep = find(x, parent);
            int jrep = find(y, parent);
    
            parent[lrep] = jrep;
    }
      
    int minConnect(int V, vector<vector<int>>& edges) {
        // Code here
          vector<int>parent(V,0);
          for(int i=0;i<V;i++){
               parent[i]=i;
          }if (edges.size() < V - 1) {
            return -1;
        }
          
        //   int ans =0;
        //   int curr =0;
          int count=0;
          for(auto i:edges){
                int  u =i[0];
                 int  v =i[1];
                
                //  if (find(u,parent)!=find(v,parent)){
                    unite(u,v, parent);
                //  }
         
          }
          for(int i=0;i<V;i++){
              if ( parent[i]==i) count++;
          }
          return count-1;
          
          
        //             for(int i=0;i<V;i++){
        //       cout<< parent[i]<<" ";
        //   }
          
        //   cout<<endl;
        //   for(int i=0;i<V;i++){ 
        //       bool fin =false;
                 
        //           for(int j=0;j<V;j++){
                   
        //                 if (j!=i){              
        //                             if (find(i,parent)==find(j,parent)){
        //                                 // cout<<i<<" "<<j<<endl;
        //                                  fin = true;  
        //                           }
                              
        //                 }
        //           }
        //           if (!fin) count++;
        //   }
          
        //   int n = edges.size();
        // //   if (n>=V-1){
        // //         return -1;
        // //   }
        // //   cout<<count<<" ";
        //   if (count==0) return 0;
        // //   if (count<n-1) return -1;
          
        //   return count;
          
    }
};
