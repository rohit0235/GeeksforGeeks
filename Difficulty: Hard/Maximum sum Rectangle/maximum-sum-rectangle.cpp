class Solution {
  public:
  
    int kadane (vector<int>&temp){
          
              int currsum =0;
              int maxsum =INT_MIN;
              
              for(int i:temp){
                   
                      currsum +=i;
                      maxsum= max(maxsum, currsum);
                      if (currsum<0){
                            currsum=0;
                      }
                    
              }
              
              
              return maxsum;
           
    }
   
    int maxRectSum(vector<vector<int>> &mat) {
            
            int n = mat.size();
            int m = mat[0].size();
             int maxsum = INT_MIN;
            for(int i=0;i<m;i++){
                          vector<int>temp(n,0);
                   for(int j=i;j<m;j++){
                        
                          
                            for(int k=0;k<n;k++){ 
                                 
                                    temp[k]+=mat[k][j];         
                                  
                            }
                           
                           
                            int sum = kadane(temp);
                            maxsum = max(maxsum , sum);
                   }
            }
            
            return maxsum;
            
    }
};
