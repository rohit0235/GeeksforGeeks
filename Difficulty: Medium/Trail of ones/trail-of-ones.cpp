class Solution {
  public:
    int countConsec(int n) {
   
             // 
             
             int prev1 =1;
             int prev2 =2;
             
             for(int i=2;i<=n;i++){
                  
                     int curr =prev1+prev2;
                     prev1=prev2;
                     prev2=curr;
                     
             }
             
             int total = pow(2,n);
             return total-prev2;
                 
         
         
         
    }
};