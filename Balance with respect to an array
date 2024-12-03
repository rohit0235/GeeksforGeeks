 bool isBalanced(vector<int>& arr, int x) {
                int n =arr.size();
                sort(arr.begin(),arr.end());
             for (int i=0;i<n;i++){
                 if (arr[0]>=x || arr[n-1]<=x) return true; 
                 if (arr[i]==x) return true;
                 else if (arr[i]>x){
                     return (arr[i]-x)==(x-arr[i-1]);
                 }
             }
      
    }
