class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
         
        if (k==1) return arr;
        
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        
        for(int i=0;i<k;i++){
             pq.push({arr[i],i});
         }
        
         ans.push_back(pq.top().first);
         int n = arr.size();
         for(int i=k;i<n;i++){
                pq.push({arr[i],i});
                int idx = pq.top().second;
                
                while (idx<=i-k){
                      pq.pop();
                      idx = pq.top().second;
                }
                
                ans.push_back(pq.top().first);
         }
         
         return ans;
    }
};