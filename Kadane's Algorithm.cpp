  int maxSubarraySum(vector<int> &arr) {
        int currentsum=0;
        int maxi=INT_MIN;
        
        for (int i=0;i<arr.size();i++){
            currentsum+=arr[i];
           
            maxi = max(maxi, currentsum);
            if (currentsum<0) currentsum=0;
        }
        return maxi;
    }
