class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
         int i=0;
         int j=0;
         int n = a.size();
         int m=b.size();
         int count =1;
         while (i<n && j<m && count<k){
               count++;
               if (a[i]<b[j]){
                    i++;
               }
               else{
                    j++;
               }
         }
         
         while (i<n &&  count<k){
               count++;
               i++;
         }
         
         while ( j<m && count<k){
               count++;
       
                    j++;
 
         }
         
         if(i<n && a[i]<b[j]){
              return a[i];
         }
         else{
              return b[j];
         }
         
    }
};