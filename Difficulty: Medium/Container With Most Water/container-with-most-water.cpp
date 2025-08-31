class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        
           int n = arr.size();
           int l =0;
           int r =n-1;
           int maxi = 0;
           while (l<=r){
                   
                   int h = min(arr[l],arr[r]);
                   int w = r-l;
                   
                   maxi = max(maxi, h*w);
                   
                   if (arr[l]<=arr[r]) l++;
                   else r--;
                  
           }
           
           return maxi;
        
    }
};