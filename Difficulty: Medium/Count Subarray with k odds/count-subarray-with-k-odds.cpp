class Solution {
  public:
  
    int ans(vector<int>&arr ,int k){
                    
           int l=0;
           int total =0;
           int odd =0;
           int n= arr.size();
        //   unordered_map<int,int>mp;
           for(int r=0;r<n;r++){ 
                 if(arr[r]%2==1) odd++;
                //   if(odd==k) total++;
                 while (odd>k){
                   
                      if(arr[l]%2==1){
 
                        odd--;
                      }
                    //   if(odd==k) total++;
                      l++;
                 }
             total+=r-l+1;
                  
                
           }
           
            //  while (odd==k){
                 
            //       if(arr[l]%2==1){

            //         odd--;
            //       }    
                  
            //       if(odd==k) total++;
            //       l++;
            //  }
          
 
                 
           return total;
    }
    int countSubarrays(vector<int>& arr, int k) {
//   cout<<ans(arr,k)<<endl;
//   cout<<ans(arr,k-1)<<endl;
         return ans(arr,k)-ans(arr, k-1);
           
           //98 97 27 56 84 37 88 97
            // 4
// 41 91 99 50 48 19 73 11 40 3
// 2
    }
};