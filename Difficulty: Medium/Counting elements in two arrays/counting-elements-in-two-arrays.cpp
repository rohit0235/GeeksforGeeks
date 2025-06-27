class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
          sort(b.begin(),b.end());
           vector<int>res;
           
           for(int i:a){
                 
                  int l=0;
                  int r= b.size()-1;
                   int ans=-1;
                  while (l<=r){
                        
                         int mid = l+(r-l)/2;
                         
                         if (b[mid]>i){ 
                          
                                ans =mid;
                                r=mid-1;
                         }
                         else{
                              l=mid+1;
                         }
                        
                  }
                  
                  
                  if (ans==-1) res.push_back(b.size());
                  else res.push_back(ans);
                 
           }
           
           return res;
    }
};