class Solution {
  public:
    int kThSmallestFactor(int n, int k) {
           for (int i=1;i<=n;i++){
               if (n%i==0){
                    k-=1;
                } 
                if (k==0){
                    return i;
                }
                
            }
            return -1;
    }
};
