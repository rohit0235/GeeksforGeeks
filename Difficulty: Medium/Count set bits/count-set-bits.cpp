class Solution {
  public:
   
    int largp2(int n){
         int x =0;
         while ((1<<x)<=n){
               x++;
         }
         return x-1;
    }
    
    int countSetBits(int n) {
        // 0 0 1
       if (n==0) return 0;
       int x = largp2(n);
       int btill2x =  x*(1<<(x-1));
       int after2x =  n-(1<<x)+1;
       int rem = n-(1<<x);
       int ans = btill2x+after2x+countSetBits(rem);
       return ans;
   
        
    }
};
