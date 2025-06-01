class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
          
          int maxsum=INT_MIN;
          int currsum=0;
          
          int n =arr.size();
          
          for(int i=0;i<n;i++){
                 
                  currsum+=arr[i];
                  
                  if (currsum>=maxsum){
                       maxsum=max(maxsum,currsum);
                  }
                  if (currsum<0){
                       currsum=0;
                  }
               
          }
          
          return maxsum;
          
    }
};