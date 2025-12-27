class Solution {
  public:
     
     bool pos(vector<vector<int>>&mat , int mid , int k){
          
          int cnt =0;
          
          for(int i=0;i<mat.size();i++){
                 int uppper = upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
                 cnt+=uppper;
                 if (cnt>=k) return true;
          }
          return cnt>=k;
     }
    
    int kthSmallest(vector<vector<int>> &mat, int k) {
            
             int n  = mat.size();
             int m  = mat[0].size();
             
             int l=mat[0][0];
             int r=mat[n-1][m-1];
             int ans =-1;
             while (l<=r){
                   
                    int mid =(l+r)/2;
                    
                    if (pos(mat , mid , k)){
                          ans = mid;
                          r = mid-1;
                    }
                    
                    else{
                         l = mid+1;
                    }
                    
             }
             return ans;
        
    }
};
