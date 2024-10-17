class Solution {
  public:
    int countPairs(vector<int> arr, int target) {
         int count=0;
         int n=arr.size();
         sort(arr.begin(),arr.end());
         for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                if (arr[i]+arr[j]<target){
                 count++;
                }
                 else {
                     break;
                  }
            }
             
         }
         return count;
        
        
    }
};
