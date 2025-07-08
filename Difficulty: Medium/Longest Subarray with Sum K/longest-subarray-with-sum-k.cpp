class Solution {
  public:
  
  // 10 5 2 7 1 -10 
  
  // 10 15 - 2
  // 5 2 7 1 - 4
  // 
    int longestSubarray(vector<int>& arr, int k) {
                 // 10 15 17 24 25 
                int n =arr.size();
                int maxi =0;
                int sum =0;
                unordered_map<int,int>mp;
                for(int r=0;r<n;r++){
                   sum+=arr[r];
                    if (sum==k){
                         maxi = r+1;
                    }
                    if (mp.find(sum-k)!=mp.end()){ 
                             maxi =max(maxi  ,  r-mp[sum-k])      ;
                    }
                     if (mp.find(sum)==mp.end()) mp[sum]=r;
                       
                }
                
                
                    if (sum==k){
                         maxi = n;
                    }
                
                return maxi;
                 
                 
        
    }
};