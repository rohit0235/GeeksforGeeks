    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
              
              int index=-1;
              int n=mat.size();
              int m=mat[0].size();
              
              int p=0;
              int stp=n-1;
              while (p<=stp){
                  
                  
                  int mid=p+(stp-p)/2;
                  
                  if (mat[mid][0]>=x   && mat[mid][m-1]<=x ){
                      index=mid;
                      break;
                  }
                  
               if (mat[mid][0]<=x){
                      index=mid;
                      p=mid+1;
                  }
                 if (mat[mid][0]>x){
                         stp=mid-1;
                  }
                  
              }
            //   cout<<index;
              
            //   for (int i=0;i<n;i++){
            //          if (mat[i][0]==x) return true;
            //          if (mat[i][m-1]==x) return true;
            //          if (mat[i][0]<x && mat[i][m-1]>x ){
            //              index=i;
            //          }
                     
            //   }
              if (index==-1) return false;
              
              int st=0;
              int en=m-1;
              
              while (st<=en){
                  
                  int mid=st+(en-st)/2;
                  
                  if (mat[index][mid]==x) return true;
                else if ( mat[index][mid]>x) en=mid-1;
                else if ( mat[index][mid]<x) st=mid+1;
                
              }
              return false;
   
    }
