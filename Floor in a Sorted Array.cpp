    int findFloor(vector<int>& arr, int k) {
         int n=arr.size();
         for (int i=n-1;i>=0;i--){
             if (arr[i]<=k){
                 return i;
             }
         }
         return -1;
    }
