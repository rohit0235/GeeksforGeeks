class Solution {
  public:
   int count =0;
   
   bool solve(int i, int j,int n, vector<vector<int>>&result){
         
          if (i>=n || j>=n || i<0 || j<0 || result[i][j]!=-1) return false;
          
          result[i][j]=count;
          count++;
              if (count == n * n) {
            return true;
        }

         if( solve(i+2,j+1,n,result)) return true;;
         if (   solve(i+2,j-1,n,result)) return true;
         if( solve(i-2,j-1,n,result)) return true;
          if (solve(i-2,j+1,n,result)) return true;
          if(solve(i-1,j+2,n,result)) return true;
          if(solve(i+1,j+2,n,result)) return true;
          if(solve(i-1,j-2,n,result)) return true;
          if(solve(i+1,j-2,n,result)) return true;
          count--;
           result[i][j]=-1;
          return false;
   }
     
    vector<vector<int>> knightTour(int n) {
        // code here
      
        vector<vector<int>>result(n,vector<int>(n,-1));
        
        // for(int i=0;i<n;i++){
             
        //       for(int j=0;j<n;j++){
                    
        //             if (result[i][j]==-1){
                       
        //             }
        //       }
        // }      
      if(  solve(0,0,n, result)) return result;
      return {{-1}};
  
        //  queue<pair<int,int>>q;
        //  q.push({0,0});
        //  int count =0;
        //  while (!q.empty()){
               
        //          pair<int,int> top = q.front();
        //          q.pop();
        //          int n= q.size();
        //          for(int i=0;i<n;i++){
                     
        //          }
        //          int i=top.first;
        //          int j=top.second;
        //          if (result[i][j]==-1){
        //               result[i][j]=count;
        //               count++;
        //          }
        //          if (i+1<n && j+1<n && result[i+1][j+1]==-1){
        //               q.push({i+1,j+1});
        //          }
                 
        //          if (i+1<n && j-1>=0 && result[i+1][j-1]==-1){
        //               q.push({i+1,j-1});
        //          }
                 
        //          if (i-1>=0 && j+1<n && result[i-1][j+1]==-1){
        //               q.push({i-1,j+1});
        //          }
        //          if (j-1>=0&& i-1>=0 && result[i-1][j-1]==-1){
        //               q.push({i-1,j-1});
        //          }
                 
        //  }
         for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                  cout<<result[i][j]<<" ";
              }
              cout<<endl;
         }
         if (count<n*n) return {{-1}};
         return result;
    }
};