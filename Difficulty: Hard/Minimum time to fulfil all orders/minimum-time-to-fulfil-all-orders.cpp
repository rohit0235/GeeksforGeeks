class Solution {
  public:
  
  bool pos(vector<int>& ranks,int mid , int n){
        
          int ts=0;
      
      // r*((k*(k+1))/2) <= mid
      // k^2 + k - 2*mid/r <= 0 ; for k
      for(int &r: ranks){
        int k = (-1 + sqrt(1 + 8.0*mid/r))/2;
        ts += k;
        
        if(ts >= n)
          return true;
      }
      
      return ts>=n;
         
         
  }
    int minTime(vector<int>& ranks, int n) {
          
        //   int n = ranks.size();
            int mini=ranks[0];
      for(int &x: ranks)
        mini = min(mini, x);
      
      int l = 0;
      int r = mini*((n*(n+1))/2);
        //   int l=0;
        //   int r=(n*(n+1))/2;
          int ans =INT_MAX;
          while (l<=r){
               
                int mid = l+(r-l)/2;
                
                if (pos(ranks ,mid , n )){
                     ans = mid;
                     r= mid-1;
                }
                else{
                     l = mid+1;
                }
          }
          
          return ans;
         
               
    }
};