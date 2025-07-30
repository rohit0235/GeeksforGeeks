class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& arr, int k) {
           
             int n =arr.size();
             sort(arr.begin(),arr.end());
             
             int minsum =0;
             int maxsum =0;
             
             
             int j = n-1;
             int i =0;
             while (i<=j){
                  minsum+=arr[i];
                  j-=k;
                  
                  i++;
             }
             
             
            j = n-1;
             i =0;
             while (i<=j){
                  maxsum+=arr[j];
                  j--;
                  i+=k;
             }
             
             return {minsum, maxsum};
        
    }
};