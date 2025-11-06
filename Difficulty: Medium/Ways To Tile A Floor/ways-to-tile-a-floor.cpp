class Solution {
  public:
    int numberOfWays(int n) {
        // code here
          // in 2*3 we can adjust in 2*1
          // 1 2 3 5 8 13
         if (n==1) return 1;
         
         int i=1;
         int j=2;
         while (n>2){
               int curr=i+j;
               i=j;
               j=curr;
               n--;
         }
         return j;
         
         
         return 0;
         
         
    }
};