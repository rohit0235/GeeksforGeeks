class Solution {
  public:
    int subarraySum(vector<int>& arr) {
            
              int sum =0;
              int n = arr.size();
              for(int i=0;i<arr.size();i++){
                   sum += arr[i]* (i+1) * (n-i);
              }
              return sum;
             
        
    }
};