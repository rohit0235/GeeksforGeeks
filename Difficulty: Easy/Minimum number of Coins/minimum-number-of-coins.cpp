class Solution {
  public:
    int findMin(int n) {
        // code here
         
          int coin = (n/10);
          
          int p = n%10;
          if (p<=0) return coin;
           coin += (p/5);
           p= p%5;
               if (p<=0) return coin;
           coin += (p/2);
                p= p%2;
               if (p<=0) return coin;
              coin += (p);
             return coin;
           
    }
};