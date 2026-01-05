class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int maxi =0;
        int sum=0;
        int n = arr.size();
        for(int i=0;i<n;i++){
              if (i<k) sum+=arr[i];
              else {
                   sum-=arr[i-k];
                   sum+=arr[i];
              }
            
             maxi = max(maxi , sum);
            
        }
        
        return maxi;
        
        
    }
};