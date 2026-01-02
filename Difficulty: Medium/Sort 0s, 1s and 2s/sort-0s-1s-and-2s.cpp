class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
         int n = arr.size();
         int i=0;
         int j=n-1;
        //  int x =0;
        //  int y=n-1;
      
         for(int k=0;k<n;k++){
               if (arr[k]==0){
                    swap(arr[i],arr[k]);
                    i++;
               }

         }
    
         for(int k=0;k<n;k++){
               if (arr[k]==1){
                    swap(arr[i],arr[k]);
                    i++;
               }

         }
    
    }
};