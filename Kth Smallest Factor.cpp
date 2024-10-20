class Solution {
  public:
    int kThSmallestFactor(int n, int k) {
            int s=k;
            for (int i=1;i<=n;i++){
               if (n%i==0){
                    s-=1;
                } 
                if (s==0){
                    return i;
                }
                
            }
            return -1;
    }
};
