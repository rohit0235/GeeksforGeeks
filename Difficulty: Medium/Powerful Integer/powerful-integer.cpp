class Solution {
  public:
    int powerfulInteger(vector<vector<int>>& intervals, int k) {
     
          int n = intervals.size();
          
          int maxend =0;
          for(auto p:intervals){
               maxend = max(maxend, p[1]);
          }
          vector<int>ans (maxend,0);
          int j = ans.size();
          for(auto p : intervals){
                
                  int x = p[0];
                  int y = p[1];
                  
                  ans[x-1]++;
                  if (y<j) {
                       ans[y]=ans[y]-1;
                  }
                   
          }
          int count =0;
          if (ans[0]>=k){
                count = max(count , 1);
          }
          for(int i=1;i<j;i++){
                //  cout<<ans[i]<<" ";
                     ans[i]+=ans[i-1];
                   if (ans[i]>=k){
                      count = max(count , i+1);
                  }
     
          }
          
          return count==0 ? -1 :count;
          
          
     
     
        
    }
};