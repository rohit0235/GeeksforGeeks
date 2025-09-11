class Solution {
  public:
    

    int minJumps(vector<int>& arr) {
        // code here
             int n= arr.size();
             
             int far =0;
             int curr =0;
             int jump = 0;
             
             for(int i=0;i<n-1;i++){
                   
                     far = max(far, arr[i]+i);
                     
                     if (i==curr){
                          jump++;
                          curr= far;
                     }
             }
             if (curr>=n-1) return jump;
              return -1;
             
             
    }
};
