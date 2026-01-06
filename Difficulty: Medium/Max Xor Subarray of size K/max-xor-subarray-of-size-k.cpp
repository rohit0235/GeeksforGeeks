class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
           int n = arr.size();
           int maxi =0;
           int curr =0;
           for(int i=0;i<n;i++){
                 if (i<k)curr^=arr[i];   
                 else{  
                       maxi = max(maxi ,curr);
                      curr^=arr[i];
                      curr^=arr[i-k];
                          maxi = max(maxi ,curr);
                 }
                 
           
                 
                //  cout<<maxi<<endl;//
           }
           
           return maxi;
    }
};

// 17 11 11 14 1 17 19 14 6 4 6 17
// 6