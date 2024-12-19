int kthMissing(vector<int> &arr, int k) {
      int n =arr.size();
      int ans=k;
       for (int i=0;i<n;i++){
           int diff=arr[i]-i-1;
           if (i==n-1 && arr[i]==i+1) return arr[i]+k;
           else if (diff<k){
               ans=arr[i]+k-diff;
           }
       }
       return ans;
     
    }
