class Solution {
  public:
   
    bool pos(vector<int>&arr, int k, int mid){
            int total =0;
            
            for(int i:arr){
                   if(total>k) return false;
                   if(i<mid) total++;
                   else total+=((i+mid-1)/mid);
            }
            
            return total<=k;
    }
    
    int kokoEat(vector<int>& arr, int k) {
          int n =arr.size();
          
          int l =1;
          int r = *max_element(arr.begin(),arr.end());
          int ans = -1;
          while (l<=r){
              
                 int mid =  l + (r-l)/2;
                 
                 if(pos(arr,k, mid)){
                       ans = mid;
                       r=mid-1;
                 }
                 else{
                      l = mid+1;
                 }
                 
          }
          
          return ans;
           
    }
};