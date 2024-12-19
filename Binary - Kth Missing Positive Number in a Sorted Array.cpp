class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
      int n =arr.size();
      int ans=k;
      int low=0;
      int high=n-1;
      while (low<=high){
          
          int mid=low+(high-low)/2;
          
           int diff=arr[mid]-mid-1;
           
           if (diff<k){
               low=mid+1;
           }
           else{
               high=mid-1;
           }
          
      }
      return k+high+1;
    //   for (int i=0;i<n;i++){
    //       int diff=arr[i]-i-1;
    //       if (i==n-1 && arr[i]==i+1) return arr[i]+k;
    //       else if (diff<k){
    //           ans=arr[i]+k-diff;
    //       }
    //   }
    //   return ans;
     
    }
};
