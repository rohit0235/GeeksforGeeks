class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
                  
            // 11 - 5 -5 +1
            // 3 - 1 -2 +1 
                 int n =arr.size();
            int idx=n;
       
            int l=0;
            int r=n-1;
            
            while (l<=r){
                   
                   int mid =(l+r)/2;
                   
                   if (arr[mid]-mid-1>=k){
                          idx =mid;
                          r=mid-1;
                   }
                   else{
                        l = mid+1;
                   }
            }
            
            // if (idx ==-1) return arr[n-1]+k;
            // cout<<idx<<endl;
            return idx+k;
    }
};