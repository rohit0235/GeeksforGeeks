class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
            int n = arr.size();
            
            
            unordered_map<int,int>mp;
             int sum =0;
             int ans=0;
            for(int i:arr){ 
                  
                     sum+=i;
                     if (mp.find(sum-k)!=mp.end()){
                          ans+=mp[sum-k];
                     }
                     if (sum==k){
                           ans++;      
                     }
                     
                     mp[sum]++;
                     
            }       
            
            
            return ans ;
    }
};