class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
         
        if (k==1) return arr;
        
        deque<pair<int,int>>dq;
        vector<int>ans;
        
        // for(int i=0;i<k;i++){
        //      dq.push_back({arr[i],i});
        //  }
        
        //  ans.push_back(dq.front().first);
         int n = arr.size();
         for(int i=0;i<n;i++){
                int idx = dq.front().second;
                
                while (idx<=i-k){
                      dq.pop_front();
                      idx = dq.front().second;
                }
                
                while (!dq.empty() && dq.back().first<=arr[i]){
                      dq.pop_back();
                }
                
                dq.push_back({arr[i],i});
           if(i+1>=k)     ans.push_back(dq.front().first);
         }
         
         return ans;
    }
};