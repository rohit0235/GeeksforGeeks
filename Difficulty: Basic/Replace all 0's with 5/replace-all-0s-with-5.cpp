class Solution {
  public:
    /*you are required to complete this method*/
    int convertFive(int n) {
        // Your code here
             
              int num =0;
              while (n){
                   
                   int mod =n%10;
                   if (mod==0) num =num*10+5;
                   else num=num*10+mod;
                   n=n/10;
              }
              
              int ans =0;
              while (num){
                   
                   int mod =num%10;
           
                   ans=ans*10+mod;
                   num=num/10;
              }
              
              return ans;
         
         
        
    }
};