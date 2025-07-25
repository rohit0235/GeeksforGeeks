class Solution {
  public:

    int maxCircularSum(vector<int> &arr) {
   int n = arr.size();
        
        int maxKadane = INT_MIN, currentMax = 0;
        
        int minKadane = INT_MAX, currentMin = 0;
        int totalSum = 0;
        
        for(int i=0; i<n; i++)
        {
            currentMax = max(arr[i], currentMax + arr[i]);
            maxKadane = max(maxKadane, currentMax);
            
            currentMin = min(arr[i], currentMin + arr[i]);
            minKadane = min(minKadane, currentMin);
            
            totalSum += arr[i];
        }
        
        if(maxKadane < 0)
            return maxKadane;
            
        return max(maxKadane, totalSum - minKadane);
    }
   
};
