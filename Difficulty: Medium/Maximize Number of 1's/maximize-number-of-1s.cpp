class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
           
               int count =0;
               int l =0;
                int n = arr.size();
                int maxi = 0;
               for(int r=0;r<n;r++){
                      
                      while (l<=r && count>k){
                            
                            if (arr[l]==0) count--;
                            
                            l++;
                            
                      }
                      
                      
                      if (arr[r]==0) count++;
                      if (count<=k){
                              maxi = max(maxi ,r-l+1);
                      }
                   

               }
               
               return maxi;
              
        
    }
};
