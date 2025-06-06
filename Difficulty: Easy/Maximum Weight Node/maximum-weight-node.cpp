// User function Template for C++
class Solution {
  public:
    int maxWeightCell(vector<int> &exits) {
        // code here
        
        int n =exits.size();
        vector<int>res(n,0);
        for(int i=0;i<n;i++){
               
               if (exits[i]!=-1){
                     res[exits[i]]+=i;
               }
               
        }
          
          
         int maxsum=0;
         int maxindex=0;
         
         for(int i=0;i<n;i++){
               
                if (res[i]>=maxsum){
                     maxsum=res[i];
                     maxindex=i;
                }
              
         }
         
         return maxindex;
        
    }
};